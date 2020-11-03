//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h"

@class NSDictionary, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface SCATTapBehaviourController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate>
{
    _Bool _showingPicker;	// 192 = 0xc0
    PSSpecifier *_pickerSpecifier;	// 200 = 0xc8
    PSSpecifier *_pickerGroupSpecifier;	// 208 = 0xd0
    PSSpecifier *_descriptionGroupSpecifier;	// 216 = 0xd8
    NSDictionary *_behaviorFooterTextMap;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000000d310
@property(retain, nonatomic) NSDictionary *behaviorFooterTextMap; // @synthesize behaviorFooterTextMap=_behaviorFooterTextMap;
@property(retain, nonatomic) PSSpecifier *descriptionGroupSpecifier; // @synthesize descriptionGroupSpecifier=_descriptionGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *pickerGroupSpecifier; // @synthesize pickerGroupSpecifier=_pickerGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *pickerSpecifier; // @synthesize pickerSpecifier=_pickerSpecifier;
- (id)stringValueForSpecifier:(id)arg1;	// IMP=0x000000000000d230
- (double)maximumValueForSpecifier:(id)arg1;	// IMP=0x000000000000d220
- (double)minimumValueForSpecifier:(id)arg1;	// IMP=0x000000000000d210
- (double)stepValueForSpecifier:(id)arg1;	// IMP=0x000000000000d204
- (void)specifier:(id)arg1 setValue:(double)arg2;	// IMP=0x000000000000d1ac
- (double)valueForSpecifier:(id)arg1;	// IMP=0x000000000000d150
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000000d034
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000ce98
- (id)specifiers;	// IMP=0x000000000000ca20
- (void)updateFooterTextWithBehavior:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c900
- (void)showPicker:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c788
- (void)selectBehavior:(long long)arg1;	// IMP=0x000000000000c738
- (void)selectSpecifierWithBehavior:(long long)arg1;	// IMP=0x000000000000c554
- (void)willResignActive;	// IMP=0x000000000000c4fc
- (void)willBecomeActive;	// IMP=0x000000000000c4ac
- (void)_updateSpecifierVisibility;	// IMP=0x000000000000c428
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000c3d8
- (id)init;	// IMP=0x000000000000c208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
