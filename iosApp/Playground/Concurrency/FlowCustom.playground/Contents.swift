/*:
 # Concurrency - Flow - Custom Support
 
 Swift interop with KMM for - "Flow"
 */

import UIKit
import Foundation
import shared
import PlaygroundSupport

PlaygroundPage.current.needsIndefiniteExecution = true

/*:
 ## Flow
 
 Kotlin - `Flow`
 
 Swift - `FlowAdapter`
 */
let kmmViewModel = KMMViewModel()
let canceller = kmmViewModel.uiStateAsCallback.subscribe { str in
    print("OnEach - \(str)")
} onComplete: {
    print("onComplete")
} onThrow: { kotlinThrowable in
    print("OnThrowable - \(kotlinThrowable)")
}

Task {
    try await Task.sleep(for: .seconds(10))
    canceller.cancel()
}

