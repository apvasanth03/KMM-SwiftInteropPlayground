# KMM Concurrency

<!-- TOC -->

* [KMM Concurrency](#kmm-concurrency)
    * [Suspend](#suspend)
        * [Official Support](#official-support)
        * [Custom Support (using SuspendAdapter)](#custom-support--using-suspendadapter-)
        * [Swift Concurrency Adapter over SuspendAdapter](#swift-concurrency-adapter-over-suspendadapter)
    * [Flow](#flow)
        * [Official Support](#official-support)
        * [Custom Support (using FlowAdapter)](#custom-support--using-flowadapter-)
        * [Combine Adapter over FlowAdapter](#combine-adapter-over-flowadapter)
    * [Reference](#reference)

<!-- TOC -->

## Suspend

### Official Support

* Kotlin `suspend` function are represented as `completionHandler:/async` in swift.
* Both `completionHandler:/async` doesn't support cancellation.

**Example**

```kotlin
// Kotlin - GetUserUseCase.kt

class GetUserUseCase {

    suspend fun execute(): User {
        return withContext(Dispatchers.IO) {
            delay(3000L)
            val user = User(1, "Kotlin")
            user
        }
    }
}

data class User(
    val id: Int,
    val name: String
)
```

```swift
// Swift - completionHandler

let getUserUseCase1 = GetUserUseCase()
getUserUseCase1.execute(completionHandler: { user, error in
    guard let user else {
        print("Error")
        return
    }
    
    print("User - \(user)")
})
```

```swift
// Swift - async

let getUserUseCase2 = GetUserUseCase()
let task = Task {
    let user = try await getUserUseCase2.execute()
    print("User - \(user)")
}
```

### Custom Support (using SuspendAdapter)

* `SuspendAdapter`- Custom adapter to convert `suspend` function to `callback` based function.
* `SuspendAdapter` supports cancellation.

```kotlin
// Kotlin - SuspendAdapter.kt

/**
 * [SuspendAdapter] - Adapter class to convert Kotlin [suspend] to Swift Callbacks.
 * It supports Cancellation as well.
 */
class SuspendAdapter<T : Any>(
    private val scope: CoroutineScope,
    private val suspender: suspend () -> T
) {

    fun subscribe(
        onSuccess: (item: T) -> Unit,
        onThrow: (error: Throwable) -> Unit
    ): Canceller {
        val job = scope.launch {
            try {
                onSuccess(suspender())
            } catch (error: Throwable) {
                onThrow(error)
            }
        }

        return JobCanceller(job)
    }
}
```

**Example**

```kotlin
// Kotlin - GetUserUseCase.kt

class GetUserUseCase {

    private val scope = CoroutineScope(SupervisorJob() + Dispatchers.IO)

    suspend fun execute(): User {
        return withContext(Dispatchers.IO) {
            delay(3000L)
            val user = User(1, "Kotlin")
            user
        }
    }

    fun executeIos(): SuspendAdapter<User> {
        return SuspendAdapter(scope) {
            execute()
        }
    }
}

data class User(
    val id: Int,
    val name: String
)
```

```swift
// Swift - SuspendAdapter Usage

let getUserUseCase1 = GetUserUseCase()
let Canceller = getUserUseCase1.executeIos().subscribe(
    onSuccess: { user in
        print("OnSuccess - \(user)")
    },
    onThrow: { kotlinThrowable in
        print("OnThrowable - \(kotlinThrowable)")
    }
)
```

### Swift Concurrency Adapter over SuspendAdapter

* `SwiftConcurrencyAdapter`- In iOS side we can create Adapter to convert `SuspendAdapter`
  to `SwiftConcurrency (async-await)` function.

```swift
// Swift - SwiftConcurrencyAdapter.swift

/*
 Create a Async function from the supplied `SuspendAdapter`.
 */
func createAsync<T>(_ suspendAdapter: SuspendAdapter<T>) async throws -> T {
    var canceller: Canceller?
    let onCancel = { canceller?.cancel() }
    
    return try await withTaskCancellationHandler(
        operation: {
            try await withCheckedThrowingContinuation { continuation in
                canceller = suspendAdapter.subscribe(
                    onSuccess: { value in
                        continuation.resume(returning: value)
                    },
                    onThrow: { throwable in
                        continuation.resume(throwing: KotlinError(throwable))
                    }
                )
            }
        },
        onCancel: {
            onCancel()
        }
    )
}

/*
 Wraps a `KotlinThrowable` in a `LocalizedError` which can be used as  a Combine error type
 */
class KotlinError: LocalizedError {
    let throwable: KotlinThrowable
    
    init(_ throwable: KotlinThrowable) {
        self.throwable = throwable
    }
    var errorDescription: String? {
        throwable.message
    }
}
```

**Example**

```swift
// Swift - SwiftConcurrencyAdapter Usage

let task = Task {
    let getUserUseCase1 = GetUserUseCase()
    let user = try await createAsync(getUserUseCase1.executeIos())
    print(user)
}
```

## Flow

### Official Support

* Kotlin `Flow` cannot be consumed directly from Swift.

### Custom Support (using FlowAdapter)

* `FlowAdapter`- Custom adapter to convert `Flow` to `callback` based function.
* `FlowAdapter` supports cancellation.

```kotlin
// Kotlin - FlowAdapter.kt

/**
 * [FlowAdapter] - Adapter class to convert Kotlin [Flow] to Swift Callbacks.
 * It supports Cancellation as well.
 */
class FlowAdapter<T : Any>(
    private val scope: CoroutineScope,
    private val flow: Flow<T>
) {

    fun subscribe(
        onEach: (item: T) -> Unit,
        onComplete: () -> Unit,
        onThrow: (error: Throwable) -> Unit
    ): Canceller {
        val job = flow.onEach { onEach(it) }
            .catch { onThrow(it) }
            .onCompletion { onComplete() }
            .launchIn(scope)

        return JobCanceller(job)
    }
}

/**
 * Create a [FlowAdapter] from this [Flow] to make it easier to interact with from Swift.
 */
fun <T : Any> Flow<T>.asCallbacks(scope: CoroutineScope) =
    FlowAdapter(scope, this)
```

**Example**

```kotlin
// Kotlin - KMMViewModel.kt

class KMMViewModel {

    private val viewModelScope = MainScope()

    private val _uiStateStream = MutableStateFlow("")
    val uiStateStream: StateFlow<String> = _uiStateStream

    // Exposes [FlowAdapter] from the [Flow] to make it easier to interact with from Swift.
    val uiStateAsCallback: FlowAdapter<String> by lazy { uiStateStream.asCallbacks(viewModelScope) }

    init {
        initializeSteam()
    }

    private fun initializeSteam() {
        viewModelScope.launch {
            for (i in 1..100) {
                delay(3000L)
                _uiStateStream.value = "Kotlin $i"
            }
        }
    }
}
```

```swift
// Swift - FlowAdapter Usage

let kmmViewModel = KMMViewModel()
let canceller = kmmViewModel.uiStateAsCallback.subscribe { str in
    print("OnEach - \(str)")
} onComplete: {
    print("onComplete")
} onThrow: { kotlinThrowable in
    print("OnThrowable - \(kotlinThrowable)")
}

Task {
    try await Task.sleep(for: .seconds(10))
    canceller.cancel()
}
```

### Combine Adapter over FlowAdapter

* `CombineAdapter`- In iOS side we can create Adapter to convert `FlowAdapter`
  to `Combine (Publisher)` function.

```swift
// Swift - CombineAdapter Usage

/*
 Create a Combine publisher from the supplied `FlowAdapter`.
 
 Use this in contexts where more transformation will be done on the Swift side before the value is bound to UI
 */
func createPublisher<T>(_ flowAdapter: FlowAdapter<T>) -> AnyPublisher<T, KotlinError> {
    return Deferred<Publishers.HandleEvents<PassthroughSubject<T, KotlinError>>> {
        let subject = PassthroughSubject<T, KotlinError>()
        let canceller = flowAdapter.subscribe(
            onEach: { item in subject.send(item) },
            onComplete: { subject.send(completion: .finished) },
            onThrow: { error in subject.send(completion: .failure(KotlinError(error))) }
        )
        return subject.handleEvents(receiveCancel: { canceller.cancel() })
    }.eraseToAnyPublisher()
}

/*
 Prepare the supplied `FlowAdapter` to be bound to UI.
 
 The `onEach` callback will be called from `DispatchQueue.main` on every new emission.
 
 Note that this calls `assertNoFailure()` internally so you should handle errors upstream to avoid crashes.
 */
func doPublish<T>(_ flowAdapter: FlowAdapter<T>, onEach: @escaping (T) -> Void) -> Cancellable {
    return createPublisher(flowAdapter)
        .assertNoFailure()
        .compactMap { $0 }
        .receive(on: DispatchQueue.main)
        .sink { onEach($0) }
}

/*:
 Wraps a `KotlinThrowable` in a `LocalizedError` which can be used as  a Combine error type
 */
class KotlinError: LocalizedError {
    let throwable: KotlinThrowable
    
    init(_ throwable: KotlinThrowable) {
        self.throwable = throwable
    }
    var errorDescription: String? {
        throwable.message
    }
}
```

**Example**

```swift
// Swift - CombineAdapter Usage

let kmmViewModel = KMMViewModel()
let cancellable = createPublisher(kmmViewModel.uiStateAsCallback)
    .sink(
        receiveCompletion: { completion in
            print("OnCompletion - \(completion)")
        },
        receiveValue: { value in
            print("OnNext - \(value)")
        }
    )
```

## Reference

* https://dev.to/russhwolf/series/12632



