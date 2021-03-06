//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ProximityCommonViewControllerProxy.h"

#import "VTUIEnrollTrainingViewControllerDelegate-Protocol.h"

@class AudioSoftwareUpdateViewController, NSString, ProximityPairingViewController, SFAnnounceMessagesEvent, UIStoryboard;

@interface ProximityPairingViewControllerProxy : ProximityCommonViewControllerProxy <VTUIEnrollTrainingViewControllerDelegate>
{
    _Bool _dismissed;	// 86 = 0x56
    _Bool _homePressed;	// 87 = 0x57
    ProximityPairingViewController *_pairingViewController;	// 88 = 0x58
    _Bool _reportedResult;	// 96 = 0x60
    AudioSoftwareUpdateViewController *_vcSoftwareUpdate;	// 104 = 0x68
    double _viewAppearedTime;	// 112 = 0x70
    UIStoryboard *_shareAudioProxStoryboard;	// 120 = 0x78
    _Bool _guestMode;	// 128 = 0x80
    _Bool _siriNotificationOnly;	// 129 = 0x81
    _Bool _softwareVolume;	// 130 = 0x82
    _Bool _userAccepted;	// 131 = 0x83
    unsigned int _deviceVersion;	// 132 = 0x84
    int _pairErrorCode;	// 136 = 0x88
    int _testMode;	// 140 = 0x8c
    double _pairStartTime;	// 144 = 0x90
    double _userResponseTime;	// 152 = 0x98
    SFAnnounceMessagesEvent *_announceMessagesEvent;	// 160 = 0xa0
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100060918
- (void).cxx_destruct;	// IMP=0x0000000100060498
@property(retain, nonatomic) SFAnnounceMessagesEvent *announceMessagesEvent; // @synthesize announceMessagesEvent=_announceMessagesEvent;
@property(nonatomic) double userResponseTime; // @synthesize userResponseTime=_userResponseTime;
@property(nonatomic) _Bool userAccepted; // @synthesize userAccepted=_userAccepted;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool softwareVolume; // @synthesize softwareVolume=_softwareVolume;
@property(nonatomic) _Bool siriNotificationOnly; // @synthesize siriNotificationOnly=_siriNotificationOnly;
@property(nonatomic) double pairStartTime; // @synthesize pairStartTime=_pairStartTime;
@property(nonatomic) int pairErrorCode; // @synthesize pairErrorCode=_pairErrorCode;
@property(nonatomic) _Bool guestMode; // @synthesize guestMode=_guestMode;
@property(nonatomic) unsigned int deviceVersion; // @synthesize deviceVersion=_deviceVersion;
- (void)showSiriAnnounceMessages;	// IMP=0x00000001000600e0
- (_Bool)siriNotificationsSetupNeeded;	// IMP=0x000000010005fda4
- (void)showLearnMore;	// IMP=0x000000010005fcb8
- (void)continueSetup;	// IMP=0x000000010005fbec
- (void)skipSetup;	// IMP=0x000000010005fb20
- (void)dismissSetup;	// IMP=0x000000010005faa4
- (void)_trainingStart;	// IMP=0x000000010005f978
- (_Bool)shouldShowHeySiriSetUp;	// IMP=0x000000010005f900
- (_Bool)accessorySupportsSiri;	// IMP=0x000000010005f8a4
- (void)_testHandler:(id)arg1;	// IMP=0x000000010005f67c
- (void)showStatus:(id)arg1;	// IMP=0x000000010005f330
- (void)showShareDone;	// IMP=0x000000010005f264
- (void)showRepairInstructions;	// IMP=0x000000010005eff8
- (void)showRepairConnect:(id)arg1;	// IMP=0x000000010005eb9c
- (void)showConnectUI:(_Bool)arg1;	// IMP=0x000000010005e674
- (void)reportResult;	// IMP=0x000000010005e2dc
- (void)_handleHomeButtonPressed;	// IMP=0x000000010005e198
- (void)handleButtonActions:(id)arg1;	// IMP=0x000000010005e064
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005df3c
- (void)dismiss:(int)arg1;	// IMP=0x000000010005ded0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010005db4c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010005d524
- (void)_willAppearInRemoteViewController;	// IMP=0x000000010005d4b0
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010005d4a8
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

