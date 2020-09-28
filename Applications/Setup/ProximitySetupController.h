//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYBuddyDaemonProximityTargetProtocol-Protocol.h"
#import "SASProximitySessionDelegate-Protocol.h"

@class BYBackupMetadata, BYBuddyDaemonProximityTargetClient, BuddyAppleIDSignInTask, CUMessageSession, NSArray, NSData, NSDictionary, NSMutableArray, NSString, SASProximityHandshake, SASProximityInformation, SASProximitySession;
@protocol OS_dispatch_queue;

@interface ProximitySetupController : NSObject <BYBuddyDaemonProximityTargetProtocol, SASProximitySessionDelegate>
{
    _Bool _userSkippedProximity;	// 8 = 0x8
    _Bool _hasAppliedSettings;	// 9 = 0x9
    _Bool _usesSameAccountForiTunes;	// 10 = 0xa
    _Bool _hasValidatedPasscode;	// 11 = 0xb
    _Bool _signedIniCloudAccount;	// 12 = 0xc
    _Bool _skipExpressRestore;	// 13 = 0xd
    _Bool _hasResumed;	// 14 = 0xe
    _Bool _reconnecting;	// 15 = 0xf
    _Bool _shouldApplySettings;	// 16 = 0x10
    SASProximityInformation *_information;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSString *_deviceClass;	// 48 = 0x30
    NSArray *_receivedLanguages;	// 56 = 0x38
    NSString *_receivedLocale;	// 64 = 0x40
    NSString *_productVersion;	// 72 = 0x48
    SASProximityHandshake *_handshake;	// 80 = 0x50
    NSDictionary *_authenticationResults;	// 88 = 0x58
    NSData *_accessibilitySettings;	// 96 = 0x60
    BYBuddyDaemonProximityTargetClient *_client;	// 104 = 0x68
    SASProximitySession *_session;	// 112 = 0x70
    NSMutableArray *_delegates;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 128 = 0x80
    CDUnknownBlockType _resumeBlock;	// 136 = 0x88
    BuddyAppleIDSignInTask *_signInTask;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000001000bc50c
@property(retain, nonatomic) BuddyAppleIDSignInTask *signInTask; // @synthesize signInTask=_signInTask;
@property(copy, nonatomic) CDUnknownBlockType resumeBlock; // @synthesize resumeBlock=_resumeBlock;
@property(nonatomic) _Bool shouldApplySettings; // @synthesize shouldApplySettings=_shouldApplySettings;
@property(nonatomic) _Bool reconnecting; // @synthesize reconnecting=_reconnecting;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property _Bool hasResumed; // @synthesize hasResumed=_hasResumed;
@property(retain) SASProximitySession *session; // @synthesize session=_session;
@property(retain) BYBuddyDaemonProximityTargetClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSData *accessibilitySettings; // @synthesize accessibilitySettings=_accessibilitySettings;
@property(retain, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(nonatomic) _Bool skipExpressRestore; // @synthesize skipExpressRestore=_skipExpressRestore;
@property _Bool signedIniCloudAccount; // @synthesize signedIniCloudAccount=_signedIniCloudAccount;
@property _Bool hasValidatedPasscode; // @synthesize hasValidatedPasscode=_hasValidatedPasscode;
@property(retain) SASProximityHandshake *handshake; // @synthesize handshake=_handshake;
@property(retain) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property _Bool usesSameAccountForiTunes; // @synthesize usesSameAccountForiTunes=_usesSameAccountForiTunes;
@property(retain) NSString *receivedLocale; // @synthesize receivedLocale=_receivedLocale;
@property(retain) NSArray *receivedLanguages; // @synthesize receivedLanguages=_receivedLanguages;
@property(copy) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property _Bool hasAppliedSettings; // @synthesize hasAppliedSettings=_hasAppliedSettings;
@property(retain) SASProximityInformation *information; // @synthesize information=_information;
@property _Bool userSkippedProximity; // @synthesize userSkippedProximity=_userSkippedProximity;
- (void)receivedBackupAction:(id)arg1;	// IMP=0x00000001000bc294
- (void)ready;	// IMP=0x00000001000bc158
- (void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;	// IMP=0x00000001000bbf50
- (void)proximityConnectionReconnected;	// IMP=0x00000001000bbe50
- (void)proximityConnectionTerminated;	// IMP=0x00000001000bbd44
- (void)readyForInformation;	// IMP=0x00000001000bba60
- (id)performHandshake;	// IMP=0x00000001000bb888
- (void)proximityConnectionInitiated;	// IMP=0x00000001000bb7ac
- (void)proximityConnectionPreparing:(id)arg1;	// IMP=0x00000001000bb714
- (void)dismissProximityPinCode;	// IMP=0x00000001000bb64c
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;	// IMP=0x00000001000bb36c
- (void)proximititySetupCompleted:(id)arg1;	// IMP=0x00000001000bb218
- (void)notifyDelegatesConnectionTerminated;	// IMP=0x00000001000bb07c
- (void)removeDelegate:(id)arg1;	// IMP=0x00000001000baf7c
- (void)addDelegate:(id)arg1;	// IMP=0x00000001000bae7c
- (void)startiCloudBackup;	// IMP=0x00000001000bae00
- (void)applySettings;	// IMP=0x00000001000b9f28
- (void)skippedApplySettings;	// IMP=0x00000001000b9ee0
- (void)didApplySettings;	// IMP=0x00000001000b9e98
- (void)willApplySettings:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b9e28
- (_Bool)validatePasscode:(id)arg1;	// IMP=0x00000001000b9d70
- (void)prepareForReboot;	// IMP=0x00000001000b9c0c
- (void)saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b9a80
- (void)beginiCloudSignInWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b8f1c
- (void)startOver;	// IMP=0x00000001000b8d8c
- (void)waitForReconnection:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b8cfc
- (void)stopReconnecting;	// IMP=0x00000001000b8cec
- (void)startReconnecting;	// IMP=0x00000001000b8cb4
- (void)suspendConnectionForSoftwareUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b8c48
- (void)showMigrationInterfaceOnSource;	// IMP=0x00000001000b8b74
- (void)endDeviceToDeviceMigration;	// IMP=0x00000001000b8b34
- (void)beginDeviceToDeviceMigration;	// IMP=0x00000001000b89f8
- (id)createTargetDeviceMigrationManager;	// IMP=0x00000001000b897c
@property(readonly) CUMessageSession *sharingMessageSession;
- (void)languageChangeCompleted;	// IMP=0x00000001000b8548
@property(readonly) NSArray *preferredLanguages;
@property(readonly) BYBackupMetadata *backupMetadata;
- (void)cloudConfigDidChange:(id)arg1;	// IMP=0x00000001000b8380
- (void)setupFinished;	// IMP=0x00000001000b8230
- (void)updateInformation:(id)arg1;	// IMP=0x00000001000b806c
- (void)resetInformation;	// IMP=0x00000001000b805c
- (void)endPairing;	// IMP=0x00000001000b801c
- (void)endAdvertisingProximitySetup;	// IMP=0x00000001000b7f4c
- (void)beginAdvertisingProximitySetup;	// IMP=0x00000001000b7ee8
- (void)resumeSession;	// IMP=0x00000001000b7c04
- (_Bool)needsToResume;	// IMP=0x00000001000b7a8c
@property(readonly) _Bool hasConnection;
@property(readonly) _Bool shouldEnableProximity;
- (id)init;	// IMP=0x00000001000b76fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
