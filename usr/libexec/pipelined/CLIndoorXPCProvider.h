//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CLIndoorXPCProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_frameworkQueue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    struct optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>> _lastReconnectTime;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_interruptReconnection;	// 40 = 0x28
}

+ (id)newConnectionFor:(id)arg1;	// IMP=0x00000001000151d0
- (id).cxx_construct;	// IMP=0x0000000100016f28
- (void).cxx_destruct;	// IMP=0x0000000100016ee0
- (CDUnknownBlockType)_defaultErrHandler:(CDUnknownBlockType)arg1 forCaller:(id)arg2;	// IMP=0x0000000100016c20
- (CDUnknownBlockType)_defaultErrHandlerForCaller:(id)arg1;	// IMP=0x0000000100016bec
- (void)withinQueueScheduleReconnect:(duration_673274cf)arg1 reason:(id)arg2;	// IMP=0x0000000100016a28
- (void)withinQueueReinitializeRemoteState;	// IMP=0x00000001000168a8
- (int)withinQueueShouldReinitializeRemote:(time_point_e708cccf)arg1;	// IMP=0x00000001000166e8
- (void)withinQueueHandleReconnect:(time_point_e708cccf)arg1;	// IMP=0x0000000100016640
- (void)withinQueueInterruptionHandler;	// IMP=0x00000001000163a4
- (void)withinQueueInitializeConnection;	// IMP=0x0000000100016148
- (void)withinQueueInvalidate;	// IMP=0x0000000100015f6c
- (void)invalidate;	// IMP=0x0000000100015d70
- (void)dealloc;	// IMP=0x0000000100015a20
- (id)impl;	// IMP=0x0000000100015a1c
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100015618
- (id)initWithEndpoint:(id)arg1;	// IMP=0x0000000100015500
- (id)init;	// IMP=0x00000001000153d0

@end

