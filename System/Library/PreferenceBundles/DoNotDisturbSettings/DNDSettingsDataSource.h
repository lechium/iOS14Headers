//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifierDataSource.h>

#import "DNDAllowedCallsListDataSource-Protocol.h"
#import "DNDScheduleDateRangeDataSource-Protocol.h"
#import "DNDScheduleDateRangeUpdateDelegate-Protocol.h"
#import "DNDSettingsAllowedCallsListControllerDelegate-Protocol.h"
#import "DNDSettingsUpdateListener-Protocol.h"
#import "DNDSpecifierDataSource-Protocol.h"
#import "DNDStateUpdateListener-Protocol.h"
#import "PSListControllerTestableSpecifiers-Protocol.h"
#import "PSTimeRangeCellDelegate-Protocol.h"

@class CNContactStore, DNDBehaviorSettings, DNDBypassSettings, DNDModeAssertionService, DNDScheduleSettings, DNDScheduleTimePeriod, DNDSettingsService, DNDState, DNDStateService, NSString, PSSpecifier;

@interface DNDSettingsDataSource : PSSpecifierDataSource <PSListControllerTestableSpecifiers, PSTimeRangeCellDelegate, DNDStateUpdateListener, DNDSettingsUpdateListener, DNDSpecifierDataSource, DNDAllowedCallsListDataSource, DNDSettingsAllowedCallsListControllerDelegate, DNDScheduleDateRangeDataSource, DNDScheduleDateRangeUpdateDelegate>
{
    DNDStateService *_stateService;	// 8 = 0x8
    DNDModeAssertionService *_assertionService;	// 16 = 0x10
    DNDSettingsService *_settingsService;	// 24 = 0x18
    CNContactStore *_contactStore;	// 32 = 0x20
    DNDState *_currentState;	// 40 = 0x28
    DNDScheduleSettings *_currentScheduleSettings;	// 48 = 0x30
    DNDBehaviorSettings *_currentBehaviorSettings;	// 56 = 0x38
    PSSpecifier *_manualEnabledSpecifier;	// 64 = 0x40
    PSSpecifier *_scheduleRangeGroupSpecifier;	// 72 = 0x48
    PSSpecifier *_scheduleEnabledSpecifier;	// 80 = 0x50
    PSSpecifier *_bedtimeModeEnabledSpecifier;	// 88 = 0x58
    PSSpecifier *_silenceBehaviorGroupSpecifier;	// 96 = 0x60
    PSSpecifier *_alwaysSilenceBehaviorSpecifier;	// 104 = 0x68
    PSSpecifier *_silenceWhileLockedBehaviorSpecifier;	// 112 = 0x70
    PSSpecifier *_allowCallsFromGroupSpecifier;	// 120 = 0x78
    PSSpecifier *_allowCallsFromSpecifier;	// 128 = 0x80
    PSSpecifier *_repeatedCallsSpecifier;	// 136 = 0x88
    PSSpecifier *_scheduleRangeSpecifier;	// 144 = 0x90
    DNDBypassSettings *_currentPhoneCallBypassSettings;	// 152 = 0x98
}

+ (id)booleanCapabilitiesToTest;	// IMP=0x0000000000002c44
+ (void)initialize;	// IMP=0x0000000000001ec4
- (void).cxx_destruct;	// IMP=0x00000000000051a8
@property(readonly, copy, nonatomic) DNDBypassSettings *currentPhoneCallBypassSettings; // @synthesize currentPhoneCallBypassSettings=_currentPhoneCallBypassSettings;
@property(readonly, nonatomic) PSSpecifier *scheduleRangeSpecifier; // @synthesize scheduleRangeSpecifier=_scheduleRangeSpecifier;
- (void)_setRepeatedCallsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000004ff4
- (id)_repeatedCallsEnabled:(id)arg1;	// IMP=0x0000000000004fac
- (id)_allowedGroupsFooterText;	// IMP=0x0000000000004c88
- (id)_allowedDisruptionsGroup:(id)arg1;	// IMP=0x00000000000049cc
- (unsigned long long)_currentPhoneCallBypassEventSourceType;	// IMP=0x0000000000004954
- (void)_setInterruptionBehaviorSettingForSpecifier:(id)arg1;	// IMP=0x00000000000047dc
- (void)_setBedtimeModeEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000004648
- (id)_bedtimeModeEnabled:(id)arg1;	// IMP=0x0000000000004600
- (void)_setScheduledModeEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000446c
- (id)_scheduledModeEnabled:(id)arg1;	// IMP=0x0000000000004424
- (void)_setDoNotDisturbEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000040f0
- (id)_doNotDisturbEnabled:(id)arg1;	// IMP=0x00000000000040a8
- (void)_handleUpdatedPhoneCallBypassSettings:(id)arg1 updates:(id)arg2;	// IMP=0x0000000000003e38
- (void)_handleUpdatedBehaviorSettings:(id)arg1 updates:(id)arg2;	// IMP=0x0000000000003bf8
- (void)_handleUpdatedScheduleSettings:(id)arg1 updates:(id)arg2;	// IMP=0x00000000000037bc
- (void)_handleUpdatedState:(id)arg1 updates:(id)arg2;	// IMP=0x0000000000003710
- (void)didUpdateScheduleTimePeriod:(id)arg1;	// IMP=0x0000000000003594
@property(readonly, copy, nonatomic) DNDScheduleTimePeriod *currentScheduleTimePeriod; // @dynamic currentScheduleTimePeriod;
- (void)allowedCallsListController:(id)arg1 didChangeEventSourceType:(unsigned long long)arg2 contactGroupIdentifier:(id)arg3;	// IMP=0x00000000000033e0
- (id)availableBypassContactGroups;	// IMP=0x00000000000033c0
- (void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;	// IMP=0x00000000000032a8
- (void)settingsService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;	// IMP=0x0000000000003190
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;	// IMP=0x0000000000003078
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;	// IMP=0x0000000000002eb4
- (id)toDetailForCell:(id)arg1;	// IMP=0x0000000000002d80
- (id)fromDetailForCell:(id)arg1;	// IMP=0x0000000000002c4c
- (void)loadSpecifiers;	// IMP=0x00000000000020c4
- (id)init;	// IMP=0x0000000000001f54
- (void)_specifier:(id)arg1 withFooterTextForAutoreplyAudience:(unsigned long long)arg2;	// IMP=0x0000000000008aec
- (void)handleAutoReplyMessageChanged:(id)arg1;	// IMP=0x0000000000008a84
- (id)autoreplyMessage;	// IMP=0x00000000000088d8
- (id)autoReplyAudienceForSpecifier:(id)arg1;	// IMP=0x0000000000008780
- (void)setAutoReplyAudience:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000008668
- (id)driverModeAutoEnabled;	// IMP=0x00000000000084d0
- (void)setDriverModeAutoEnabled:(id)arg1;	// IMP=0x00000000000083cc
- (_Bool)supportsDriverMode;	// IMP=0x0000000000008380
- (void)driverModeLearnMoreDismissed:(id)arg1;	// IMP=0x00000000000082fc
- (void)tappedDriverModeLearnMore:(id)arg1;	// IMP=0x00000000000081bc
- (id)loadDNDWDSpecifiers;	// IMP=0x0000000000006c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

