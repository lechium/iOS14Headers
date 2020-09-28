//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KmlPowerAssertion, NSTimer, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface KmlSession : NSObject
{
    _Bool _isStarted;	// 8 = 0x8
    KmlPowerAssertion *_pwrAssertion;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSTimer *_backgroundTimer;	// 40 = 0x28
    id _remoteObject;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010005c9d8
- (oneway void)endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c7d0
- (void)cancelBackGroundTimer;	// IMP=0x000000010005c720
- (void)startBackGroundTimer;	// IMP=0x000000010005c594
- (void)start;	// IMP=0x000000010005c2f0
- (void)stopWithError:(id)arg1;	// IMP=0x000000010005c238
- (void)dealloc;	// IMP=0x000000010005c1dc
- (id)dumpState;	// IMP=0x000000010005c1d4
- (id)clientName;	// IMP=0x000000010005c174
- (id)initWithRemoteObject:(id)arg1 connection:(id)arg2 andQueue:(id)arg3;	// IMP=0x000000010005c05c

@end
