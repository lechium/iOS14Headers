//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIColor, _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore18ExpandableTextView : UIView
{
    MISSING_TYPE *textLabel;	// 8 = 0x8
    MISSING_TYPE *moreButton;	// 16 = 0x10
    MISSING_TYPE *hasMoreButton;	// 24 = 0x18
    MISSING_TYPE *alwaysShowsMoreButtonWhenCollapsed;	// 25 = 0x19
    MISSING_TYPE *collapsedNumberOfLines;	// 32 = 0x20
    MISSING_TYPE *isCollapsed;	// 40 = 0x28
    MISSING_TYPE *languageAwareString;	// 48 = 0x30
    MISSING_TYPE *moreTapHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010026d520
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010026d4c4
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTextLabel;
- (void)moreFrom:(id)arg1;	// IMP=0x000000010026d40c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010026d390
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x000000010026d088
- (void)tintColorDidChange;	// IMP=0x000000010026ced4
- (void)layoutSubviews;	// IMP=0x000000010026cea8
@property(nonatomic, retain) UIColor *backgroundColor;
@property(nonatomic) struct CGRect frame;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010026c984

@end
