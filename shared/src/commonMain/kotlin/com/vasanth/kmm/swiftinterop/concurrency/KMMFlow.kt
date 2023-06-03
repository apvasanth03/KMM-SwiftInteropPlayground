package com.vasanth.kmm.swiftinterop.concurrency

import com.vasanth.kmm.swiftinterop.concurrency.adapter.FlowAdapter
import com.vasanth.kmm.swiftinterop.concurrency.adapter.asCallbacks
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.cancel
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch

/**
 * KMM ViewModel - Used to understand Swift interop with KMM for "flow"
 */
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

    fun clear() {
        viewModelScope.cancel()
    }
}