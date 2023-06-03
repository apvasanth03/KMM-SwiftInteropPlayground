#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKMMDataClass, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKMMEnumClass, SharedKotlinArray<T>, SharedKMMObject, SharedKMMSealedClass, SharedUser, SharedSuspendAdapter<T>, SharedFlowAdapter<T>, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinCancellationException, SharedKotlinUnit;

@protocol SharedPlatform, SharedKotlinComparable, SharedKMMSealedInterface, SharedKotlinx_coroutines_coreStateFlow, SharedCanceller, SharedKotlinx_coroutines_coreJob, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreFlow, SharedKotlinSuspendFunction0, SharedKotlinIterator, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinSequence, SharedKotlinx_coroutines_coreSelectClause0, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContext, SharedKotlinFunction, SharedKotlinx_coroutines_coreParentJob, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinx_coroutines_coreSelectClause;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * KMM Class - Used to understand Swift interop with KMM for "class"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMClass")))
@interface SharedKMMClass : SharedBase
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getProp1 __attribute__((swift_name("getProp1()")));
- (int32_t)getProp2 __attribute__((swift_name("getProp2()")));
@end


/**
 * KMM Data Class - Used to understand Swift interop with KMM for "data class"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMDataClass")))
@interface SharedKMMDataClass : SharedBase
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));

/**
 * KMM Data Class - Used to understand Swift interop with KMM for "data class"
 */
- (SharedKMMDataClass *)doCopyProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("doCopy(prop1:prop2:)")));

/**
 * KMM Data Class - Used to understand Swift interop with KMM for "data class"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * KMM Data Class - Used to understand Swift interop with KMM for "data class"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * KMM Data Class - Used to understand Swift interop with KMM for "data class"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *prop1 __attribute__((swift_name("prop1")));
@property (readonly) int32_t prop2 __attribute__((swift_name("prop2")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * KMM Enum Class - Used to understand Swift interop with KMM for "enum class"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMEnumClass")))
@interface SharedKMMEnumClass : SharedKotlinEnum<SharedKMMEnumClass *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * KMM Enum Class - Used to understand Swift interop with KMM for "enum class"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKMMEnumClass *obj1 __attribute__((swift_name("obj1")));
@property (class, readonly) SharedKMMEnumClass *obj2 __attribute__((swift_name("obj2")));
+ (SharedKotlinArray<SharedKMMEnumClass *> *)values __attribute__((swift_name("values()")));
@end


/**
 * KMM Interface - Used to understand Swift interop with KMM for "Interface"
 */
__attribute__((swift_name("KMMInterface")))
@protocol SharedKMMInterface
@required
- (NSString *)getMessage __attribute__((swift_name("getMessage()")));
@end


/**
 * KMM Object - Used to understand Swift interop with KMM for "Object"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMObject")))
@interface SharedKMMObject : SharedBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * KMM Object - Used to understand Swift interop with KMM for "Object"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kMMObject __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKMMObject *shared __attribute__((swift_name("shared")));
- (NSString *)getMessage __attribute__((swift_name("getMessage()")));
@end


/**
 * KMM Sealed Class - Used to understand Swift interop with KMM for "Sealed Class"
 */
__attribute__((swift_name("KMMSealedClass")))
@interface SharedKMMSealedClass : SharedBase
@property (readonly) NSString *prop1 __attribute__((swift_name("prop1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMSealedClass.SubClass1")))
@interface SharedKMMSealedClassSubClass1 : SharedKMMSealedClass
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t prop2 __attribute__((swift_name("prop2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMSealedClass.SubClass2")))
@interface SharedKMMSealedClassSubClass2 : SharedKMMSealedClass
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t prop2 __attribute__((swift_name("prop2")));
@end


/**
 * KMM Sealed Interface - Used to understand Swift interop with KMM for "Sealed Interface"
 */
