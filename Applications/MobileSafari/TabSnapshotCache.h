//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TabSnapshotCache : NSObject
{
    NSMapTable *_delegateToContextMap;	// 8 = 0x8
    unsigned long long _currentlyRequestedSnapshotCount;	// 16 = 0x10
    NSMutableDictionary *_snapshots;	// 24 = 0x18
    _Bool _updating;	// 32 = 0x20
    NSURL *_thumbnailCacheDirectoryURL;	// 40 = 0x28
    NSMutableDictionary *_groupIdentifiers;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_fileSystemAccessQueue;	// 56 = 0x38
    _Bool _currentlyRequestingNextSnapshot;	// 64 = 0x40
    _Bool _needsRequestNextSnapshot;	// 65 = 0x41
    _Bool _deferRequestNextSnapshot;	// 66 = 0x42
}

+ (void)removeSavedSnapshotsKeepingSnapshotsWithIdentifiers:(id)arg1;	// IMP=0x0000000100171f7c
+ (_Bool)supportsASTC;	// IMP=0x000000010016eaf8
+ (id)defaultSnapshotCache;	// IMP=0x000000010016e7f8
+ (void)initialize;	// IMP=0x000000010016e7d4
- (void).cxx_destruct;	// IMP=0x000000010017251c
- (_Bool)isIdentifier:(id)arg1 memberOfSameGroupAsIdentifier:(id)arg2;	// IMP=0x0000000100172454
- (void)removeIdentifier:(id)arg1 fromGroupWithIdentifier:(id)arg2;	// IMP=0x000000010017233c
- (void)addIdentifier:(id)arg1 toGroupWithIdentifier:(id)arg2;	// IMP=0x0000000100172280
- (void)setCapacity:(unsigned long long)arg1 forDelegate:(id)arg2;	// IMP=0x0000000100171efc
- (void)setUpdating:(_Bool)arg1 forDelegate:(id)arg2;	// IMP=0x0000000100171e74
- (id)_contextForDelegate:(id)arg1;	// IMP=0x0000000100171dc4
- (void)_sendDidFinishUpdatingToDelegateIfNeeded;	// IMP=0x0000000100171c94
@property(readonly, nonatomic, getter=isFinishedUpdating) _Bool finishedUpdating;
- (void)performBatchUpdatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100171aa0
- (void)requestNextSnapshotIfNecessary;	// IMP=0x00000001001718f8
- (void)_requestNextSnapshotIfNecessaryForDelegate:(id)arg1;	// IMP=0x0000000100171124
- (id)debugDescription;	// IMP=0x0000000100170eb0
- (void)_enumerateDelegatesAndIdentifiersForEntry:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100170bdc
- (void)_finishUpdatingToState:(long long)arg1 cachedSnapshot:(id)arg2 forEntry:(id)arg3;	// IMP=0x000000010017091c
- (void)_finishUpdatingToState:(long long)arg1 forEntry:(id)arg2;	// IMP=0x0000000100170908
- (void)_beginUpdatingStateForIdentifier:(id)arg1;	// IMP=0x00000001001707e8
- (id)_writeSnapshotImage:(struct CGImage *)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001001703b8
- (void)_saveSnapshotForIdentifier:(id)arg1;	// IMP=0x0000000100170084
- (id)_readSnapshotImageForIdentifier:(id)arg1;	// IMP=0x000000010016feb0
- (void)_requestSavedSnapshotForIdentifier:(id)arg1;	// IMP=0x000000010016fc64
- (void)_determineInitialStateForIdentifier:(id)arg1;	// IMP=0x000000010016fa40
- (void)invalidateSnapshotWithIdentifier:(id)arg1;	// IMP=0x000000010016f90c
- (_Bool)hasValidSnapshotWithIdentifier:(id)arg1;	// IMP=0x000000010016f894
- (id)snapshotWithIdentifier:(id)arg1;	// IMP=0x000000010016f834
- (void)setIdentifiersToCache:(id)arg1 forDelegate:(id)arg2;	// IMP=0x000000010016f300
- (id)identifiersToCacheForDelegate:(id)arg1;	// IMP=0x000000010016f2ac
- (id)_allIdentifiersToCache;	// IMP=0x000000010016f13c
- (id)_URLForSnapshotWithIdentifier:(id)arg1 isKTX:(_Bool)arg2 effectsVersion:(long long)arg3;	// IMP=0x000000010016f02c
- (void)_enumeratePossibleURLsForSnapshotWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010016edc0
- (id)_existingURLForSnapshotWithIdentifier:(id)arg1 effectsVersion:(long long *)arg2;	// IMP=0x000000010016ec28
- (id)_preferredURLForSnapshotWithIdentifier:(id)arg1;	// IMP=0x000000010016ec10
- (id)_entryForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000010016eb14
- (id)_entryForIdentifier:(id)arg1;	// IMP=0x000000010016eb04
- (id)initWithThumbnailCacheDirectoryURL:(id)arg1;	// IMP=0x000000010016e8cc
- (id)init;	// IMP=0x000000010016e840

@end

