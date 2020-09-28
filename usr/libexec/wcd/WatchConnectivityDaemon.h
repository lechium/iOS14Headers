//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "WCDClientDelegate-Protocol.h"
#import "WCDSystemObserver-Protocol.h"

@class IDSDevice, IDSService, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSXPCListener, WCDFirstUnlockManager, WCDPairedSyncManager, WCDPrivateClient;

@interface WatchConnectivityDaemon : NSObject <NSXPCListenerDelegate, WCDSystemObserver, WCDClientDelegate, IDSServiceDelegate>
{
    NSXPCListener *_xpcPrivateListener;	// 8 = 0x8
    WCDPrivateClient *_privateClient;	// 16 = 0x10
    WCDFirstUnlockManager *_firstUnlockManager;	// 24 = 0x18
    WCDPairedSyncManager *_pairedSyncManager;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    NSMutableDictionary *_communicationIdentifierToClient;	// 48 = 0x30
    NSMutableDictionary *_sendIdentifierToHandler;	// 56 = 0x38
    NSMutableDictionary *_pendingMessageRequests;	// 64 = 0x40
    NSMutableArray *_readyBlocks;	// 72 = 0x48
    NSMutableDictionary *_coreLocationAssertions;	// 80 = 0x50
    NSMutableDictionary *_companionAppAssertions;	// 88 = 0x58
    NSSet *_counterpartClientCommunicationIdentifiers;	// 96 = 0x60
    NSString *_idsServiceIdentifier;	// 104 = 0x68
    NSString *_idsInsecureServiceIdentifier;	// 112 = 0x70
    IDSService *_idsService;	// 120 = 0x78
    IDSService *_insecureIDSService;	// 128 = 0x80
}

