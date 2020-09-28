//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class NEKEnvironment, NSString, PSYServiceSyncSession, PSYSyncCoordinator;

@interface NEKSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate>
{
    NEKEnvironment *_environment;	// 8 = 0x8
    struct os_unfair_lock_s _shadowLock;	// 16 = 0x10
    unsigned long long _syncRestrictionShadow;	// 24 = 0x18
    PSYServiceSyncSession *_session;	// 32 = 0x20
    PSYSyncCoordinator *_syncCoordinator;	// 40 = 0x28
}

+ (id)receivedReunionSyncNotificationString;	// IMP=0x000000010002724c
+ (id)receivedStartSyncNotificationString;	// IMP=0x0000000100027240
- (void).cxx_destruct;	// IMP=0x000000010002789c
@property(retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) PSYServiceSyncSession *session; // @synthesize session=_session;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x0000000100027764
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x0000000100027674
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0000000100027448
- (_Bool)okToPerformDeltaSync;	// IMP=0x00000001000273d4
- (id)environment;	// IMP=0x00000001000273bc
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000100027258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
