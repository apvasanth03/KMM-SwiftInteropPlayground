/*:
 # Collection
 
 Swift interop with KMM for - "Collection Types"
 */

import UIKit
import Foundation
import shared

//: # List

/*:
 ## List
 
 Kotlin - `List`
 
 Swift - `Array`
 */
let arr: [String] = ["Kotlin", "Swift"]
var kmmArr: [String] = KMMCollectionKt.takeAndReturnList(list: arr)
kmmArr


//: # Set

/*:
 ## Set
 
 Kotlin - `Set`
 
 Swift - `Set`
 */
let set: Set<String> = ["Kotlin", "Swift"]
var kmmSet: Set<String> = KMMCollectionKt.takeAndReturnSet(set: set)
kmmSet


//: # Map

/*:
 ## Map
 
 Kotlin - `Map`
 
 Swift - `Dictionary`
 */
let map: [String:String] = ["Kotlin": "Swift"]
var kmmMap: [String:String] = KMMCollectionKt.takeAndReturnMap(map: map)
kmmMap


//: # MutableList

/*:
 ## MutableList
 
 Kotlin - `MutableList`
 
 Swift - `NSMutableArray`
 */
let nsMutableArray: NSMutableArray = ["Kotlin", "Swift"]
let kmmNsMutableArray: NSMutableArray = KMMMutableCollectionKt.takeAndReturnMutableList(mutableList: nsMutableArray)
kmmNsMutableArray


//: # MutableSet

/*:
 ## MutableSet
 
 Kotlin - `MutableSet`
 
 Swift - `NSMutableSet`
 */
let kotlinMutableSet: KotlinMutableSet<NSString> = KotlinMutableSet(set: set)
let kmmNsMutableSet: NSMutableSet = KMMMutableCollectionKt.takeAndReturnMutableSet(mutableSet: kotlinMutableSet)
kmmNsMutableSet


//: # MutableMap

/*:
 ## MutableMap
 
 Kotlin - `MutableMap`
 
 Swift - `NSMutableDictionary`
 */
let kotlinMutableDictionary: KotlinMutableDictionary<NSString, NSString> = KotlinMutableDictionary(dictionary: map)
let kmmNsMutableMap: NSMutableDictionary = KMMMutableCollectionKt.takeAndReturnMutableMap(mutableMap: kotlinMutableDictionary)
kmmNsMutableMap

