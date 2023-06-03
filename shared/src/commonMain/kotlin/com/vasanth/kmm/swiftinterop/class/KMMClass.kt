package com.vasanth.kmm.swiftinterop.`class`

/**
 * KMM Class - Used to understand Swift interop with KMM for "class"
 */
class KMMClass(
    private val prop1: String,
    private val prop2: Int
) {

    fun getProp1(): String {
        return prop1
    }

    fun getProp2(): Int {
        return prop2
    }
}