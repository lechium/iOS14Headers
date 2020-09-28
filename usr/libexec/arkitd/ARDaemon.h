//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARDaemonServiceListenerDelegate-Protocol.h"
#import "ARDaemonServiceObserver-Protocol.h"

@class ARDaemonServiceListener, ARServer, NSString, NSTimer;

@interface ARDaemon : NSObject <ARDaemonServiceListenerDelegate, ARDaemonServiceObserver>
{
    NSTimer *_heartbeatTimer;	// 8 = 0x8
    ARDaemonServiceListener *_listener;	// 16 = 0x10
    ARServer *_server;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000026e0
- (void)serviceDidInterrupt:(id)arg1;	// IMP=0x00000001000025bc
- (void)serviceDidInvalidate:(id)arg1;	// IMP=0x0000000100002498
- (void)didDiscoverService:(id)arg1;	// IMP=0x0000000100002374
- (void)startup;	// IMP=0x0000000100001fb8
- (void)shutdown;	// IMP=0x0000000100001e98
- (void)printInfo;	// IMP=0x0000000100001be0
- (void)dealloc;	// IMP=0x0000000100001ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
