//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class AppleTVSetupAuthViewController, AppleTVSetupDoneViewController, AppleTVSetupHomePickerViewController, AppleTVSetupProgressViewController, AppleTVSetupRoomPickerViewController, AppleTVSetupStartViewController, NSUUID, SFDeviceSetupAppleTVSession, SVSCommonNavController, UIStoryboard;

@interface AppleTVSetupMainController : SVSBaseMainController
{
    _Bool _dismissed;	// 24 = 0x18
    UIStoryboard *_storyboard;	// 32 = 0x20
    AppleTVSetupAuthViewController *_vcAuth;	// 40 = 0x28
    AppleTVSetupDoneViewController *_vcDone;	// 48 = 0x30
    SVSCommonNavController *_vcNav;	// 56 = 0x38
    AppleTVSetupProgressViewController *_vcProgress;	// 64 = 0x40
    AppleTVSetupHomePickerViewController *_vcHomePicker;	// 72 = 0x48
    AppleTVSetupRoomPickerViewController *_vcRoomPicker;	// 80 = 0x50
    AppleTVSetupStartViewController *_vcStart;	// 88 = 0x58
    unsigned int _badPINCount;	// 96 = 0x60
    NSUUID *_deviceIdentifier;	// 104 = 0x68
    SFDeviceSetupAppleTVSession *_setupSession;	// 112 = 0x70
    unsigned long long _testFlags;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010001677c
@property(nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
@property(retain, nonatomic) SFDeviceSetupAppleTVSession *setupSession; // @synthesize setupSession=_setupSession;
@property(copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned int badPINCount; // @synthesize badPINCount=_badPINCount;
- (void)showRoomPickerUI:(id)arg1 firstSuggestedIndex:(long long)arg2;	// IMP=0x00000001000165d8
- (void)showHomePickerUI:(id)arg1 defaultIndex:(long long)arg2;	// IMP=0x00000001000164b4
- (void)showProgressUI;	// IMP=0x00000001000163dc
- (void)showDoneUI:(id)arg1 final:(_Bool)arg2;	// IMP=0x00000001000160ec
- (void)showDoneUI:(id)arg1;	// IMP=0x00000001000160dc
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0000000100015ff0
- (void)chooseRoom:(id)arg1;	// IMP=0x0000000100015fd8
- (void)chooseHome:(id)arg1;	// IMP=0x0000000100015fc0
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0000000100015d54
- (void)_sessionStart:(id)arg1;	// IMP=0x0000000100015b54
- (void)_pairSetupTryPIN:(id)arg1;	// IMP=0x0000000100015a9c
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100015910
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000157f8
- (void)dismiss:(int)arg1;	// IMP=0x00000001000157e8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100015570
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001534c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100015284
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000150d8

@end
