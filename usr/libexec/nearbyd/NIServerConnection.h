//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, UWBSessionDelegateProxyProtocol;

@interface NIServerConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <UWBSessionDelegateProxyProtocol> _exportedObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100173578
@property(retain) id <UWBSessionDelegateProxyProtocol> exportedObject; // @synthesize exportedObject=_exportedObject;
- (void)invalidate;	// IMP=0x0000000100173554
- (void)resume;	// IMP=0x0000000100173544
@property(copy) CDUnknownBlockType invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler;
- (id)synchronousRemoteObjectProxy;	// IMP=0x00000001001734e8
- (id)remoteObjectProxy;	// IMP=0x00000001001734cc
- (id)initWithQueue:(id)arg1 exportedObject:(id)arg2;	// IMP=0x0000000100173374

@end

