package com.vasanth.kmm.swiftinterop.concurrency.adapter

import com.vasanth.kmm.swiftinterop.concurrency.canceller.Canceller
import com.vasanth.kmm.swiftinterop.concurrency.canceller.JobCanceller
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.launch

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