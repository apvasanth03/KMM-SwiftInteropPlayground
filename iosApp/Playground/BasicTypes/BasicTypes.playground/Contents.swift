/*:
 # Basic Types
 
 Swift interop with KMM for - "Basic Types"
 */

import UIKit
import Foundation
import shared

//: # Numbers

/*:
 ## Bytes
 
 Kotlin - `Bytes`
 
 Swift - `Int8`
 */
let int8: Int8 = 1
KMMNumbersKt.takeAndReturnByte(byte: int8)

/*:
 ## Short
 
 Kotlin - `Short`
 
 Swift - `Int16`
 */
let int16: Int16 = 1
KMMNumbersKt.takeAndReturnShort(short: int16)

/*:
 ## Int
 
 Kotlin - `Int`
 
 Swift - `Int32`
 */
let int32: Int32 = 1
KMMNumbersKt.takeAndReturnInt(int: int32)

/*:
 ## Long
 
 Kotlin - `Long`
 
 Swift - `Int64`
 */
let int64: Int64 = 1
KMMNumbersKt.takeAndReturnLong(long: int64)

/*:
 ## Float
 
 Kotlin - `Double`
 
 Swift - `Float`
 */
let float: Float = 1.0
KMMNumbersKt.takeAndReturnFloat(float: float)

/*:
 ## Double
 
 Kotlin - `Double`
 
 Swift - `Int64`
 */
let double: Double = 1.0
KMMNumbersKt.takeAndReturnDouble(double: double)


//: # Boolean

/*:
 ## Boolean
 
 Kotlin - `Boolean`
 
 Swift - `Bool`
 */
let boolean: Bool = true
KMMBooleanKt.takeAndReturnBoolean(boolean: boolean)


//: # Character & String

/*:
 ## Character
 
 Kotlin - `Boolean`
 
 Swift - `UniChar`
 */
let uniChar: UniChar = ",".utf16.first!
KMMStringKt.takeAndReturnChar(char: uniChar)

/*:
 ## String
 
 Kotlin - `String`
 
 Swift - `String¯`
 */
let string: String = "Swift ❤️ Kotlin"
KMMStringKt.takeAndReturnString(string: string)



