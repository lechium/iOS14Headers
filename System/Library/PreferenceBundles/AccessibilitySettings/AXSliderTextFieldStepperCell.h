//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>

@class UISlider;

__attribute__((visibility("hidden")))
@interface AXSliderTextFieldStepperCell : AXUISettingsEditableTableCellWithStepper
{
    UISlider *_slider;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000dfe40
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
- (void)_didUpdateSlider:(id)arg1;	// IMP=0x00000000000dfdd8
- (void)updateWithValue:(double)arg1 shouldUpdateTextField:(_Bool)arg2;	// IMP=0x00000000000dfd28
- (_Bool)shouldResizeTextFieldOnUpdate;	// IMP=0x00000000000dfd20
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000dfb98
- (void)layoutSubviews;	// IMP=0x00000000000df8ac
- (void)initializeView;	// IMP=0x00000000000df77c

@end
