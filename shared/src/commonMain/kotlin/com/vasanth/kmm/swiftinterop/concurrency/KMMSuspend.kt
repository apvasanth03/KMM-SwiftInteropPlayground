package com.vasanth.kmm.swiftinterop.concurrency

import com.vasanth.kmm.swiftinterop.concurrency.adapter.SuspendAdapter
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.delay
import kotlinx.coroutines.withContext

/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */

data class User(
    val id: Int,
    val name: String
)

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