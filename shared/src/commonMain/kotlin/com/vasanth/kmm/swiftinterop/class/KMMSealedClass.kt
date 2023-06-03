package com.vasanth.kmm.swiftinterop.`class`

/**
 * KMM Sealed Class - Used to understand Swift interop with KMM for "Sealed Class"
 */
sealed class KMMSealedClass(
    val prop1: String
) {

    class SubClass1(
        prop1: String,
        val prop2: Int
    ) : KMMSealedClass(prop1)

    class SubClass2(
        prop1: String,
        val prop2: Int
    ) : KMMSealedClass(prop1)

}
