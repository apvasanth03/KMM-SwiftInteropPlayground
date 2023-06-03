/*:
 # Concurrency - Suspend to SwiftConcurrency
 
 Swift interop with KMM for - "suspend"
 */

import UIKit
import Foundation
import shared
import PlaygroundSupport
import Combine

PlaygroundPage.current.needsIndefiniteExecution = true

/*:
 ## Swift Concurrency
 */

/*:
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


/*:
 ## Suspend
 
 Kotlin - `suspend`
 
 Swift - `async-await`
 */
let task = Task {
    let getUserUseCase1 = GetUserUseCase()
    let user = try await createAsync(getUserUseCase1.executeIos())
    print(user)
}