+ (id)sharedDaemon;	// IMP=0x0000000100012a28
- (void).cxx_destruct;	// IMP=0x000000010001f724
@property(readonly) IDSService *insecureIDSService; // @synthesize insecureIDSService=_insecureIDSService;
@property(readonly) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly) NSString *idsInsecureServiceIdentifier; // @synthesize idsInsecureServiceIdentifier=_idsInsecureServiceIdentifier;
@property(readonly) NSString *idsServiceIdentifier; // @synthesize idsServiceIdentifier=_idsServiceIdentifier;
- (id)createCLInUseTimerForIdentifier:(id)arg1;	// IMP=0x000000010001f57c
- (void)releaseCLInUseAssertionForIdentifier:(id)arg1;	// IMP=0x000000010001f404
- (void)acquireCLInUseAssertionForIdentifier:(id)arg1;	// IMP=0x000000010001f1d8
- (void)flushReadyBlocks;	// IMP=0x000000010001f0a8
- (void)service:(id)arg1 context:(id)arg2 performBlockWhenReady:(CDUnknownBlockType)arg3;	// IMP=0x000000010001ef2c
- (void)performBlockWhenReady:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ee58
- (void)persistAppContext:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x000000010001eb48
- (void)storeComplicationUserInfoTransfer:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3;	// IMP=0x000000010001e4bc
- (id)moveUserInfoToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 userInfoIdentifier:(id)arg4;	// IMP=0x000000010001dec0
- (id)moveFileToClientInbox:(id)arg1 applicationInfo:(id)arg2 pairingID:(id)arg3 fileIdentifier:(id)arg4 userInfoData:(id)arg5 error:(id *)arg6;	// IMP=0x000000010001d674
- (_Bool)cellUsageAllowedForBundleID:(id)arg1;	// IMP=0x000000010001d5a4
- (void)notifyDuetOfPendingContentForCompanionAppID:(id)arg1 forComplication:(_Bool)arg2;	// IMP=0x000000010001d5a0
- (void)duetIdentifiersForCompanionAppID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d334
- (id)applicationInfoForCommunicationID:(id)arg1;	// IMP=0x000000010001d288
- (id)WCErrorForIDSError:(id)arg1;	// IMP=0x000000010001cee0
- (id)pairingIDForIDSUniqueDeviceID:(id)arg1;	// IMP=0x000000010001ccc8
- (id)dataFromUUIDString:(id)arg1;	// IMP=0x000000010001cbf4
- (const char *)descriptionFromPayloadSendType:(unsigned short)arg1;	// IMP=0x000000010001cbc8
- (void)updateClientWithValues:(id)arg1;	// IMP=0x000000010001caf4
- (void)updateAllClientsWithValues;	// IMP=0x000000010001c9c4
- (id)createBackgroundAssertionTimerForIdentifier:(id)arg1;	// IMP=0x000000010001c7b4
- (void)handleAquiredAssertion:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010001c500
- (void)cleanUpProcessAssertionForIdentifier:(id)arg1;	// IMP=0x000000010001c328
- (void)acquireBackgroundAssertionForIdentifier:(id)arg1;	// IMP=0x000000010001c0a4
- (void)launchCompanionAppID:(id)arg1 isInUse:(_Bool)arg2;	// IMP=0x000000010001bc78
@property(readonly) IDSDevice *activeIDSDevice;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001ba30
- (void)updateActiveDeviceConnectedForService:(id)arg1;	// IMP=0x000000010001b9a8
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010001b8c8
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000010001b7e8
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000010001b470
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010001a7c0
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010001a1e4
- (void)persistUserInfoTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100019d34
- (_Bool)userInfoExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0000000100019b94
- (_Bool)notifyIfUserInfoTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000198d8
- (id)complicationUserInfoPathInDataContainer:(id)arg1 pairingID:(id)arg2;	// IMP=0x00000001000196bc
- (void)handleIncomingUserInfoURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x0000000100019444
- (void)transferUserInfo:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100018dcc
- (_Bool)errorIfPreconditionsNotSatisfiedWithClientPairingID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100018c6c
- (void)handleIncomingUserInfoTransferProto:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4;	// IMP=0x000000010001898c
- (_Bool)sendComplicationUserInfo:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 identifier:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000182b4
- (_Bool)notifyIfFileTransferWithCommunicationID:(id)arg1 pairingID:(id)arg2 sendID:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000180d4
- (void)persistFileTransferResult:(id)arg1 pairingID:(id)arg2 applicationInfo:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100017c24
- (_Bool)fileTransferExistsForPairingID:(id)arg1 identifier:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0000000100017a84
- (void)handleIncomingFileURL:(id)arg1 communicationID:(id)arg2 pairingID:(id)arg3 sendID:(id)arg4 metadata:(id)arg5;	// IMP=0x0000000100017748
- (void)cancelSendWithIdentifier:(id)arg1;	// IMP=0x000000010001760c
- (void)transferFile:(id)arg1 withMetadata:(id)arg2 identifier:(id)arg3 forClient:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100016e10
- (void)updateApplicationContext:(id)arg1 clientID:(id)arg2 clientPairingID:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000169c4
- (void)dequeuePendingMessagesForCommunicationID:(id)arg1;	// IMP=0x0000000100016704
- (void)handleIncomingRequest:(id)arg1 withCommunicationID:(id)arg2 isInUse:(_Bool)arg3;	// IMP=0x0000000100016434
- (void)sendMessage:(id)arg1 withIdentifier:(id)arg2 isResponse:(_Bool)arg3 clientID:(id)arg4 clientPairingID:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100015d28
- (void)handlePairedSyncComplicationsStartedAck:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100015c98
- (void)sendPairedSyncForComplicationsStartedAckWithIdentifier:(id)arg1 success:(_Bool)arg2;	// IMP=0x0000000100015c14
- (void)privateClientConnectTimerFired;	// IMP=0x0000000100015c10
- (void)forgetClientConnectTimer;	// IMP=0x0000000100015c0c
- (void)handlePairedSyncComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x0000000100015c08
- (void)sendPairedSyncForComplicationsStartedWithIdentifier:(id)arg1;	// IMP=0x0000000100015888
- (void)sendFirstUnlockAck:(id)arg1;	// IMP=0x00000001000155bc
- (void)sendFirstUnlockRequest:(id)arg1;	// IMP=0x00000001000152f0
- (void)sendFirstUnlockState:(id)arg1;	// IMP=0x0000000100015024
- (void)dequeuePendingComplicationPings;	// IMP=0x0000000100015020
- (void)handleComplicationPingForCommunicationIdentifier:(id)arg1;	// IMP=0x000000010001501c
- (void)addCounterpartClientCommunicationIdentifier:(id)arg1;	// IMP=0x0000000100014f04
- (void)handleInstalledAppsChangedMessage;	// IMP=0x0000000100014f00
- (void)sendInstalledAppsChangedMessage;	// IMP=0x0000000100014bc8
- (void)handleDaemonClientsInformation:(id)arg1;	// IMP=0x00000001000149b0
- (void)sendDaemonClientsInformation;	// IMP=0x0000000100014968
- (void)handleCounterpartDaemonDidStart;	// IMP=0x0000000100014920
- (void)sendDaemonDidStart;	// IMP=0x0000000100014628
- (void)systemObserverUpdatingInstalledApps;	// IMP=0x00000001000145a8
- (void)systemObserverAppDidTerminateForBundleID:(id)arg1;	// IMP=0x0000000100014498
- (void)systemObserverInstalledApplicationsChanged;	// IMP=0x00000001000142e4
- (void)systemObserverActiveDeviceSwitchStarted;	// IMP=0x00000001000142d4
- (void)systemObserverInitialSetUpComplete;	// IMP=0x00000001000142a0
- (void)clientReachabilityDidChange:(id)arg1;	// IMP=0x00000001000141f4
- (void)clientXPCConnectionDidDisconnect:(id)arg1;	// IMP=0x0000000100014040
- (void)dequeueContentForClient:(id)arg1;	// IMP=0x0000000100013f3c
- (_Bool)checkAndHandleiOSExtensionConnection:(id)arg1;	// IMP=0x0000000100013da0
- (_Bool)privateListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0000000100013bc8
- (id)createNewClientObjectWithCommunicationID:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100013a50
- (_Bool)listenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0000000100013830
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100013780
- (void)loadPersistedClients;	// IMP=0x0000000100013244
@property(readonly) NSString *state;
- (id)init;	// IMP=0x0000000100012ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
