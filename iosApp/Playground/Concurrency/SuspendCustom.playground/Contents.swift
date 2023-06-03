/*:
 # Concurrency - Suspend - Custom Support
 
 Swift interop with KMM for - "suspend function"
 */

import UIKit
import Foundation
import shared
import PlaygroundSupport

PlaygroundPage.current.needsIndefiniteExecution = true

/*:
 ## Suspend
 
 Kotlin - `suspend`
 
 Swift - `SuspendAdapter`
 */
let getUserUseCase1 = GetUserUseCase()
let Canceller = getUserUseCase1.executeIos().subscribe(
    onSuccess: { user in
        print("OnSuccess - \(user)")
    },
    onThrow: { kotlinThrowable in
        print("OnThrowable - \(kotlinThrowable)")
    }
)



