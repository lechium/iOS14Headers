//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlClientAppStateObserverDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class KmlClientAppStateObserver, KmlSession, KmlSharingTransport, NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface KeyManagementLibrary : NSObject <NSXPCListenerDelegate, KmlClientAppStateObserverDelegate>
{
    NSXPCListener *_kmlListener;	// 8 = 0x8
    KmlClientAppStateObserver *_appObserver;	// 16 = 0x10
    NSMutableArray *_sessions;	// 24 = 0x18
    KmlSession *_currentSession;	// 32 = 0x20
    KmlSharingTransport *_idsListener;	// 40 = 0x28
    _Bool _isRunning;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_kmlMainQueue;	// 56 = 0x38
}

+ (id)sharedLibrary;	// IMP=0x0000000100056a74
- (void).cxx_destruct;	// IMP=0x0000000100058508
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *kmlMainQueue; // @synthesize kmlMainQueue=_kmlMainQueue;
- (void)clientAppIsForeGrounded:(id)arg1;	// IMP=0x0000000100058368
- (void)clientAppIsBackGrounded:(id)arg1;	// IMP=0x0000000100058168
- (void)clientAppIsSuspended:(id)arg1;	// IMP=0x0000000100058028
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000579c8
- (unsigned char)numberOfPairingSessionsQueued;	// IMP=0x000000010005751c
- (void)startNextSession;	// IMP=0x00000001000573e0
- (void)removeSession:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000571a4
- (void)addNewSession:(id)arg1 firstInQueue:(_Bool *)arg2;	// IMP=0x0000000100057074
- (void)stopService;	// IMP=0x0000000100056fdc
@property(readonly, nonatomic) _Bool isRunning;
- (void)handleFirstUnlock;	// IMP=0x0000000100056f7c
- (void)startService;	// IMP=0x0000000100056bd0
- (id)init;	// IMP=0x0000000100056afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

