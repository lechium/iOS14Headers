//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTLumaDodgePillView, NSString, SBUICallToActionLabel, UILabel;

@interface PBASimpleLockScreenView : UIView
{
    SBUICallToActionLabel *_callToAction;	// 8 = 0x8
    _Bool _showInternalUIWarning;	// 16 = 0x10
    UILabel *_internalUIWarningLabel;	// 24 = 0x18
    MTLumaDodgePillView *_homeAffordance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000b198
@property(nonatomic) _Bool showInternalUIWarning; // @synthesize showInternalUIWarning=_showInternalUIWarning;
- (void)_hideCallToAction;	// IMP=0x000000010000b120
- (void)_showCallToAction;	// IMP=0x000000010000b0b4
- (void)_screenWillUnblank:(id)arg1;	// IMP=0x000000010000b060
- (void)_screenDidBlank:(id)arg1;	// IMP=0x000000010000b00c
- (void)didMoveToWindow;	// IMP=0x000000010000af2c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010000af18
- (void)_layoutInternalUIWarningLabel;	// IMP=0x000000010000ae5c
- (void)_layoutCallToActionLabel;	// IMP=0x000000010000adc0
- (void)_layoutHomeAffordance;	// IMP=0x000000010000ac74
- (void)layoutSubviews;	// IMP=0x000000010000ac30
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010000aa0c
@property(copy, nonatomic) NSString *pressToOpenText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000a7bc

@end
