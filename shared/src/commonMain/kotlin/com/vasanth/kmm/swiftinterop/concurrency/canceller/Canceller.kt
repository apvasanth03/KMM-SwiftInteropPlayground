package com.vasanth.kmm.swiftinterop.concurrency.canceller

import kotlinx.coroutines.Job

interface Canceller {
    fun cancel()
}

class JobCanceller(private val job: Job) : Canceller {
    override fun cancel() {
        job.cancel()
    }
}