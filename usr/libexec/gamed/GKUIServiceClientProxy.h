//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKClientProxy.h"

#import "GKUIViewService-Protocol.h"

@class NSString;

@interface GKUIServiceClientProxy : GKClientProxy <GKUIViewService>
{
    GKClientProxy *_hostClient;	// 8 = 0x8
}

+ (id)existingViewService;	// IMP=0x00000001000b7a6c
- (void).cxx_destruct;	// IMP=0x00000001000b8718
@property(nonatomic) __weak GKClientProxy *hostClient; // @synthesize hostClient=_hostClient;
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b8350
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b81a0
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b7c84
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b7bcc
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001000b7a8c
- (_Bool)isUIService;	// IMP=0x00000001000b7a84
- (void)dealloc;	// IMP=0x00000001000b79e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

