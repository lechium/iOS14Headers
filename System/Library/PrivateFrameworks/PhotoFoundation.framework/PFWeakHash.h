/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFWeakContainer.h>

@protocol PFWeakHashDelegate;
@class NSPointerArray;

@interface PFWeakHash : PFWeakContainer {

	opaque_pthread_mutex_t _serializer;
	BOOL _objectHashing;
	A{_opaque_pthread_t}* _serializedThread;
	id* _objects;
	unsigned long long _capacity;
	NSPointerArray* _payload;
	unsigned long long _payloadPurgeCounter;
	unsigned long long* _inUse;
	unsigned long long _count;
	long long _nilledWeakCount;
	id<PFWeakHashDelegate> _delegate;

}

@property (__weak) id<PFWeakHashDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(unsigned long long)_addObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(unsigned long long)capacity;
-(BOOL)removeObject:(id)arg1 ;
-(void)_resize;
-(id)initWithObjectHashing;
-(id)allObjects;
-(void)postDelegateBecameEmptyNotice;
-(void)addObject:(id)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateObjectsAndPayloadsWithBlock:(/*^block*/id)arg1 ;
-(void)_purgeOrphanedPayloads;
-(void)removeAllObjects;
-(unsigned long long)countEstimate;
-(void)dealloc;
-(unsigned long long)_bucketForObject:(id)arg1 foundInHash:(BOOL*)arg2 ;
-(void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2 ;
-(unsigned long long)countByVerifyingWeakObjects;
-(id)init;
-(id)payloadForObject:(id)arg1 ;
-(void)setDelegate:(id<PFWeakHashDelegate>)arg1 ;
-(BOOL)_onSerializedThread;
-(void)_processNilledWeakReferences;
-(void)_rehashWithNewCapacity:(unsigned long long)arg1 ;
-(BOOL)_shouldGrow;
-(void)weakReferenceBecameNil;
-(id<PFWeakHashDelegate>)delegate;
-(BOOL)_shouldShrink;
-(void)_serialize:(/*^block*/id)arg1 ;
-(void)setPayload:(id)arg1 forObject:(id)arg2 ;
-(BOOL)_removeAllObjects;
-(void)addObject:(id)arg1 withPayload:(id)arg2 ;
-(void)_dumpBuckets;
-(id)initWithPointerHashing;
-(void)_doEnumeration:(/*^block*/id)arg1 ;
@end

