/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSCache, NSCountedSet, NSMutableDictionary, CKDispatchQueue, NSObject;

@interface CKDispatchCache : NSObject <IMSystemMonitorListener> {

	NSCache* _objectCache;
	NSCountedSet* _pendingKeys;
	NSMutableDictionary* _pendingGroups;
	CKDispatchQueue* _dispatchQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	long long _dispatchPriority;

}

@property (nonatomic,retain) NSCache * objectCache;                               //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,retain) NSCountedSet * pendingKeys;                          //@synthesize pendingKeys=_pendingKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingGroups;                 //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,retain) CKDispatchQueue * dispatchQueue;                     //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;              //@synthesize lockQueue=_lockQueue - In the implementation block
@property (assign,nonatomic) long long dispatchPriority;                          //@synthesize dispatchPriority=_dispatchPriority - In the implementation block
-(void)systemApplicationDidSuspend;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSCache *)objectCache;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(NSCountedSet *)pendingKeys;
-(void)setObjectCache:(NSCache *)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)_endGeneratingForKeyUnlocked:(id)arg1 ;
-(BOOL)isGeneratingForKey:(id)arg1 ;
-(void)_beginGeneratingForKeyUnlocked:(id)arg1 ;
-(void)setCachedObject:(id)arg1 forKey:(id)arg2 ;
-(void)enqueueBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(BOOL)waitOnGenerationForKey:(id)arg1 ;
-(void)setPendingKeys:(NSCountedSet *)arg1 ;
-(long long)dispatchPriority;
-(void)setDispatchPriority:(long long)arg1 ;
-(void)dealloc;
-(CKDispatchQueue *)dispatchQueue;
-(void)suspend;
-(id)init;
-(id)cachedObjectForKey:(id)arg1 ;
-(void)setDispatchQueue:(CKDispatchQueue *)arg1 ;
-(void)resume;
-(void)emptyCache;
-(void)clearQueue;
-(void)setPendingGroups:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingGroups;
@end
