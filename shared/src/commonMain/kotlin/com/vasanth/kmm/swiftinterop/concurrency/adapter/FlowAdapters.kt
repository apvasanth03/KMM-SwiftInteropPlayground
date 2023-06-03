package com.vasanth.kmm.swiftinterop.concurrency.adapter

import com.vasanth.kmm.swiftinterop.concurrency.canceller.Canceller
import com.vasanth.kmm.swiftinterop.concurrency.canceller.JobCanceller
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.flow.launchIn
import kotlinx.coroutines.flow.onCompletion
import kotlinx.coroutines.flow.onEach

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