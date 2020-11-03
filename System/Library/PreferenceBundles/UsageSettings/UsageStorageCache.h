//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, PSUsageBundleManager;
@protocol OS_dispatch_queue;

@interface UsageStorageCache : NSObject
{
    PSUsageBundleManager *_usageBundlesManager;	// 8 = 0x8
    NSMutableDictionary *_mediaCache;	// 16 = 0x10
    NSMutableArray *_appsCache;	// 24 = 0x18
    NSArray *_usageBundlesCache;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_cache_operation_queue;	// 40 = 0x28
    _Bool _cacheUpdateCancelled;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004c18
- (void)populateUsageAppsCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000441c
- (float)specialStorageUsageForBundleID:(id)arg1;	// IMP=0x0000000000003d4c
- (id)checkAndFixUpVersion:(id)arg1;	// IMP=0x0000000000003ca4
- (void)populateMediaCache;	// IMP=0x0000000000003610
- (float)sizeForMediaQuery:(id)arg1 withGroupingType:(long long)arg2 storingInCache:(id)arg3 withKey:(id)arg4;	// IMP=0x0000000000003054
- (id)mediaCollectionForKey:(id)arg1;	// IMP=0x0000000000003044
- (void)removeMediaCollectionCacheForKey:(id)arg1;	// IMP=0x0000000000003034
- (void)populateUsageBundlesCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002ef8
- (void)cancelUsageDataPopulation;	// IMP=0x0000000000002e8c
- (void)populateUsageDataWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000025dc
- (id)init;	// IMP=0x0000000000002574

@end
