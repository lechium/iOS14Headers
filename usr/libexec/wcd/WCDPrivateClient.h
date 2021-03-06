//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCConnectionDelegate-Protocol.h"
#import "WCXPCPrivateManagerDaemonProtocol-Protocol.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCDClientDelegate;

@interface WCDPrivateClient : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerDaemonProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<WCDClientDelegate> *_delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000129c0
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak NSObject<WCDClientDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)remoteObjectProxy;	// IMP=0x0000000100012908
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001289c
- (void)isApplicationInfoPrivileged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000127e8
- (void)handlePingForApplicationInfo:(id)arg1;	// IMP=0x0000000100012750
- (id)preferredBundleIDForApplicationInfo:(id)arg1;	// IMP=0x00000001000126cc
- (void)fakeIncomingPayloadOnSubService:(id)arg1 ofType:(id)arg2 clientData:(id)arg3 resource:(id)arg4 resourceSandboxToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100011c48
- (void)reconnect;	// IMP=0x0000000100011bdc
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0000000100011b38
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100011a04
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100011574
- (id)init;	// IMP=0x000000010001150c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

