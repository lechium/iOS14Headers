//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADEmbeddedAdServerDelegate-Protocol.h"

@class ADEmbeddedAdServer, NSString, NSURL;

@interface ADPreviewAdServer : NSObject <ADEmbeddedAdServerDelegate>
{
    _Bool _serverSetupCompleteNotified;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    ADEmbeddedAdServer *_adServer;	// 24 = 0x18
}

+ (id)instance;	// IMP=0x00000001000050c4
@property(nonatomic) _Bool serverSetupCompleteNotified; // @synthesize serverSetupCompleteNotified=_serverSetupCompleteNotified;
@property(retain, nonatomic) ADEmbeddedAdServer *adServer; // @synthesize adServer=_adServer;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)adServer:(id)arg1 receivedConnection:(id)arg2;	// IMP=0x00000001000055f0
- (void)dealloc;	// IMP=0x000000010000558c
- (void)notifyServerSetupCompletionWithError;	// IMP=0x0000000100005438
- (void)notifyServerSetupCompletionIfNeeded;	// IMP=0x00000001000053c0
- (void)stopAdServer;	// IMP=0x0000000100005378
- (void)startAdServerIfNeccessary:(id)arg1;	// IMP=0x0000000100005128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
