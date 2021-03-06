//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRRegistryServer.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBScalablePipeManagerDelegate-Protocol.h"
#import "EPActiveDeviceAssertionFactoryObserver-Protocol.h"
#import "EPNanoRegistryStatusCodeElectionDelegate-Protocol.h"
#import "EPResourceOwnerDelegate-Protocol.h"
#import "NRExtensiblePairingDelegate-Protocol.h"
#import "NRKeychainSyncStatusManagerObserver-Protocol.h"
#import "NRLocalPropertyMonitorObserver-Protocol.h"
#import "NRPairingServicesDelegate-Protocol.h"
#import "NRRemoteObjectClassADelegate-Protocol.h"
#import "NRRemoteObjectClassCDelegate-Protocol.h"
#import "NRRemoteObjectClassDDelegate-Protocol.h"
#import "NRRemoteObjectCloudDelegate-Protocol.h"
#import "NRRemoteObjectDelegate-Protocol.h"
#import "NRSystemVersionRequestService-Protocol.h"
#import "NRTermsAcknowledgementRegistryService-Protocol.h"
#import "NRXPCPairingDelegate-Protocol.h"

@class CBCentralManager, EPKeymaster, EPNanoRegistryStatusCodeVote, EPScalablePipeManager, EPScalablePipeManagerManager, EPWatchPusher, MCProfileConnection, NBManager, NRConnectivityPublisher, NRLocalPropertyMonitor, NRMutableDevice, NROSLogStateProvider, NROSTransaction, NRPairingProxy, NRPairingReport, NRPowerAssertionActivity, NRSimpleReferenceCounter, NSLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSString, NSUUID;
@protocol AbstractTimer, EPServiceRegistry, NSObject, OS_dispatch_queue, OS_dispatch_source;

@interface NRPairingDaemon : NRRegistryServer <NRLocalPropertyMonitorObserver, CBCentralManagerDelegate, NRKeychainSyncStatusManagerObserver, EPActiveDeviceAssertionFactoryObserver, NRRemoteObjectClassADelegate, NRRemoteObjectClassCDelegate, NRRemoteObjectClassDDelegate, NRRemoteObjectCloudDelegate, NRRemoteObjectDelegate, NRPairingServicesDelegate, EPResourceOwnerDelegate, EPNanoRegistryStatusCodeElectionDelegate, CBScalablePipeManagerDelegate, NRTermsAcknowledgementRegistryService, NRSystemVersionRequestService, NRExtensiblePairingDelegate, NRXPCPairingDelegate>
{
    _Bool _mirrorOfIsPaired;	// 8 = 0x8
    _Bool _sentPropertiesFlag;	// 9 = 0x9
    _Bool _initRemoteProperties;	// 10 = 0xa
    _Bool _healthKitLastChanceSyncInProgress;	// 11 = 0xb
    _Bool _bluetoothIsScanning;	// 12 = 0xc
    _Bool _mightNeedToKickOffPairedSyncAfterLaunch;	// 13 = 0xd
    _Bool _hasClassAFile;	// 14 = 0xe
    _Bool _idsConnectivityTimedOut;	// 15 = 0xf
    _Bool _alreadyRepairedTheSwitch;	// 16 = 0x10
    _Bool _pairingQueueIsSuspended;	// 17 = 0x11
    _Bool _pairingClientCrashMonitoringCachedValue;	// 18 = 0x12
    _Bool _isNotCachingCrashMonitoring;	// 19 = 0x13
    int _activeDeviceChipIDNotifyToken;	// 20 = 0x14
    struct os_unfair_lock_s _lastStatusCodeCacheLock;	// 24 = 0x18
    struct os_unfair_lock_s _pairingQueueWriteLock;	// 28 = 0x1c
    unsigned long long _lastStatusCodeCache;	// 32 = 0x20
    NRPairingProxy *_lastCaller;	// 40 = 0x28
    NSNumber *_chipIDOfActiveDevice;	// 48 = 0x30
    NRMutableDevice *_mirrorOfActiveDevice;	// 56 = 0x38
    NSUUID *_mirrorOfActiveDeviceID;	// 64 = 0x40
    long long _mirrorOfPairedDeviceCount;	// 72 = 0x48
    CBCentralManager *_central;	// 80 = 0x50
    NSString *_pairingClientPhase;	// 88 = 0x58
    id <EPServiceRegistry> _serviceRegistry;	// 96 = 0x60
    NRLocalPropertyMonitor *_localProperties;	// 104 = 0x68
    MCProfileConnection *_mcConnection;	// 112 = 0x70
    id <NSObject> _mcConnectionSettingsChangedNotificationToken;	// 120 = 0x78
    EPNanoRegistryStatusCodeVote *_readyStatusCodeVote;	// 128 = 0x80
    NSMutableArray *_bluetoothInitBlocks;	// 136 = 0x88
    NSLock *_bluetoothInitBlockLock;	// 144 = 0x90
    NSMutableDictionary *_bluetoothIDToPairingID;	// 152 = 0x98
    NSMutableSet *_bluetoothDiscoveryEventDedupe;	// 160 = 0xa0
    NROSTransaction *_discoveryTransaction;	// 168 = 0xa8
    long long _rssiValue;	// 176 = 0xb0
    id <AbstractTimer> _gizmoSetCompatibilityStateTimer;	// 184 = 0xb8
    NSNumber *_lastDaemonState;	// 192 = 0xc0
    NSUUID *_bluetoothIsScanningToMatchThisDeviceID;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_historyPurgeWorkingSetTimer;	// 208 = 0xd0
    NROSTransaction *_receivedPropertiesTransaction;	// 216 = 0xd8
    long long _receivedPropertiesTransactionRefCounter;	// 224 = 0xe0
    NSMutableSet *_outstandingBluetoothConnectRequests;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_chipIDOfActiveDeviceQueue;	// 240 = 0xf0
    NRConnectivityPublisher *_connectivityPublisher;	// 248 = 0xf8
    EPKeymaster *_keymaster;	// 256 = 0x100
    NROSTransaction *_watchPusherTransaction;	// 264 = 0x108
    EPWatchPusher *_watchPusher;	// 272 = 0x110
    EPWatchPusher *_lastWatchPusher;	// 280 = 0x118
    EPScalablePipeManagerManager *_pusherPipeManager;	// 288 = 0x120
    EPScalablePipeManager *_pusherPipe;	// 296 = 0x128
    EPNanoRegistryStatusCodeVote *_migrationVote;	// 304 = 0x130
    NBManager *_backupManager;	// 312 = 0x138
    NRPowerAssertionActivity *_migrationActivity;	// 320 = 0x140
    NSObject<OS_dispatch_queue> *_lastCallerQueue;	// 328 = 0x148
    NRSimpleReferenceCounter *_pairingClients;	// 336 = 0x150
    NRSimpleReferenceCounter *_switchingClients;	// 344 = 0x158
    NRSimpleReferenceCounter *_pushingClients;	// 352 = 0x160
    long long _pushingReferenceCounter;	// 360 = 0x168
    NRSimpleReferenceCounter *_discoveringClients;	// 368 = 0x170
    NRSimpleReferenceCounter *_advertisingClients;	// 376 = 0x178
    NSMapTable *_assertionToAssertionInfo;	// 384 = 0x180
    NSMapTable *_clientProxyToAssertionInfo;	// 392 = 0x188
    NSMutableDictionary *_clientAssertionIDToAssertionInfo;	// 400 = 0x190
    NROSLogStateProvider *_dumper;	// 408 = 0x198
    id <AbstractTimer> _idsConnectivityTimer;	// 416 = 0x1a0
    NSUUID *_lastActivePairingIDThatFailed;	// 424 = 0x1a8
    NSMutableDictionary *_deviceDiscoveryTimestamps;	// 432 = 0x1b0
    long long _lastDiscoveryPurgeSeconds;	// 440 = 0x1b8
    NROSTransaction *_pairingClientCrashMonitoringTransaction;	// 448 = 0x1c0
    NRPairingProxy *_pairingClientCrashMonitoringProxy;	// 456 = 0x1c8
    NSObject<OS_dispatch_source> *_mcDebounceSource;	// 464 = 0x1d0
    NSObject<OS_dispatch_source> *_scheduledTimer;	// 472 = 0x1d8
}

