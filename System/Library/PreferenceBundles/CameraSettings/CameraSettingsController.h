//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface CameraSettingsController : PSListController
{
    _Bool __didAppearAtLeastOnce;	// 192 = 0xc0
    PSSpecifier *__overCaptureGroupSpecifier;	// 200 = 0xc8
    PSSpecifier *__overCaptureForPhotoSpecifier;	// 208 = 0xd0
    PSSpecifier *__overCaptureForVideoSpecifier;	// 216 = 0xd8
    PSSpecifier *__autoAdjustmentSpecifier;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000000993c
@property(retain, nonatomic) PSSpecifier *_autoAdjustmentSpecifier; // @synthesize _autoAdjustmentSpecifier=__autoAdjustmentSpecifier;
@property(retain, nonatomic) PSSpecifier *_overCaptureForVideoSpecifier; // @synthesize _overCaptureForVideoSpecifier=__overCaptureForVideoSpecifier;
@property(retain, nonatomic) PSSpecifier *_overCaptureForPhotoSpecifier; // @synthesize _overCaptureForPhotoSpecifier=__overCaptureForPhotoSpecifier;
@property(retain, nonatomic) PSSpecifier *_overCaptureGroupSpecifier; // @synthesize _overCaptureGroupSpecifier=__overCaptureGroupSpecifier;
@property(nonatomic) _Bool _didAppearAtLeastOnce; // @synthesize _didAppearAtLeastOnce=__didAppearAtLeastOnce;
- (void)_handleMediaCaptureEndcodingBehaviorChangedNotification:(id)arg1;	// IMP=0x0000000000009624
- (void)_removeAutoAdjustmentSpecifier;	// IMP=0x000000000000955c
- (void)_addAutoAdjustmentSpecifier;	// IMP=0x0000000000009454
- (void)_handleOverCaptureRequiresHEVCConfirmation:(id)arg1;	// IMP=0x00000000000092a4
- (void)_setOverCaptureEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000008d18
- (id)cam_readBooleanPreferenceFromSpecifier:(id)arg1;	// IMP=0x0000000000008bfc
- (void)_setStereoAudioRecordingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000008b68
- (id)_isStereoAudioRecordingEnabled:(id)arg1;	// IMP=0x0000000000008b28
- (void)_handleSlomo1080p240MostCompatibleConfirmed:(id)arg1;	// IMP=0x0000000000008a8c
- (void)_setRecordSlomoConfiguration:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000008768
- (id)_recordSlomoConfiguration:(id)arg1;	// IMP=0x0000000000008704
- (void)_handleConfirmHighEfficiencyLearnMore:(id)arg1;	// IMP=0x0000000000008600
- (void)_handleVideo4k60MostCompatibleConfirmed:(id)arg1;	// IMP=0x0000000000008564
- (void)_setRecordVideoConfiguration:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000008240
- (id)_recordVideoConfiguration:(id)arg1;	// IMP=0x00000000000081dc
- (_Bool)_showHEVCOnlyFormatsOnCapableDevices;	// IMP=0x00000000000081b0
- (void)dealloc;	// IMP=0x000000000000812c
- (id)_initializeSpecifiers;	// IMP=0x0000000000005b84
- (id)specifiers;	// IMP=0x0000000000005b28
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000005ab0

@end

