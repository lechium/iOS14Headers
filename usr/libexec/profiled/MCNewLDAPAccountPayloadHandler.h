//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCACAccountPayloadHandler.h"

#import "DAValidityCheckConsumer-Protocol.h"

@class NSError, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface MCNewLDAPAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer>
{
    NSObject<OS_dispatch_semaphore> *_doneSema;	// 32 = 0x20
    _Bool _validationComplete;	// 40 = 0x28
    NSError *_validationError;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010006980c
- (void)remove;	// IMP=0x000000010006969c
- (void)unsetAside;	// IMP=0x0000000100069320
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x00000001000691f4
- (_Bool)isInstalled;	// IMP=0x00000001000691b8
- (id)accountTypeIdentifiers;	// IMP=0x0000000100069140
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100068fbc
- (id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(_Bool)arg2 personaID:(id)arg3;	// IMP=0x0000000100068750
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100068460
- (void)_preflightWithAccount:(id)arg1;	// IMP=0x00000001000682e0
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;	// IMP=0x00000001000680f4
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0000000100067d78
- (id)_accountFromPayloadWithUserInputResponses:(id)arg1;	// IMP=0x0000000100067160
- (id)unhashedAccountIdentifier;	// IMP=0x0000000100067054
- (void)setUserInputResponses:(id)arg1;	// IMP=0x0000000100066d60
- (id)userInputFields;	// IMP=0x0000000100066a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

