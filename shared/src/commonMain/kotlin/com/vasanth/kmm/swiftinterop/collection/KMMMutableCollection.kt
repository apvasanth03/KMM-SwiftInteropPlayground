package com.vasanth.kmm.swiftinterop.collection

/**
 * KMM Mutable Collection - Used to understand Swift interop with KMM for "MutableList, MutableSet, MutableMap"
 */

// region MUTABLE_LIST
/**
 * Take and return MutableList.
 *
 * @param mutableList MutableList.
 *
 * @return MutableList.
 */
fun takeAndReturnMutableList(mutableList: MutableList<String>): MutableList<String> {
    return mutableList
}
// endregion


// region MUTABLE_SET
/**
 * Take and return MutableSet.
 *
 * @param mutableSet MutableSet.
 *
 * @return MutableSet.
 */
fun takeAndReturnMutableSet(mutableSet: MutableSet<String>): MutableSet<String> {
    return mutableSet
}
// endregion


// region MUTABLE_MAP
/**
 * Take Map and return MutableMap.
 *
 * @param mutableMap MutableMap.
 *
 * @return MutableMap.
 */
fun takeAndReturnMutableMap(mutableMap: MutableMap<String, String>): MutableMap<String, String> {
    return mutableMap
}
// endregion


