/*:
 # Concurrency - Suspend - Official Support
 
 Swift interop with KMM for - "suspend function"
 */

import UIKit
import Foundation
import shared
import PlaygroundSupport

PlaygroundPage.current.needsIndefiniteExecution = true

//: # CompletionHandler

/*:
 ## Suspend
 
 Kotlin - `suspend`
 
 Swift - `completionHandler`
 */
let getUserUseCase1 = GetUserUseCase()
getUserUseCase1.execute(completionHandler: { user, error in
    guard let user else {
        print("Error")
        return
    }
    
    print("User - \(user)")
})


//: # Async-Await

/*:
 ## Suspend
 
 Kotlin - `suspend`
 
 Swift - `async`
 */
let getUserUseCase2 = GetUserUseCase()
let task = Task {
    let user = try await getUserUseCase2.execute()
    print("User - \(user)")
}