__attribute__((swift_name("KMMSealedInterface")))
@protocol SharedKMMSealedInterface
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMSealedInterfaceSubClass1")))
@interface SharedKMMSealedInterfaceSubClass1 : SharedBase <SharedKMMSealedInterface>
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *prop1 __attribute__((swift_name("prop1")));
@property (readonly) int32_t prop2 __attribute__((swift_name("prop2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMSealedInterfaceSubClass2")))
@interface SharedKMMSealedInterfaceSubClass2 : SharedBase <SharedKMMSealedInterface>
- (instancetype)initWithProp1:(NSString *)prop1 prop2:(int32_t)prop2 __attribute__((swift_name("init(prop1:prop2:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *prop1 __attribute__((swift_name("prop1")));
@property (readonly) int32_t prop2 __attribute__((swift_name("prop2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserUseCase")))
@interface SharedGetUserUseCase : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(SharedUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
- (SharedSuspendAdapter<SharedUser *> *)executeIos __attribute__((swift_name("executeIos()")));
@end


/**
 * KMM ViewModel - Used to understand Swift interop with KMM for "flow"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMViewModel")))
@interface SharedKMMViewModel : SharedBase

/**
 * KMM ViewModel - Used to understand Swift interop with KMM for "flow"
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * KMM ViewModel - Used to understand Swift interop with KMM for "flow"
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
@property (readonly) SharedFlowAdapter<NSString *> *uiStateAsCallback __attribute__((swift_name("uiStateAsCallback")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> uiStateStream __attribute__((swift_name("uiStateStream")));
@end


/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface SharedUser : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));

/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */
- (SharedUser *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));

/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * KMM Suspend - Used to understand Swift interop with KMM for "suspend function"
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Canceller")))
@protocol SharedCanceller
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobCanceller")))
@interface SharedJobCanceller : SharedBase <SharedCanceller>
- (instancetype)initWithJob:(id<SharedKotlinx_coroutines_coreJob>)job __attribute__((swift_name("init(job:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
@end


/**
 * [FlowAdapter] - Adapter class to convert Kotlin [Flow] to Swift Callbacks.
 * It supports Cancellation as well.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowAdapter")))
@interface SharedFlowAdapter<T> : SharedBase
- (instancetype)initWithScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)scope flow:(id<SharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(scope:flow:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCanceller>)subscribeOnEach:(void (^)(T))onEach onComplete:(void (^)(void))onComplete onThrow:(void (^)(SharedKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onEach:onComplete:onThrow:)")));
@end


/**
 * [SuspendAdapter] - Adapter class to convert Kotlin [suspend] to Swift Callbacks.
 * It supports Cancellation as well.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuspendAdapter")))
@interface SharedSuspendAdapter<T> : SharedBase
- (instancetype)initWithScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)scope suspender:(id<SharedKotlinSuspendFunction0>)suspender __attribute__((swift_name("init(scope:suspender:)"))) __attribute__((objc_designated_initializer));
- (id<SharedCanceller>)subscribeOnSuccess:(void (^)(T))onSuccess onThrow:(void (^)(SharedKotlinThrowable *))onThrow __attribute__((swift_name("subscribe(onSuccess:onThrow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMBooleanKt")))
@interface SharedKMMBooleanKt : SharedBase

/**
 * Take and return Boolean.
 *
 * @param boolean Boolean.
 *
 * @return Boolean.
 */
+ (BOOL)takeAndReturnBooleanBoolean:(BOOL)boolean __attribute__((swift_name("takeAndReturnBoolean(boolean:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMNumbersKt")))
@interface SharedKMMNumbersKt : SharedBase

/**
 * Take and return Byte.
 *
 * @param byte Byte.
 *
 * @return Byte.
 */
+ (int8_t)takeAndReturnByteByte:(int8_t)byte __attribute__((swift_name("takeAndReturnByte(byte:)")));

/**
 * Take and return Double.
 *
 * @param double Double.
 *
 * @return Double
 */
+ (double)takeAndReturnDoubleDouble:(double)double_ __attribute__((swift_name("takeAndReturnDouble(double:)")));

/**
 * Take and return Float.
 *
 * @param float Float.
 *
 * @return Float
 */
+ (float)takeAndReturnFloatFloat:(float)float_ __attribute__((swift_name("takeAndReturnFloat(float:)")));

/**
 * Take and return Int.
 *
 * @param int Int.
 *
 * @return Int.
 */
+ (int32_t)takeAndReturnIntInt:(int32_t)int_ __attribute__((swift_name("takeAndReturnInt(int:)")));

/**
 * Take and return Long.
 *
 * @param long Long.
 *
 * @return Long.
 */
+ (int64_t)takeAndReturnLongLong:(int64_t)long_ __attribute__((swift_name("takeAndReturnLong(long:)")));

/**
 * Take and return Short.
 *
 * @param short Short.
 *
 * @return Short.
 */
+ (int16_t)takeAndReturnShortShort:(int16_t)short_ __attribute__((swift_name("takeAndReturnShort(short:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMStringKt")))
@interface SharedKMMStringKt : SharedBase

/**
 * Take and return Char.
 *
 * @param char Char.
 *
 * @return Char.
 */
+ (unichar)takeAndReturnCharChar:(unichar)char_ __attribute__((swift_name("takeAndReturnChar(char:)")));

/**
 * Take and return String.
 *
 * @param string String.
 *
 * @return String.
 */
+ (NSString *)takeAndReturnStringString:(NSString *)string __attribute__((swift_name("takeAndReturnString(string:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMCollectionKt")))
@interface SharedKMMCollectionKt : SharedBase

/**
 * Take and return List.
 *
 * @param list List.
 *
 * @return List.
 */
+ (NSArray<NSString *> *)takeAndReturnListList:(NSArray<NSString *> *)list __attribute__((swift_name("takeAndReturnList(list:)")));

/**
 * Take and return Map.
 *
 * @param map Map.
 *
 * @return Map.
 */
+ (NSDictionary<NSString *, NSString *> *)takeAndReturnMapMap:(NSDictionary<NSString *, NSString *> *)map __attribute__((swift_name("takeAndReturnMap(map:)")));

/**
 * Take and return Set.
 *
 * @param set Set.
 *
 * @return Set.
 */
+ (NSSet<NSString *> *)takeAndReturnSetSet:(NSSet<NSString *> *)set __attribute__((swift_name("takeAndReturnSet(set:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMMutableCollectionKt")))
@interface SharedKMMMutableCollectionKt : SharedBase

/**
 * Take and return MutableList.
 *
 * @param mutableList MutableList.
 *
 * @return MutableList.
 */
+ (NSMutableArray<NSString *> *)takeAndReturnMutableListMutableList:(NSMutableArray<NSString *> *)mutableList __attribute__((swift_name("takeAndReturnMutableList(mutableList:)")));

/**
 * Take Map and return MutableMap.
 *
 * @param mutableMap MutableMap.
 *
 * @return MutableMap.
 */
+ (SharedMutableDictionary<NSString *, NSString *> *)takeAndReturnMutableMapMutableMap:(SharedMutableDictionary<NSString *, NSString *> *)mutableMap __attribute__((swift_name("takeAndReturnMutableMap(mutableMap:)")));

/**
 * Take and return MutableSet.
 *
 * @param mutableSet MutableSet.
 *
 * @return MutableSet.
 */
+ (SharedMutableSet<NSString *> *)takeAndReturnMutableSetMutableSet:(SharedMutableSet<NSString *> *)mutableSet __attribute__((swift_name("takeAndReturnMutableSet(mutableSet:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowAdaptersKt")))
@interface SharedFlowAdaptersKt : SharedBase

/**
 * Create a [FlowAdapter] from this [Flow] to make it easier to interact with from Swift.
 */
+ (SharedFlowAdapter<id> *)asCallbacks:(id<SharedKotlinx_coroutines_coreFlow>)receiver scope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("asCallbacks(_:scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SharedKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0 <SharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
