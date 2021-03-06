//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSDictionary;

@interface MCGmailAccountPayloadHandler : MCNewPayloadHandler
{
    NSDictionary *_setAsideAccountDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100087fc4
@property(retain, nonatomic) NSDictionary *setAsideAccountDictionary; // @synthesize setAsideAccountDictionary=_setAsideAccountDictionary;
- (void)unsetAside;	// IMP=0x0000000100087f10
- (void)setAside;	// IMP=0x0000000100087c18
- (void)remove;	// IMP=0x0000000100087b68
- (void)_remove;	// IMP=0x00000001000875a0
- (_Bool)isInstalled;	// IMP=0x0000000100087360
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100086dbc
- (id)_installWithAccountDictionary:(id)arg1;	// IMP=0x00000001000868e8
- (id)accountDictionaryWithIsInstalledByMDM:(_Bool)arg1 personaID:(id)arg2;	// IMP=0x0000000100086548
- (id)MCACAccountIdentifier;	// IMP=0x00000001000864f4
- (id)unhashedAccountIdentifier;	// IMP=0x0000000100086450
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00000001000863e0

@end

