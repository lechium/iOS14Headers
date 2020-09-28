//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResourceManager.h"

#import "CBPairingAgentDelegate-Protocol.h"
#import "EPResourceOwnerDelegate-Protocol.h"

@class EPPairingAgent, NSData, NSString;

@interface EPOOBKeyGeneratorManager : EPResourceManager <CBPairingAgentDelegate, EPResourceOwnerDelegate>
{
    EPPairingAgent *_agent;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
}

+ (Class)resourceClass;	// IMP=0x0000000100088e1c
- (void).cxx_destruct;	// IMP=0x000000010008941c
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
- (void)resourceAvailabilityDidChange:(id)arg1;	// IMP=0x0000000100089400
- (void)clear;	// IMP=0x00000001000893c8
- (void)update;	// IMP=0x0000000100089064
- (void)destroyResource;	// IMP=0x0000000100088ffc
- (void)createResource;	// IMP=0x0000000100088f30
- (id)newGeneratorWithDelegate:(id)arg1;	// IMP=0x0000000100088f24
- (id)newResourceWithDelegate:(id)arg1;	// IMP=0x0000000100088e28
- (id)init;	// IMP=0x0000000100088d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
