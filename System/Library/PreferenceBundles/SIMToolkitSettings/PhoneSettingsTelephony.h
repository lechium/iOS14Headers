//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, PHForwardingSettings;
@protocol OS_dispatch_queue;

@interface PhoneSettingsTelephony : NSObject
{
    NSMutableDictionary *_pendingSaves;	// 8 = 0x8
    NSMutableDictionary *_pendingRequests;	// 16 = 0x10
    NSString *_myNumber;	// 24 = 0x18
    NSString *_carrierName;	// 32 = 0x20
    PHForwardingSettings *_callForwardingSettingsUnconditional;	// 40 = 0x28
    PHForwardingSettings *_callForwardingSettingsMobileBusy;	// 48 = 0x30
    PHForwardingSettings *_callForwardingSettingsNoReply;	// 56 = 0x38
    PHForwardingSettings *_callForwardingSettingsNotReachable;	// 64 = 0x40
    unsigned int _callWaitingEnabled;	// 72 = 0x48
    unsigned int _callerIDIsModifiable;	// 76 = 0x4c
    unsigned int _callerIDMode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    int _networkSelectionMode;	// 96 = 0x60
    unsigned int _simLocked;	// 100 = 0x64
    NSString *_cachedPassword;	// 104 = 0x68
    NSString *_newNumber;	// 112 = 0x70
    unsigned int _savingPhoneNumber:1;	// 120 = 0x78
    unsigned int _phoneBookSelected:1;	// 120 = 0x78
    unsigned int _phoneNumberWritten:1;	// 120 = 0x78
    NSDictionary *_simToolkitMenu;	// 128 = 0x80
    struct __CTServerConnection *_serverConnection;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000009280
- (id)descriptionDictionary;	// IMP=0x00000000000090f0
- (void)_invalidateSIMToolkitMenuItemCache;	// IMP=0x0000000000009074
- (void)_phoneNumberChanged;	// IMP=0x0000000000008f30
- (void)_phoneNumberWritten;	// IMP=0x0000000000008f04
- (void)_phoneNumberSaveFinishedWithSuccess:(_Bool)arg1;	// IMP=0x0000000000008c9c
- (void)_phoneBookSelected;	// IMP=0x0000000000008bac
- (void)_networkSettingsDisabled;	// IMP=0x0000000000008abc
- (void)_simPUKLocked;	// IMP=0x00000000000089cc
- (void)_simReady;	// IMP=0x00000000000088dc
- (void)_simRemoved;	// IMP=0x00000000000087dc
- (void)_carrierInfoChanged;	// IMP=0x0000000000008708
- (void)_saveSettings:(id)arg1;	// IMP=0x00000000000085d0
- (void)_requestSettings:(id)arg1;	// IMP=0x0000000000008498
- (void)_saveCallForwardingEnabled:(_Bool)arg1 number:(id)arg2 forwardingReason:(id)arg3;	// IMP=0x00000000000082bc
- (void)_requestCallForwardingSettingsForReason:(id)arg1;	// IMP=0x0000000000008190
- (void)_handlePINSettings:(id)arg1;	// IMP=0x00000000000080c4
- (void)_handleSIMLockSettings:(id)arg1;	// IMP=0x0000000000007f4c
- (void)_handleCallerIDChanged;	// IMP=0x0000000000007f14
- (void)_handleCallerIDSettings:(id)arg1;	// IMP=0x0000000000007cf0
- (void)_handleNetworkList:(id)arg1;	// IMP=0x0000000000007c50
- (void)_handleCallWaitingSettings:(id)arg1;	// IMP=0x0000000000007a3c
- (void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(_Bool)arg2 forwardingReason:(id)arg3;	// IMP=0x00000000000075b0
- (void)resetLastUsedForwardingNumberForReason:(id)arg1;	// IMP=0x000000000000751c
- (id)lastUsedForwardingNumberForReason:(id)arg1;	// IMP=0x00000000000074b8
- (void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1;	// IMP=0x00000000000072a4
- (id)_callForwardingSettingsForForwardingReason:(id)arg1;	// IMP=0x000000000000713c
- (void)receivedSaveResponseForUniqueSettingType:(id)arg1;	// IMP=0x00000000000070c0
- (void)receivedRequestResponseForUniqueSettingType:(id)arg1;	// IMP=0x0000000000007044
- (id)pendingSaveForUniqueSettingType:(id)arg1;	// IMP=0x0000000000006fb4
- (id)pendingRequestForUniqueSettingType:(id)arg1;	// IMP=0x0000000000006f24
- (int)showReplyWithMessage;	// IMP=0x0000000000006f1c
- (int)showSIMToolkitMenu;	// IMP=0x0000000000006ea4
- (int)showSIMPIN;	// IMP=0x0000000000006e48
- (int)showCallerID;	// IMP=0x0000000000006e0c
- (int)showCallWaiting;	// IMP=0x0000000000006dd0
- (int)showCallForwarding;	// IMP=0x0000000000006d78
- (void)setPIN:(id)arg1 password:(id)arg2;	// IMP=0x0000000000006c64
- (_Bool)allowPINChange;	// IMP=0x0000000000006c1c
- (id)simToolkitMenuItems;	// IMP=0x0000000000006bdc
- (id)simToolkitMenuTitle;	// IMP=0x0000000000006b9c
- (void)_populateToolkitMenuIfNeeded;	// IMP=0x0000000000006ae8
- (void)selectSIMToolkitMenuItemAtIndex:(int)arg1;	// IMP=0x0000000000006a50
- (id)unlockAttemptsRemainingString;	// IMP=0x00000000000068fc
- (void)setSIMLocked:(_Bool)arg1 password:(id)arg2;	// IMP=0x00000000000067a8
- (unsigned int)simLocked:(_Bool)arg1;	// IMP=0x00000000000066e0
- (_Bool)allowSIMLock;	// IMP=0x00000000000066b8
- (id)manuallySelectedNetworkDictionary;	// IMP=0x00000000000066a4
- (int)networkSelectionMode;	// IMP=0x000000000000665c
- (void)requestNetworkList;	// IMP=0x00000000000065ec
- (void)setCallerIDEnabled:(unsigned int)arg1;	// IMP=0x000000000000647c
- (unsigned int)callerIDMode:(_Bool)arg1;	// IMP=0x00000000000063d8
- (unsigned int)callerIDModifiable:(_Bool)arg1;	// IMP=0x0000000000006394
- (_Bool)allowCallerIDChange:(_Bool)arg1;	// IMP=0x000000000000636c
- (void)setCallWaitingEnabled:(_Bool)arg1;	// IMP=0x00000000000061a4
- (unsigned int)callWaitingEnabled:(_Bool)arg1;	// IMP=0x0000000000005fe0
- (void)setCallForwardingNumber:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000000005ec8
- (void)setCallForwardingNumber:(id)arg1;	// IMP=0x0000000000005eb0
- (id)callForwardingNumber:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000005dec
- (id)callForwardingNumber:(_Bool)arg1;	// IMP=0x0000000000005dd4
- (void)setCallForwardingEnabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000005c5c
- (void)setCallForwardingEnabled:(_Bool)arg1;	// IMP=0x0000000000005c44
- (unsigned int)callForwardingEnabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000005b6c
- (unsigned int)callForwardingEnabled:(_Bool)arg1;	// IMP=0x0000000000005b54
- (void)selectManualNetwork:(id)arg1;	// IMP=0x0000000000005a94
- (void)enableAutomaticNetworkSelection;	// IMP=0x0000000000005a24
- (id)currentNetwork;	// IMP=0x0000000000005a04
- (_Bool)allowNetworkSelection;	// IMP=0x000000000000598c
- (_Bool)hasSubscriberIdentity;	// IMP=0x0000000000005830
- (_Bool)simIsPresent;	// IMP=0x0000000000005808
- (id)carrierName;	// IMP=0x0000000000005724
- (void)setMyNumber:(id)arg1;	// IMP=0x0000000000005588
- (id)myNumber;	// IMP=0x00000000000053b8
- (int)currentNetworkSelectionState;	// IMP=0x00000000000052d8
@property(readonly, nonatomic) struct __CTServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000000050e0
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000004ffc
- (void)stopWatching;	// IMP=0x0000000000004d64
- (void)startWatching;	// IMP=0x0000000000003648
- (void)_invalidateSIMLockedSetting;	// IMP=0x00000000000035d4
- (void)_resetCallerIDSettings;	// IMP=0x0000000000003560
- (void)resetCallForwardingSettings;	// IMP=0x0000000000003458
- (void)_reset;	// IMP=0x00000000000033cc
- (void)destroyServerConnection;	// IMP=0x0000000000003398
- (void)dealloc;	// IMP=0x0000000000003300
- (id)init;	// IMP=0x0000000000002f64

@end

