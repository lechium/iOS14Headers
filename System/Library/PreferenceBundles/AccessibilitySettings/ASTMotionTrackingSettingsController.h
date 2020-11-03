//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASTMotionTrackingSettingsController : AXUISettingsBaseListController <AXUISettingsEditableTableCellWithStepperDelegate>
{
}

- (double)valueForSpecifier:(id)arg1;	// IMP=0x000000000007a168
- (void)specifier:(id)arg1 setValue:(double)arg2;	// IMP=0x0000000000079f68
- (id)unitsStringForSpecifier:(id)arg1;	// IMP=0x0000000000079e4c
- (id)stringValueForSpecifier:(id)arg1;	// IMP=0x0000000000079ddc
- (double)stepValueForSpecifier:(id)arg1;	// IMP=0x0000000000079cd8
- (double)minimumValueForSpecifier:(id)arg1;	// IMP=0x0000000000079ccc
- (double)maximumValueForSpecifier:(id)arg1;	// IMP=0x0000000000079cc0
- (void)setAssistiveTouchMotionTrackerShouldOffsetBufferPoints:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000079c50
- (id)assistiveTouchMotionTrackerShouldOffsetBufferPoints:(id)arg1;	// IMP=0x0000000000079bd8
- (id)specifiers;	// IMP=0x0000000000079924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
