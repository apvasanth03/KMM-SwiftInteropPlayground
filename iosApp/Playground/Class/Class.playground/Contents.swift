/*:
 # Class
 
 Swift interop with KMM for - "class"
 */

import UIKit
import Foundation
import shared

/*:
 ## Class
 
 Kotlin - `class`
 
 Swift - `class`
 */
let kmmClass = KMMClass(
    prop1: "Prop1",
    prop2: 1
)
kmmClass.getProp1()
kmmClass.getProp2()


/*:
 ## Data Class
 
 Kotlin - `data class`
 
 Swift - `class`
 */
let kmmDataClass = KMMDataClass(
    prop1: "Prop1",
    prop2: 1
)
kmmDataClass.prop1
kmmDataClass.prop2


/*:
 ## Enum Class
 
 Kotlin - `enum class`
 
 Swift - `class`
 */
let kmmEnumClass = KMMEnumClass.obj1
kmmEnumClass


/*:
 ## Sealed Class
 
 Kotlin - `sealed class`
 
 Swift - `class`
 */
let kmmSealedClass = KMMSealedClass.SubClass1(
    prop1: "Prop1",
    prop2: 1
)
kmmSealedClass.prop1
kmmSealedClass.prop2


/*:
 ## Object
 
 Kotlin - `object`
 
 Swift - `class with single instance (shared property)`
 */
let kmmObject = KMMObject.shared
kmmObject.getMessage()


/*:
 ## Interface
 
 Kotlin - `interface`
 
 Swift - `protocol`
 */
class KMMInterfaceImpl: KMMInterface {
    
    func getMessage() -> String {
        return "Swift ❤️ Kotlin"
    }
}

/*:
 ## Sealed Interface
 
 Kotlin - `sealed interface`
 
 Swift - `protocol`
 */
let kmmSealedInterface: KMMSealedInterface = KMMSealedInterfaceSubClass1(
    prop1: "Prop1",
    prop2: 1
)
kmmSealedInterface



