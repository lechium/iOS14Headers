//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMUserSyncStakeholder-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, UMUserSyncTask;

@interface NDUserSyncStakeholder : NSObject <UMUserSyncStakeholder>
{
    _Bool _tasksInitialized;	// 8 = 0x8
    _Bool _tasksEnqueued;	// 9 = 0x9
    struct os_unfair_lock_s _activeTasksLock;	// 12 = 0xc
    struct os_unfair_lock_s _monitorTaskLock;	// 16 = 0x10
    NSMutableSet *_activeTasks;	// 24 = 0x18
    UMUserSyncTask *_monitorTask;	// 32 = 0x20
    NSMutableSet *_monitorTaskSet;	// 40 = 0x28
    NSMutableDictionary *_bridgeTasks;	// 48 = 0x30
}

+ (_Bool)EDUMode;	// IMP=0x0000000100044d98
+ (id)sharedStakeholder;	// IMP=0x0000000100044d58
- (void).cxx_destruct;	// IMP=0x00000001000449e4
@property(retain) NSMutableDictionary *bridgeTasks; // @synthesize bridgeTasks=_bridgeTasks;
@property _Bool tasksEnqueued; // @synthesize tasksEnqueued=_tasksEnqueued;
@property _Bool tasksInitialized; // @synthesize tasksInitialized=_tasksInitialized;
@property struct os_unfair_lock_s monitorTaskLock; // @synthesize monitorTaskLock=_monitorTaskLock;
@property(retain) NSMutableSet *monitorTaskSet; // @synthesize monitorTaskSet=_monitorTaskSet;
@property(retain) UMUserSyncTask *monitorTask; // @synthesize monitorTask=_monitorTask;
@property struct os_unfair_lock_s activeTasksLock; // @synthesize activeTasksLock=_activeTasksLock;
@property(retain) NSMutableSet *activeTasks; // @synthesize activeTasks=_activeTasks;
- (void)willSwitchUser;	// IMP=0x0000000100044948
- (void)readyToSwitchToUser:(id)arg1;	// IMP=0x0000000100044944
- (void)willSwitchToUser:(id)arg1;	// IMP=0x0000000100044940
- (void)tasksHaveBeenEnqueued;	// IMP=0x00000001000448d0
- (void)restoredTaskActive:(id)arg1;	// IMP=0x0000000100044814
- (void)restoredTaskEnqueued:(id)arg1;	// IMP=0x0000000100044798
- (void)uploadContent;	// IMP=0x0000000100044718
- (void)endUMTask:(id)arg1;	// IMP=0x0000000100044418
- (void)endBridgingUMTask:(id)arg1;	// IMP=0x00000001000442f8
- (void)startBridgingUMTask:(id)arg1;	// IMP=0x00000001000440ec
- (id)startUMTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0000000100043f14
- (id)init;	// IMP=0x0000000100043e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
