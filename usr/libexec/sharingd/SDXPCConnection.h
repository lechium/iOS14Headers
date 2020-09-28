//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDXPCAppleIDAuthInterface-Protocol.h"
#import "SDXPCClientInterface-Protocol.h"
#import "SDXPCCoordinatedAlertsInterface-Protocol.h"
#import "SDXPCDeviceDiscoveryInterface-Protocol.h"
#import "SDXPCDiagnosticsInterface-Protocol.h"
#import "SDXPCNFCTagReaderInterface-Protocol.h"
#import "SDXPCProximityClientInterface-Protocol.h"
#import "SDXPCRemoteAutoFillSessionInterface-Protocol.h"
#import "SDXPCRemoteInteractionSessionInterface-Protocol.h"
#import "SDXPCServiceInterface-Protocol.h"
#import "SDXPCSessionInterface-Protocol.h"
#import "SDXPCUserNotificationInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, SDXPCServer, SFCoordinatedAlertRequest, SFDeviceDiscovery, SFProximityClient, SFRemoteAutoFillSessionHelper, SFRemoteInteractionSession, SFService, SFSession, SFShareAudioSessionDaemon, SFUserAlert;

__attribute__((visibility("hidden")))
@interface SDXPCConnection : NSObject <SDXPCAppleIDAuthInterface, SDXPCClientInterface, SDXPCCoordinatedAlertsInterface, SDXPCDeviceDiscoveryInterface, SDXPCDiagnosticsInterface, SDXPCNFCTagReaderInterface, SDXPCProximityClientInterface, SDXPCRemoteAutoFillSessionInterface, SDXPCRemoteInteractionSessionInterface, SDXPCServiceInterface, SDXPCSessionInterface, SDXPCUserNotificationInterface>
{
    SFRemoteAutoFillSessionHelper *_afsHelper;	// 8 = 0x8
    NSMutableSet *_assertions;	// 16 = 0x10
    _Bool _bluetoothUserInteraction;	// 24 = 0x18
    SFCoordinatedAlertRequest *_caRequest;	// 32 = 0x20
    SFDeviceDiscovery *_ddRequest;	// 40 = 0x28
    _Bool _diagnosticBLEModeStarted;	// 48 = 0x30
    _Bool _entitledBluetoothUserInteraction;	// 49 = 0x31
    _Bool _entitledClient;	// 50 = 0x32
    _Bool _entitledCoordinatedAlerts;	// 51 = 0x33
    _Bool _entitledDeviceDiscovery;	// 52 = 0x34
    _Bool _entitledDiagnostics;	// 53 = 0x35
    _Bool _entitledProximityClient;	// 54 = 0x36
    _Bool _entitledRemoteInteractionSession;	// 55 = 0x37
    _Bool _entitledService;	// 56 = 0x38
    _Bool _entitledSession;	// 57 = 0x39
    SFUserAlert *_notification;	// 64 = 0x40
    NSString *_preventExitForLocaleReason;	// 72 = 0x48
    SFProximityClient *_proxClient;	// 80 = 0x50
    SFRemoteInteractionSession *_riSession;	// 88 = 0x58
    SFService *_service;	// 96 = 0x60
    SFSession *_session;	// 104 = 0x68
    SDXPCServer *_server;	// 112 = 0x70
    SFShareAudioSessionDaemon *_shareAudioSession;	// 120 = 0x78
    _Bool _unlockTestClientStarted;	// 128 = 0x80
    NSXPCConnection *_xpcCnx;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010017ae38
- (void)userNotificationPresent:(id)arg1;	// IMP=0x000000010017adc0
- (void)shareAudioUserConfirmed;	// IMP=0x000000010017aaf8
- (void)shareAudioSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017a690
- (void)sessionSendResponse:(id)arg1;	// IMP=0x000000010017a560
- (void)sessionSendRequest:(id)arg1;	// IMP=0x000000010017a430
- (void)sessionSendFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x000000010017a260
- (void)sessionSendEvent:(id)arg1;	// IMP=0x000000010017a130
- (void)sessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100179a04
- (void)serviceSendResponse:(id)arg1;	// IMP=0x00000001001798e4
- (void)serviceSendRequest:(id)arg1;	// IMP=0x00000001001797c4
- (void)serviceSendFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;	// IMP=0x0000000100179628
- (void)serviceSendEvent:(id)arg1;	// IMP=0x0000000100179508
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x00000001001793d4
- (void)serviceUpdate:(id)arg1;	// IMP=0x00000001001792a8
- (void)serviceActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017886c
- (void)remoteInteractionSessionSendPayload:(id)arg1;	// IMP=0x0000000100178754
- (void)remoteInteractionSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001781fc
- (void)proximityClientRequestScannerTimerReset;	// IMP=0x0000000100177fe0
- (void)proximityClientUpdateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100177dc8
- (void)proximityClientProvideContent:(id)arg1 forDevice:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100177ba8
- (void)proximityClientDismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001779ac
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x000000010017783c
- (void)proximityClientActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100176e9c
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100176bec
- (void)diagnosticUnlockTestServer;	// IMP=0x0000000100176b0c
- (void)diagnosticUnlockTestClientWithDevice:(id)arg1;	// IMP=0x0000000100176a20
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017612c
- (void)diagnosticMockStop:(CDUnknownBlockType)arg1;	// IMP=0x0000000100176084
- (void)diagnosticMockStart:(CDUnknownBlockType)arg1;	// IMP=0x0000000100175fdc
- (void)diagnosticMock:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100175e70
- (void)diagnosticLogControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100175d30
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100174fc8
- (void)diagnosticBLEModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100174da4
- (void)bluetoothUserInteraction;	// IMP=0x0000000100174cd0
- (void)deviceDiscoveryFastScanCancel:(id)arg1;	// IMP=0x0000000100174c78
- (void)deviceDiscoveryFastScanTrigger:(id)arg1;	// IMP=0x0000000100174c20
- (void)deviceDiscoveryUpdate:(id)arg1;	// IMP=0x00000001001747bc
- (void)deviceDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017426c
- (void)coordinatedAlertsRequestFinish;	// IMP=0x00000001001741b4
- (void)coordinatedAlertsRequestStart:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173e78
- (void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173d34
- (void)wifiPasswordSharingAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100173ad0
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173a0c
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173834
- (void)testContinuityKeyboardBegin:(_Bool)arg1;	// IMP=0x00000001001737dc
- (void)statusInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100173764
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173678
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100173568
- (void)setAudioRoutingScore:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173444
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x0000000100173290
- (void)retriggerProximityPairing:(CDUnknownBlockType)arg1;	// IMP=0x00000001001730dc
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173064
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100172f68
- (void)reenableProxCardType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100172b78
- (void)preventExitForLocaleReason:(id)arg1;	// IMP=0x0000000100172aa0
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100172a28
- (void)preheatXPCConnection;	// IMP=0x00000001001729c8
- (void)openSetupURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001727d8
- (void)_getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100171b14
- (void)_getPeopleInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100171400
- (void)getPeopleSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017120c
- (void)getDeviceAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100170bd4
- (void)findContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001700c4
- (void)myAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016ff04
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016fabc
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016f828
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016f590
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010016f428
- (void)subCredentialPresentCardWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016f2e0
- (void)appleIDInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016ef90
- (void)accountForAppleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016edac
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016ebf4
- (void)_invalidateAssertions;	// IMP=0x000000010016e8a8
- (void)activateAssertionWithIdentifier:(id)arg1;	// IMP=0x000000010016e540
- (void)autoFillHelperUserNotificationDidDismiss:(id)arg1;	// IMP=0x000000010016e414
- (void)autoFillHelperUserNotificationDidActivate:(id)arg1;	// IMP=0x000000010016e2e8
- (void)autoFillHelperTryPIN:(id)arg1;	// IMP=0x000000010016e1bc
- (void)autoFillHelperDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;	// IMP=0x000000010016e050
- (void)autoFillHelperActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016dbc4
- (int)_entitledService:(id)arg1 state:(_Bool *)arg2;	// IMP=0x000000010016da98
- (int)_entitled:(id)arg1 state:(_Bool *)arg2 label:(id)arg3;	// IMP=0x000000010016d96c
- (void)connectionInvalidated;	// IMP=0x000000010016d604
- (id)initWithServer:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x000000010016d560

@end
