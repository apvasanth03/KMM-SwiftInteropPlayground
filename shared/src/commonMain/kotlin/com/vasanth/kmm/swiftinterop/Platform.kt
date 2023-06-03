package com.vasanth.kmm.swiftinterop

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform