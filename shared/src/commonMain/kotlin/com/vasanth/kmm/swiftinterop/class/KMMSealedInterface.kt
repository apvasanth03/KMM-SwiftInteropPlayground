package com.vasanth.kmm.swiftinterop.`class`

/**
 * KMM Sealed Interface - Used to understand Swift interop with KMM for "Sealed Interface"
 */
sealed interface KMMSealedInterface {

    class SubClass1(
        val prop1: String,
        val prop2: Int
    ) : KMMSealedInterface

    class SubClass2(
        val prop1: String,
        val prop2: Int
    ) : KMMSealedInterface

}