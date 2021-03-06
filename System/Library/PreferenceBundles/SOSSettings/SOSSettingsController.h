//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "CoreTelephonyClientSubscriberDelegate-Protocol.h"

@class CoreTelephonyClient, NSArray, NSMutableArray, NSString, PSSpecifier, SOSContactsManager;

@interface SOSSettingsController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    SOSContactsManager *_contactsManager;	// 192 = 0xc0
    NSArray *_sosContacts;	// 200 = 0xc8
    NSMutableArray *_sosContactsNumbers;	// 208 = 0xd0
    PSSpecifier *_autoCallGroupSpecifier;	// 216 = 0xd8
    PSSpecifier *_autoCallSpecifier;	// 224 = 0xe0
    PSSpecifier *_alsoWorksWithGroupSpecifier;	// 232 = 0xe8
    PSSpecifier *_alsoWorksWithClicksSpecifier;	// 240 = 0xf0
    PSSpecifier *_clicksRadioGroup;	// 248 = 0xf8
    PSSpecifier *_threeClicksSpecifier;	// 256 = 0x100
    PSSpecifier *_fiveClicksSpecifier;	// 264 = 0x108
    PSSpecifier *_stopSharingGroup;	// 272 = 0x110
    PSSpecifier *_stopSharingButton;	// 280 = 0x118
    PSSpecifier *_lastLocationSentGroup;	// 288 = 0x120
    PSSpecifier *_mapViewCell;	// 296 = 0x128
    PSSpecifier *_openMessagesButton;	// 304 = 0x130
    PSSpecifier *_triggerAnimationGroup;	// 312 = 0x138
    PSSpecifier *_triggerAnimationViewCell;	// 320 = 0x140
    PSSpecifier *_emergencyContactsGroup;	// 328 = 0x148
    PSSpecifier *_openHealthButton;	// 336 = 0x150
    PSSpecifier *_alarmSoundGroup;	// 344 = 0x158
    PSSpecifier *_alarmSoundSwitch;	// 352 = 0x160
    CoreTelephonyClient *_coreTelephonyClient;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x0000000000008da4
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000008bc0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000008a38
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x00000000000089c8
- (void)OBPrivacySplashControllerDidFinish:(id)arg1;	// IMP=0x00000000000089b4
- (void)openPrivacy:(id)arg1;	// IMP=0x0000000000008894
- (void)openHealthApp:(id)arg1;	// IMP=0x0000000000008810
- (void)openMessages:(id)arg1;	// IMP=0x0000000000008654
- (_Bool)supportsEmergencySOSSelectableNumberOfClicksCapability;	// IMP=0x0000000000008618
- (void)updateAutoCallSpecifierEnabled:(_Bool)arg1;	// IMP=0x00000000000084e4
- (void)showStopSharingConfirmation:(id)arg1;	// IMP=0x00000000000081d4
- (void)setAlsoWorksWithEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000007bfc
- (id)alsoWorksWithEnabled:(id)arg1;	// IMP=0x0000000000007b24
- (void)stopSharingLocation:(id)arg1;	// IMP=0x0000000000007adc
- (void)setEmergencySOSSoundEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000007a80
- (id)emergencySOSSoundEnabled:(id)arg1;	// IMP=0x0000000000007a3c
- (void)setAutoCallEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00000000000079c8
- (id)autoCallEnabled:(id)arg1;	// IMP=0x0000000000007910
- (void)reloadPrivacyFooterWithContacts:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007670
- (void)reloadHealthButtonLabelWithContacts:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007568
- (void)reloadAlarmSoundAnimated:(_Bool)arg1;	// IMP=0x00000000000073a0
- (void)reloadStopSharingGroupAnimated:(_Bool)arg1;	// IMP=0x0000000000006e94
- (id)contactNumberForContactSpecifier:(id)arg1;	// IMP=0x0000000000006e7c
- (void)reloadEmergencyContactsAnimated:(_Bool)arg1;	// IMP=0x00000000000066fc
- (void)initSharingLocationSpecifiers;	// IMP=0x00000000000061c0
- (id)specifiers;	// IMP=0x00000000000055f4
- (void)applicationWillEnterForeground;	// IMP=0x0000000000005528
- (void)handleSosContactsChanged;	// IMP=0x00000000000054bc
- (void)handleSendingLocationChanged;	// IMP=0x0000000000005450
- (void)dealloc;	// IMP=0x00000000000053d8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000051e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

