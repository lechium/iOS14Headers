//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h"

@class NSArray, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface AXKeyRepeatController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate>
{
    PSSpecifier *_keyRepeatIntervalSpecifier;	// 192 = 0xc0
    PSSpecifier *_keyRepeatDelaySpecifier;	// 200 = 0xc8
    NSArray *_keyRepeatSpecificSpecifiers;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000011446c
@property(retain, nonatomic) NSArray *keyRepeatSpecificSpecifiers; // @synthesize keyRepeatSpecificSpecifiers=_keyRepeatSpecificSpecifiers;
@property(retain, nonatomic) PSSpecifier *keyRepeatDelaySpecifier; // @synthesize keyRepeatDelaySpecifier=_keyRepeatDelaySpecifier;
@property(retain, nonatomic) PSSpecifier *keyRepeatIntervalSpecifier; // @synthesize keyRepeatIntervalSpecifier=_keyRepeatIntervalSpecifier;
- (id)stringValueForSpecifier:(id)arg1;	// IMP=0x0000000000114394
- (double)maximumValueForSpecifier:(id)arg1;	// IMP=0x00000000001142b0
- (double)minimumValueForSpecifier:(id)arg1;	// IMP=0x00000000001141b4
- (double)stepValueForSpecifier:(id)arg1;	// IMP=0x00000000001141a8
- (void)specifier:(id)arg1 setValue:(double)arg2;	// IMP=0x00000000001140d0
- (double)valueForSpecifier:(id)arg1;	// IMP=0x0000000000113ff4
- (id)keyRepeatEnabled:(id)arg1;	// IMP=0x0000000000113fc0
- (void)setKeyRepeatEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000113d1c
- (id)specifiers;	// IMP=0x000000000011398c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

