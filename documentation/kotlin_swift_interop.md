# Kotlin Swift Interop Mappings

<!-- TOC -->

* [Kotlin Swift Interop Mappings](#kotlin-swift-interop-mappings)
    * [Reference](#reference)
    * [Mappings](#mappings)
        * [Basic Types](#basic-types)
        * [Classes & Objects](#classes--objects)
        * [Collection](#collection)
        * [Concurrency](#concurrency)
    * [Notes](#notes)
        * [MutableSet](#mutableset)
        * [MutableMap](#mutablemap)

<!-- TOC -->

## Reference

* [Kotlin Swift Interop](https://kotlinlang.org/docs/reference/native/objc_interop.html)

## Mappings

The table below shows how Kotlin concepts are mapped to Swift and vice versa.

### Basic Types

| Kotlin     |   Swift   | Note |
|------------|:---------:|:----:|
| `Byte`     |  `Int8`   |      | 
| `Short`    |  `Int16`  |      |
| `Int`      |  `Int32`  |      |
| `Long`     |  `Int64`  |      |
| `Float`    |  `Float`  |      |
| `Double`   | `Double`  |      |
| `Boolean`  | `Bool`    |      |
| `Char`     | `UniChar` |      |
| `String`   | `String`  |      |

**Source code**

* [Basic Types](../shared/src/commonMain/kotlin/com/vasanth/kmm/swiftinterop/basictypes)
* [BasicTypes Playground](../iosApp/playground/BasicTypesPlayground.playground)

### Classes & Objects

| Kotlin             |            Swift             | Note |
|--------------------|:----------------------------:|:----:|
| `class`            |           `class`            |      |
| `data class`       |           `class`            |      |
| `enum class`       |           `class`            |      |
| `sealed class`     |           `class`            |      |
| `object`           | `class with single instance` |      |
| `interface`        |          `protocol`          |      |
| `sealed interface` |         `protocol`           |      |

**Source code**

* [class](../shared/src/commonMain/kotlin/com/vasanth/kmm/swiftinterop/class)
* [Class Playground](../iosApp/playground/ClassPlayground.playground)

### Collection

| Kotlin        |         Swift          |        Note         |
|---------------|:----------------------:|:-------------------:|
| `List`        |        `Array`         |                     |
| `Set`         |         `Set`          |                     |
| `Map`         |      `Dictionary`      |                     |
| `MutableList` |    `NSMutableArray`    |                     |
| `MutableSet`  |     `NSMutableSet`     | [Note](#mutableset) |
| `MutableMap`  | `NSMutableDictionary`  | [Note](#mutableMap) |

**Source code**

* [Collection](../shared/src/commonMain/kotlin/com/vasanth/kmm/swiftinterop/collection)
* [Collection Playground](../iosApp/playground/CollectionPlayground.playground)

### Concurrency

* Learn more about Concurrency - [KMM Concurrency](kmm_concurrency.md)

| Kotlin    |    Swift<br/>(Official)    | Swift<br/>(Custom) | Note |
|-----------|:--------------------------:|:------------------:|:----:|
| `suspend` | `completionHandler:/async` | `SuspendAdapter`   |      |
| `flow`    |       Not Supported        |   `FlowAdapter`    |      |

**Source code**

* [Concurrency](../shared/src/commonMain/kotlin/com/vasanth/kmm/swiftinterop/concurrency)
* [Collection Playground](../iosApp/playground/CollectionPlayground.playground)

## Notes

### MutableSet

* We can accessing `MutableSet` in Kotlin as `NSMutableArray`  in Swift.
* Passing `MutableSet` to Kotlin from Swift - We can't pass `NSMutableArray` instead we need to
  pass `KotlinMutableSet` to Kotlin.

### MutableMap

* We can accessing `MutableMap` in Kotlin as `NSMutableDictionary`  in Swift.
* Passing `MutableMap` to Kotlin from Swift - We can't pass `NSMutableDictionary` instead we need to
  pass `KotlinMutableDictionary` to Kotlin. 

