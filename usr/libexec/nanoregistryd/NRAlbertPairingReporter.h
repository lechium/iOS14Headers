//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NRRegistryHistoryStore, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface NRAlbertPairingReporter : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NRRegistryHistoryStore *_registry;	// 16 = 0x10
    NSUUID *_deviceID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004b95c
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b104
- (void)_sendPairingActivityData:(id)arg1;	// IMP=0x000000010004aa44
- (id)_submissionURL;	// IMP=0x000000010004a98c
- (void)submitPairingReportWithRegistry:(id)arg1 deviceID:(id)arg2;	// IMP=0x000000010004a368
- (id)init;	// IMP=0x000000010004a2e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