+ (id)sharedInstance;	// IMP=0x00000001000306f8
+ (CDUnknownBlockType)countdown:(long long)arg1 toCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000282b8
+ (void)debugDump:(id)arg1 public:(_Bool)arg2;	// IMP=0x0000000100027b90
+ (void)updateActiveFlag:(_Bool)arg1;	// IMP=0x000000010001e818
+ (Class)proxyClass;	// IMP=0x000000010001e80c
- (void).cxx_destruct;	// IMP=0x0000000100048450
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *mcDebounceSource; // @synthesize mcDebounceSource=_mcDebounceSource;
@property(nonatomic) _Bool isNotCachingCrashMonitoring; // @synthesize isNotCachingCrashMonitoring=_isNotCachingCrashMonitoring;
@property(nonatomic) _Bool pairingClientCrashMonitoringCachedValue; // @synthesize pairingClientCrashMonitoringCachedValue=_pairingClientCrashMonitoringCachedValue;
@property(nonatomic) _Bool pairingQueueIsSuspended; // @synthesize pairingQueueIsSuspended=_pairingQueueIsSuspended;
@property(retain, nonatomic) NRPairingProxy *pairingClientCrashMonitoringProxy; // @synthesize pairingClientCrashMonitoringProxy=_pairingClientCrashMonitoringProxy;
@property(retain, nonatomic) NROSTransaction *pairingClientCrashMonitoringTransaction; // @synthesize pairingClientCrashMonitoringTransaction=_pairingClientCrashMonitoringTransaction;
@property(nonatomic) struct os_unfair_lock_s pairingQueueWriteLock; // @synthesize pairingQueueWriteLock=_pairingQueueWriteLock;
@property(nonatomic) struct os_unfair_lock_s lastStatusCodeCacheLock; // @synthesize lastStatusCodeCacheLock=_lastStatusCodeCacheLock;
@property(nonatomic) _Bool alreadyRepairedTheSwitch; // @synthesize alreadyRepairedTheSwitch=_alreadyRepairedTheSwitch;
@property(nonatomic) long long lastDiscoveryPurgeSeconds; // @synthesize lastDiscoveryPurgeSeconds=_lastDiscoveryPurgeSeconds;
@property(retain, nonatomic) NSMutableDictionary *deviceDiscoveryTimestamps; // @synthesize deviceDiscoveryTimestamps=_deviceDiscoveryTimestamps;
@property(retain, nonatomic) NSUUID *lastActivePairingIDThatFailed; // @synthesize lastActivePairingIDThatFailed=_lastActivePairingIDThatFailed;
@property(nonatomic) int activeDeviceChipIDNotifyToken; // @synthesize activeDeviceChipIDNotifyToken=_activeDeviceChipIDNotifyToken;
@property(retain, nonatomic) id <AbstractTimer> idsConnectivityTimer; // @synthesize idsConnectivityTimer=_idsConnectivityTimer;
@property(nonatomic) _Bool idsConnectivityTimedOut; // @synthesize idsConnectivityTimedOut=_idsConnectivityTimedOut;
@property(retain, nonatomic) NROSLogStateProvider *dumper; // @synthesize dumper=_dumper;
@property(retain, nonatomic) NSMutableDictionary *clientAssertionIDToAssertionInfo; // @synthesize clientAssertionIDToAssertionInfo=_clientAssertionIDToAssertionInfo;
@property(retain, nonatomic) NSMapTable *clientProxyToAssertionInfo; // @synthesize clientProxyToAssertionInfo=_clientProxyToAssertionInfo;
@property(retain, nonatomic) NSMapTable *assertionToAssertionInfo; // @synthesize assertionToAssertionInfo=_assertionToAssertionInfo;
@property(retain, nonatomic) NRSimpleReferenceCounter *advertisingClients; // @synthesize advertisingClients=_advertisingClients;
@property(retain, nonatomic) NRSimpleReferenceCounter *discoveringClients; // @synthesize discoveringClients=_discoveringClients;
@property(nonatomic) long long pushingReferenceCounter; // @synthesize pushingReferenceCounter=_pushingReferenceCounter;
@property(retain, nonatomic) NRSimpleReferenceCounter *pushingClients; // @synthesize pushingClients=_pushingClients;
@property(retain, nonatomic) NRSimpleReferenceCounter *switchingClients; // @synthesize switchingClients=_switchingClients;
@property(retain, nonatomic) NRSimpleReferenceCounter *pairingClients; // @synthesize pairingClients=_pairingClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastCallerQueue; // @synthesize lastCallerQueue=_lastCallerQueue;
@property(nonatomic) _Bool hasClassAFile; // @synthesize hasClassAFile=_hasClassAFile;
@property(nonatomic) _Bool mightNeedToKickOffPairedSyncAfterLaunch; // @synthesize mightNeedToKickOffPairedSyncAfterLaunch=_mightNeedToKickOffPairedSyncAfterLaunch;
@property(retain, nonatomic) NRPowerAssertionActivity *migrationActivity; // @synthesize migrationActivity=_migrationActivity;
@property(retain, nonatomic) NBManager *backupManager; // @synthesize backupManager=_backupManager;
@property(retain, nonatomic) EPNanoRegistryStatusCodeVote *migrationVote; // @synthesize migrationVote=_migrationVote;
@property(retain, nonatomic) EPScalablePipeManager *pusherPipe; // @synthesize pusherPipe=_pusherPipe;
@property(retain, nonatomic) EPScalablePipeManagerManager *pusherPipeManager; // @synthesize pusherPipeManager=_pusherPipeManager;
@property(retain, nonatomic) EPWatchPusher *lastWatchPusher; // @synthesize lastWatchPusher=_lastWatchPusher;
@property(retain, nonatomic) EPWatchPusher *watchPusher; // @synthesize watchPusher=_watchPusher;
@property(retain, nonatomic) NROSTransaction *watchPusherTransaction; // @synthesize watchPusherTransaction=_watchPusherTransaction;
@property(retain, nonatomic) EPKeymaster *keymaster; // @synthesize keymaster=_keymaster;
@property(retain, nonatomic) NRConnectivityPublisher *connectivityPublisher; // @synthesize connectivityPublisher=_connectivityPublisher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *chipIDOfActiveDeviceQueue; // @synthesize chipIDOfActiveDeviceQueue=_chipIDOfActiveDeviceQueue;
@property(retain, nonatomic) NSMutableSet *outstandingBluetoothConnectRequests; // @synthesize outstandingBluetoothConnectRequests=_outstandingBluetoothConnectRequests;
@property(nonatomic) long long receivedPropertiesTransactionRefCounter; // @synthesize receivedPropertiesTransactionRefCounter=_receivedPropertiesTransactionRefCounter;
@property(retain, nonatomic) NROSTransaction *receivedPropertiesTransaction; // @synthesize receivedPropertiesTransaction=_receivedPropertiesTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *historyPurgeWorkingSetTimer; // @synthesize historyPurgeWorkingSetTimer=_historyPurgeWorkingSetTimer;
@property(retain, nonatomic) NSUUID *bluetoothIsScanningToMatchThisDeviceID; // @synthesize bluetoothIsScanningToMatchThisDeviceID=_bluetoothIsScanningToMatchThisDeviceID;
@property(nonatomic) _Bool bluetoothIsScanning; // @synthesize bluetoothIsScanning=_bluetoothIsScanning;
@property(retain, nonatomic) NSNumber *lastDaemonState; // @synthesize lastDaemonState=_lastDaemonState;
@property(nonatomic) _Bool healthKitLastChanceSyncInProgress; // @synthesize healthKitLastChanceSyncInProgress=_healthKitLastChanceSyncInProgress;
@property(retain, nonatomic) id <AbstractTimer> gizmoSetCompatibilityStateTimer; // @synthesize gizmoSetCompatibilityStateTimer=_gizmoSetCompatibilityStateTimer;
@property(nonatomic) long long rssiValue; // @synthesize rssiValue=_rssiValue;
@property(retain, nonatomic) NROSTransaction *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(retain, nonatomic) NSMutableSet *bluetoothDiscoveryEventDedupe; // @synthesize bluetoothDiscoveryEventDedupe=_bluetoothDiscoveryEventDedupe;
@property(retain, nonatomic) NSMutableDictionary *bluetoothIDToPairingID; // @synthesize bluetoothIDToPairingID=_bluetoothIDToPairingID;
@property(retain, nonatomic) NSLock *bluetoothInitBlockLock; // @synthesize bluetoothInitBlockLock=_bluetoothInitBlockLock;
@property(retain, nonatomic) NSMutableArray *bluetoothInitBlocks; // @synthesize bluetoothInitBlocks=_bluetoothInitBlocks;
@property(retain, nonatomic) EPNanoRegistryStatusCodeVote *readyStatusCodeVote; // @synthesize readyStatusCodeVote=_readyStatusCodeVote;
@property(nonatomic) _Bool initRemoteProperties; // @synthesize initRemoteProperties=_initRemoteProperties;
@property(retain, nonatomic) id <NSObject> mcConnectionSettingsChangedNotificationToken; // @synthesize mcConnectionSettingsChangedNotificationToken=_mcConnectionSettingsChangedNotificationToken;
@property(retain, nonatomic) MCProfileConnection *mcConnection; // @synthesize mcConnection=_mcConnection;
@property(retain, nonatomic) NRLocalPropertyMonitor *localProperties; // @synthesize localProperties=_localProperties;
@property(nonatomic) _Bool sentPropertiesFlag; // @synthesize sentPropertiesFlag=_sentPropertiesFlag;
@property(retain, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
@property(retain, nonatomic) NSString *pairingClientPhase; // @synthesize pairingClientPhase=_pairingClientPhase;
@property(retain, nonatomic) CBCentralManager *central; // @synthesize central=_central;
@property(readonly, nonatomic) long long mirrorOfPairedDeviceCount; // @synthesize mirrorOfPairedDeviceCount=_mirrorOfPairedDeviceCount;
- (void)sendVersionRequestToCompanion;	// IMP=0x0000000100047b84
- (void)xpcIsAssertionActive:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100047ae8
- (void)xpcIsPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000479e0
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;	// IMP=0x000000010004783c
- (void)xpcTriggerVersion4Workaround;	// IMP=0x0000000100047838
- (void)xpcPairingShouldContinue;	// IMP=0x0000000100047834
- (id)activeDeviceAssertions;	// IMP=0x00000001000473fc
- (void)xpcActiveDeviceAssertions:(CDUnknownBlockType)arg1;	// IMP=0x000000010004738c
- (void)assertionDescription:(id)arg1;	// IMP=0x00000001000471e8
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046e00
- (void)xpcFakePairedSyncStartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046a24
- (void)xpcClearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046950
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004687c
- (id)termsAcknowledgementServiceGetCloudObject;	// IMP=0x000000010004683c
- (id)termsAcknowledgementServiceGetRemoteObject;	// IMP=0x00000001000467fc
- (void)termsAcknowledgementServiceGetNRIDFromBTID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000464c0
- (void)termsAcknowledgementServiceGetDeviceMirrorFromDeviceID:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046138
- (void)child:(id)arg1 didApplyDiff:(id)arg2;	// IMP=0x0000000100046134
- (void)xpcGetInitialSyncCompletedForPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100046118
- (void)xpcGetMigrationCountForPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000460fc
- (void)xpcGetLastSwitchIndex:(CDUnknownBlockType)arg1;	// IMP=0x00000001000460e0
- (void)xpcScanForMigratableWatchesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046054
- (void)proxyRequestsResumptionOfCrashMonitoring:(id)arg1;	// IMP=0x0000000100046048
- (void)proxyRequestsSuspensionOfCrashMonitoring:(id)arg1;	// IMP=0x000000010004603c
- (void)proxyWillInvalidateSwitchAssertion:(id)arg1;	// IMP=0x0000000100046030
- (void)proxyWillTakeSwitchAssertion:(id)arg1;	// IMP=0x0000000100046024
- (void)proxyWillEndAdvertising:(id)arg1;	// IMP=0x000000010004600c
- (void)proxyWillBeginAdvertising:(id)arg1;	// IMP=0x0000000100045ff4
- (void)proxyWillEndDiscovering:(id)arg1;	// IMP=0x0000000100045fdc
- (void)proxyWillBeginDiscovering:(id)arg1;	// IMP=0x0000000100045fc4
- (void)proxyWillEndPushing:(id)arg1;	// IMP=0x0000000100045fb8
- (void)proxyWillBeginPushing:(id)arg1;	// IMP=0x0000000100045fac
- (void)proxyWillAbortPairing:(id)arg1;	// IMP=0x0000000100045fa0
- (void)proxyWillBeginUnpairing:(id)arg1;	// IMP=0x0000000100045f94
- (void)proxyWillBeginPairing:(id)arg1;	// IMP=0x0000000100045f88
- (_Bool)proxyIsSecureDataAvailable:(id)arg1;	// IMP=0x0000000100045f4c
- (void)updateNRMutableDeviceFromEPDevice:(id)arg1 withNRUUID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045f48
- (void)sendRemoteUnpairingDidBeginNotificationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100045c2c
- (void)savePairingReport;	// IMP=0x0000000100045c28
- (void)pushVersion4CompatibilityMessageIfNeeded;	// IMP=0x0000000100045c24
- (void)setPairingID:(id)arg1;	// IMP=0x0000000100045c20
- (void)pairingCompleted;	// IMP=0x0000000100045c1c
- (void)deleteUnexpectedIDSPairedDevices;	// IMP=0x0000000100045c18
- (void)createLocalPairingStore:(id)arg1 andNotifyPairingBeginning:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045c14
- (void)createDeviceFromPairingRequest:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045c10
- (void)activateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045c0c
- (id)_pathToNanoRegistryStateDirectory;	// IMP=0x0000000100045c04
- (void)_cleanUpDiscoveredDevicesWithCollection:(id)arg1;	// IMP=0x0000000100045c00
- (void)getPairedPairingIDForBluetoothID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045884
- (void)idsConnectivityTimeout;	// IMP=0x000000010004585c
- (void)startIDSConnectivityTimeout;	// IMP=0x0000000100045730
- (void)resetIDSConnectivityTimeout;	// IMP=0x00000001000456e8
- (void)keychainSyncStatusDidChange:(_Bool)arg1;	// IMP=0x0000000100045388
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x0000000100045384
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x0000000100045380
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x000000010004537c
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x0000000100045378
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x0000000100045374
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;	// IMP=0x0000000100045370
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000452cc
- (long long)maxPairingCompatibilityVersion;	// IMP=0x0000000100045278
- (long long)minPairingCompatibilityVersion;	// IMP=0x0000000100045224
- (void)remoteObjectReveivedWatchMigrationMetricSessionID:(id)arg1;	// IMP=0x00000001000451a0
- (void)remoteObjectReceivedWatchMigrationCompletion:(unsigned long long)arg1;	// IMP=0x00000001000450d8
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044f24
- (void)xpcSwitchIndex:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044ef0
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044e88
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044e54
- (void)xpcGetDeviceCollectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044e20
- (void)xpcGetChangeHistoryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044dec
- (void)xpcClientInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044db8
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044d34
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044904
- (void)xpcStopWatchSetupPushWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044880
- (void)xpcStartWatchSetupPushWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044720
- (void)stopPushing;	// IMP=0x00000001000445e8
- (void)startPushing;	// IMP=0x000000010004440c
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000442fc
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004423c
- (_Bool)shouldCollectPairingPerfStackshots;	// IMP=0x0000000100044204
- (void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100043fe8
- (void)remoteObject:(id)arg1 receivedMigratedAwayWithAdvertisedName:(id)arg2;	// IMP=0x00000001000439e4
- (void)remoteObject:(id)arg1 receivedMigrationRequestWithShouldCancel:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000438a4
- (void)resourceAvailabilityDidChange:(id)arg1;	// IMP=0x0000000100042f18
- (void)assertionFactoryDidBecomeIdle:(id)arg1;	// IMP=0x0000000100042e28
- (void)remoteObject:(id)arg1 receivedSystemVersionBroadcast:(id)arg2;	// IMP=0x0000000100042d84
- (void)remoteObject:(id)arg1 receivedCheckTermsEvent:(id)arg2 fromIDSBTUUID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100042ca0
- (void)remoteObject:(id)arg1 receivedAddTermsEvent:(id)arg2 fromIDSBTUUID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100042bbc
- (void)remoteObject:(id)arg1 receivedPropertyRequestWithRequestIdentifier:(id)arg2 fromIDSBTUUID:(id)arg3;	// IMP=0x0000000100042b00
- (void)remoteObject:(id)arg1 receivedPropertyChanges:(id)arg2 isAllProperties:(_Bool)arg3 fromIDSBTUUID:(id)arg4;	// IMP=0x0000000100042484
- (id)_deviceFromIDSBTUUID:(id)arg1;	// IMP=0x00000001000421bc
- (void)remoteObject:(id)arg1 receivedUnpairRequestWithAdvertisedName:(id)arg2 shouldObliterate:(_Bool)arg3 shouldBrick:(_Bool)arg4 shouldPreserveESim:(_Bool)arg5 withPairingFailureCode:(id)arg6 withAbortReason:(id)arg7 withRequestIdentifier:(id)arg8 fromIDSBTUUID:(id)arg9;	// IMP=0x00000001000417d8
- (void)_updatePairedDevicePropertiesFromIDSDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040510
- (void)presentWatchWasUpdatedAlertIfNeededForNewBuildVersion:(id)arg1 oldBuildVersion:(id)arg2;	// IMP=0x000000010004031c
- (void)_isIDSReady;	// IMP=0x000000010003fc88
- (void)checkLaunchNotificationsSetup;	// IMP=0x000000010003f8b0
- (void)_notifyClients;	// IMP=0x000000010003f860
- (void)getPairedPairedPairingIDForBluetoothID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f4d8
- (void)remoteObjectIDSServiceUnavailable:(id)arg1;	// IMP=0x000000010003f4cc
- (void)remoteObjectDevicesChanged:(id)arg1;	// IMP=0x000000010003f3a4
- (void)remoteObjectIDSServiceAvailable:(id)arg1 withIDSDevice:(id)arg2;	// IMP=0x000000010003f2cc
- (void)remoteObject:(id)arg1 isConnected:(_Bool)arg2;	// IMP=0x000000010003ee94
- (_Bool)_isIDSPairedAndConsistentWithIDSDevices:(id)arg1;	// IMP=0x000000010003ec94
- (void)getCanPairAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e868
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e7e4
- (void)xpcResumePairingClientCrashMonitoring:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e6e4
- (void)xpcSuspendPairingClientCrashMonitoring:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e61c
- (void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;	// IMP=0x000000010003df58
- (void)enterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003dd84
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;	// IMP=0x000000010003dd74
- (void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2;	// IMP=0x000000010003dbe8
- (void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x000000010003da74
- (void)abortPairingReason:(id)arg1 proxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d7a0
- (void)xpcAbortPairingReason:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d710
- (void)handleDeadPairingClient:(id)arg1;	// IMP=0x000000010003d668
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ce84
- (void)xpcBeginMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cd70
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c68c
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;	// IMP=0x000000010003bd2c
- (void)clearMagicSwitchAdvertisingIdentifierSeedIfNeeded;	// IMP=0x000000010003ba7c
- (void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;	// IMP=0x000000010003aa80
- (void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;	// IMP=0x0000000100039afc
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038e30
- (void)checkAndDisableStandAloneMode;	// IMP=0x0000000100038b74
- (long long)pairingVersionFromAdvertisedName:(id)arg1;	// IMP=0x0000000100038af8
- (void)xpcSwitchToSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038a98
- (void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038a38
- (void)xpcPairWithSimulator:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000389d8
- (void)setUpClientReferenceCounters;	// IMP=0x0000000100038400
- (void)updateShouldMonitorProxy:(id)arg1;	// IMP=0x0000000100038200
- (void)_cancelScheduleTimerOnQueue:(id)arg1;	// IMP=0x00000001000380bc
- (void)_scheduleTimerOnQueue:(id)arg1 afterDelay:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037ed8
- (void)xpcServer:(id)arg1 proxyDidDisconnect:(id)arg2;	// IMP=0x00000001000379e0
- (void)xpcServer:(id)arg1 proxyDidResume:(id)arg2;	// IMP=0x0000000100037884
- (void)xpcServer:(id)arg1 proxyDidSuspend:(id)arg2;	// IMP=0x0000000100037690
- (void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001000373f0
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0000000100037378
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010003733c
- (void)updateFromBTState;	// IMP=0x0000000100037230
- (void)updateFromBTState:(long long)arg1;	// IMP=0x0000000100036f20
- (void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036dfc
- (void)xpcSubmitRTCPairingMetricForMetricID:(id)arg1 withSuccess:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036db4
- (void)xpcSubmitAlbertPairingReport:(CDUnknownBlockType)arg1;	// IMP=0x0000000100036b98
- (id)localizedString:(id)arg1;	// IMP=0x0000000100036adc
- (_Bool)isDemoModeEnabled;	// IMP=0x0000000100036ad8
- (void)updateTrafficClass;	// IMP=0x00000001000366a8
- (id)getTrafficClassifiersForCompatibilityState:(unsigned short)arg1;	// IMP=0x00000001000365ec
- (void)sendXPCOOBKeyChanged:(id)arg1;	// IMP=0x0000000100036430
- (id)getOOBKey;	// IMP=0x0000000100036428
- (void)beginDiscovery:(_Bool)arg1 withDeviceIDToDiscover:(id)arg2;	// IMP=0x0000000100035f18
- (void)getAdvertisedNameFromDeviceID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035cdc
- (id)_bluetoothIDOfActiveDevice;	// IMP=0x0000000100035c34
- (id)_bluetoothIDFromPairingID:(id)arg1;	// IMP=0x0000000100035b64
- (void)setOOBPairingEnabled:(_Bool)arg1;	// IMP=0x0000000100035b60
- (void)createDeviceFromBluetoothDiscoveryWithAdvertisementData:(id)arg1 withBluetoothPeer:(id)arg2 withRSSI:(id)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000348b8
- (void)removeStaleDiscoveredDevices;	// IMP=0x00000001000344d8
- (void)createDeviceFromBluetoothPairRequestWithBluetoothPeer:(id)arg1 advertisedName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034318
- (void)initiateSyncAfterSoftwareUpdateForDevice:(id)arg1;	// IMP=0x0000000100033e88
- (void)_updateCompatibilityStateForDeviceID:(id)arg1 withDeviceCollection:(id)arg2 oldCompatibilityState:(id)arg3 newCompatibilityState:(id)arg4;	// IMP=0x0000000100033a10
- (void)_updateCompatibilityStateForDeviceID:(id)arg1 withDeviceCollection:(id)arg2;	// IMP=0x0000000100033424
- (void)statusCodeManager:(id)arg1 electionOutcomeChanged:(unsigned long long)arg2;	// IMP=0x0000000100033360
- (void)setStatusCode:(unsigned long long)arg1 InCollection:(id)arg2;	// IMP=0x00000001000331d0
- (id)IDSGetPairedDevices;	// IMP=0x0000000100032f14
- (void)purgeIDSPairedDevicesExceptFor:(id)arg1 withQueue:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000325e0
- (void)deleteUnexpectedIDSPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003207c
- (void)updateDeviceID:(id)arg1 withProperties:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031a20
- (void)idsSendProperties:(id)arg1 thisIsAllOfThem:(_Bool)arg2;	// IMP=0x000000010003139c
- (void)localMonitor:(id)arg1 propertiesDidChange:(id)arg2 thisIsAllOfThem:(_Bool)arg3;	// IMP=0x0000000100031374
- (void)deleteLocalPairingStore:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000311bc
- (void)refreshPropertyCache;	// IMP=0x0000000100030e34
- (void)sendXPCBTPairRequestMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030e30
- (void)sendXPCDeviceNeedsPasscodeMessage:(id)arg1 passcode:(id)arg2;	// IMP=0x0000000100030c0c
- (void)forceEndDiscovery;	// IMP=0x0000000100030a30
- (void)forceEndAdvertising;	// IMP=0x0000000100030a2c
- (void)grabPairingAgent;	// IMP=0x0000000100030a28
- (void)updateIsPairedAggDKey:(id)arg1;	// IMP=0x0000000100030874
- (_Bool)isBluetoothPoweredOn;	// IMP=0x0000000100030830
- (_Bool)isBluetoothConnected;	// IMP=0x00000001000307ec
- (_Bool)isBluetoothPoweredOn:(long long)arg1;	// IMP=0x00000001000307d4
- (_Bool)isBluetoothConnected:(long long)arg1;	// IMP=0x00000001000307c8
- (void)dealloc;	// IMP=0x0000000100030794
- (void)voidIDSService:(Class)arg1;	// IMP=0x0000000100030688
- (void)getEnsureActiveDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030000
- (_Bool)isInternalInstall;	// IMP=0x000000010002fffc
- (void)normalizeDaemonStateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002fc20
- (_Bool)isSecureDataAvailable;	// IMP=0x000000010002fbe4
- (_Bool)managedConfigurationWatchDisabled;	// IMP=0x000000010002faa4
- (void)registerManagedConfigurationChanged:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f8c0
- (unsigned long long)readNotifyToken:(int)arg1;	// IMP=0x000000010002f880
- (void)updateNotifyToken:(int)arg1 withValue:(unsigned long long)arg2 withNotificationName:(id)arg3;	// IMP=0x000000010002f870
- (void)updateNotifyToken:(int)arg1 withValue:(unsigned long long)arg2 withNotificationName:(id)arg3 alwaysPost:(_Bool)arg4;	// IMP=0x000000010002f574
- (int)getNotifyTokenWithName:(id)arg1;	// IMP=0x000000010002f460
- (void)allocateDictionaries;	// IMP=0x000000010002f36c
- (void)ackXPCEvents;	// IMP=0x000000010002eb18
- (void)debounceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e664
- (void)cleanupPairingStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002e2a4
- (_Bool)setPairingClientCrashMonitoringCache:(_Bool)arg1 proxy:(id)arg2;	// IMP=0x000000010002df0c
- (void)syncPairingClientCrashMonitoringCache;	// IMP=0x000000010002d97c
- (id)init;	// IMP=0x000000010002cfac
- (void)updateAppRemovability:(CDUnknownBlockType)arg1;	// IMP=0x000000010002cb40
- (void)purgeDiscoveredDevices:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c73c
- (void)_transactionCoordinatorHasBecomeIdle;	// IMP=0x000000010002c0b0
- (void)transactionCoordinatorHasBecomeIdle;	// IMP=0x000000010002bfb0
- (void)enqueueSetLastPairedDeviceTransactionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002bb44
- (void)lastPairedDeviceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b0b8
- (void)postFirstUnlockInitBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a2a0
- (void)preFirstUnlockInitCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029c64
- (id)dump;	// IMP=0x00000001000297d0
- (void)invalidateIDSChannels;	// IMP=0x000000010002969c
- (void)initializeAllIDSChannelsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000291b8
- (void)areWePairedOrPairing:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028f2c
- (void)initializeTrafficClassBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028a58
- (void)initIDSService:(Class)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027d90
- (void)sigUsr1;	// IMP=0x0000000100027b34
- (void)sigTerm;	// IMP=0x0000000100027a9c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pairingQueue;
- (void)logIfVersionsAreOverridden;	// IMP=0x0000000100027860
- (void)broadcastActiveDeviceChipID:(id)arg1 from:(id)arg2;	// IMP=0x0000000100027654
@property(readonly, nonatomic) _Bool mirrorOfIsPaired; // @synthesize mirrorOfIsPaired=_mirrorOfIsPaired;
@property(readonly, nonatomic) NSUUID *mirrorOfActiveDeviceID; // @synthesize mirrorOfActiveDeviceID=_mirrorOfActiveDeviceID;
@property(readonly, nonatomic) NRMutableDevice *mirrorOfActiveDevice; // @synthesize mirrorOfActiveDevice=_mirrorOfActiveDevice;
- (void)updateMirrorWithCollection:(id)arg1;	// IMP=0x0000000100027190
- (_Bool)pairingCompatibilityVersionInitWithCollection:(id)arg1;	// IMP=0x0000000100027008
@property(retain, nonatomic) NSNumber *chipIDOfActiveDevice; // @synthesize chipIDOfActiveDevice=_chipIDOfActiveDevice;
- (void)initBluetoothWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026c24
- (void)createUnpairTransactionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024a28
- (void)_forceMigrationSync:(id)arg1 withCollection:(id)arg2;	// IMP=0x0000000100024464
- (void)_archiveDevices:(id)arg1 withCollection:(id)arg2;	// IMP=0x0000000100023a90
- (void)unpairDeviceWithPairingID:(id)arg1 obliterationString:(id)arg2 shouldBrick:(id)arg3 storeUnpair:(id)arg4 migrationUnpair:(id)arg5 shouldPreserveESim:(id)arg6 pairingReport:(id)arg7 remoteUnpairRequestUUID:(id)arg8 shouldConnectionWithDevice:(_Bool)arg9;	// IMP=0x0000000100022ec0
- (id)unpairReasonString:(unsigned long long)arg1;	// IMP=0x0000000100022e44
- (_Bool)legacyDidRestoreFromBackup;	// IMP=0x0000000100022764
@property(nonatomic) _Bool didRestoreFromBackup;
- (id)legacyUnpairTriggerFileContents;	// IMP=0x0000000100022500
- (id)unpairTriggerFileContents;	// IMP=0x00000001000222e0
- (void)nuke:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022064
- (_Bool)storeMode;	// IMP=0x0000000100022034
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021f04
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021d34
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021820
@property(retain, nonatomic) NRPairingProxy *lastCaller; // @synthesize lastCaller=_lastCaller;
- (void)removeExternalAssertionsForPairingID:(id)arg1;	// IMP=0x0000000100021340
- (void)removeAssertionsForProxy:(id)arg1 newDeviceID:(id)arg2;	// IMP=0x00000001000210a4
- (void)removeAssertionsForProxy:(id)arg1;	// IMP=0x0000000100021094
- (void)removeAssertionInfo:(id)arg1;	// IMP=0x0000000100020e0c
- (void)saveAssertionInfo:(id)arg1;	// IMP=0x0000000100020b50
- (void)scanCollectionForUpdateModeDevices:(id)arg1;	// IMP=0x00000001000207b0
- (void)_deleteSharingPathWithPairingID:(id)arg1;	// IMP=0x0000000100020538
- (void)setIDSTrafficClassifiersForActiveDeviceWithNewCompatibilityState:(id)arg1;	// IMP=0x0000000100020368
- (void)_setBridgeBadgeWithCollection:(id)arg1;	// IMP=0x0000000100020108
- (void)_updateActiveFlag:(id)arg1;	// IMP=0x000000010001ff38
- (void)setUpHistoryCompletionBlocks;	// IMP=0x000000010001eb14
@property(nonatomic) unsigned long long lastStatusCodeCache; // @synthesize lastStatusCodeCache=_lastStatusCodeCache;
- (void)xpcEndDiscoveryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e7b8
- (void)xpcBeginDiscoveryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e75c
@property(readonly, nonatomic) NRPairingReport *pairingReport;
- (void)sendPairingIdToActiveDevice:(id)arg1;	// IMP=0x00000001000e8288
- (void)updatePairingSessionIdIfNeededForActiveDevice;	// IMP=0x00000001000e7f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

