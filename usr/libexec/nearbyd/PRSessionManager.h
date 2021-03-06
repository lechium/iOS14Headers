//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRAppStateMonitorObserver-Protocol.h"
#import "PRSessionActivationGuard-Protocol.h"

@class NSMutableDictionary, NSString, PRAuthorizationManager;
@protocol OS_dispatch_queue;

@interface PRSessionManager : NSObject <PRAppStateMonitorObserver, PRSessionActivationGuard>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PRAuthorizationManager *_authManager;	// 16 = 0x10
    NSMutableDictionary *_processMonitors;	// 24 = 0x18
    NSMutableDictionary *_sessions;	// 32 = 0x20
    struct os_unfair_lock_s _sessionsLock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010012b86c
- (_Bool)isSessionAllowedToActivate:(id)arg1;	// IMP=0x000000010012b638
- (id)updatesQueue;	// IMP=0x000000010012b630
- (void)monitoredApp:(int)arg1 didChangeState:(int)arg2;	// IMP=0x000000010012b3dc
- (void)handleXPCDisconnection:(id)arg1;	// IMP=0x000000010012b18c
- (_Bool)registerSessionWithConnection:(id)arg1;	// IMP=0x000000010012a6a8
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010012a5ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

