//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AXForceTouchController : AXUISettingsBaseListController
{
    _Bool _forceTouchSettingsEnabled;	// 192 = 0xc0
    _Bool _shouldIgnoreNextEnabledChangedNotification;	// 193 = 0xc1
    NSArray *_forceTouchSettingItems;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000000486f0
@property(retain, nonatomic) NSArray *forceTouchSettingItems; // @synthesize forceTouchSettingItems=_forceTouchSettingItems;
@property(nonatomic) _Bool shouldIgnoreNextEnabledChangedNotification; // @synthesize shouldIgnoreNextEnabledChangedNotification=_shouldIgnoreNextEnabledChangedNotification;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000485d4
- (id)_previewForConfigurationWithIdentifier:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000000483e0
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000048358
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000482d0
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0000000000048134
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000048030
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000047eac
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000047d8c
- (void)setForceTouchSettingsEnabled:(_Bool)arg1;	// IMP=0x0000000000047ce0
- (id)forceTouchSensitivity:(id)arg1;	// IMP=0x0000000000047cbc
- (void)setForceTouchSensitivity:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000047c74
- (id)forceTouchTiming:(id)arg1;	// IMP=0x0000000000047c40
- (void)setForceTouchTiming:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000047bf8
- (void)setForceTouchEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000047b74
- (id)forceTouchEnabled:(id)arg1;	// IMP=0x0000000000047b40
- (id)_specsForTester:(_Bool)arg1;	// IMP=0x0000000000047968
- (id)_specsForSensitivity;	// IMP=0x0000000000047710
- (id)_specsForLongPressTiming;	// IMP=0x00000000000473cc
- (id)_specsForMasterSwitch;	// IMP=0x00000000000471f4
- (id)specifiers;	// IMP=0x0000000000046ff4
- (_Bool)_deviceHasForcePress3dTouch;	// IMP=0x0000000000046ff0
- (_Bool)_deviceHasLongPress3dTouch;	// IMP=0x0000000000046fec
- (void)dealloc;	// IMP=0x0000000000046f8c
- (id)init;	// IMP=0x0000000000046efc

@end
