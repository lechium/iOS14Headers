//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPTableViewCell.h>

#import "VMPlayerTimelineSliderDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIProgressView, VMPlayerTimelineSlider;

@interface PHVoicemailGreetingSliderCell : TPTableViewCell <VMPlayerTimelineSliderDelegate>
{
    UIProgressView *_progressView;	// 8 = 0x8
    VMPlayerTimelineSlider *_timelineSlider;	// 16 = 0x10
    NSLayoutConstraint *_progressViewCenterYAnchorConstraint;	// 24 = 0x18
    NSLayoutConstraint *_progressViewHeightAnchorConstraint;	// 32 = 0x20
    NSLayoutConstraint *_progressViewLeadingAnchorConstraint;	// 40 = 0x28
    NSLayoutConstraint *_progressViewTrailingAnchorConstraint;	// 48 = 0x30
    NSLayoutConstraint *_timelineSliderCenterYAnchorConstraint;	// 56 = 0x38
    NSLayoutConstraint *_timelineSliderLeadingAnchorConstraint;	// 64 = 0x40
    NSLayoutConstraint *_timelineSliderTrailingAnchorConstraint;	// 72 = 0x48
}

+ (id)reuseIdentifier;	// IMP=0x00000001000569b8
- (void).cxx_destruct;	// IMP=0x00000001000579dc
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderTrailingAnchorConstraint; // @synthesize timelineSliderTrailingAnchorConstraint=_timelineSliderTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderLeadingAnchorConstraint; // @synthesize timelineSliderLeadingAnchorConstraint=_timelineSliderLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timelineSliderCenterYAnchorConstraint; // @synthesize timelineSliderCenterYAnchorConstraint=_timelineSliderCenterYAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewTrailingAnchorConstraint; // @synthesize progressViewTrailingAnchorConstraint=_progressViewTrailingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewLeadingAnchorConstraint; // @synthesize progressViewLeadingAnchorConstraint=_progressViewLeadingAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewHeightAnchorConstraint; // @synthesize progressViewHeightAnchorConstraint=_progressViewHeightAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *progressViewCenterYAnchorConstraint; // @synthesize progressViewCenterYAnchorConstraint=_progressViewCenterYAnchorConstraint;
@property(readonly, nonatomic) VMPlayerTimelineSlider *timelineSlider; // @synthesize timelineSlider=_timelineSlider;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (double)progressViewHeightAnchorConstraintConstant;	// IMP=0x0000000100057894
- (void)showTimelineSlider;	// IMP=0x00000001000577a0
- (void)showProgressView;	// IMP=0x00000001000576ac
- (void)playerTimelineSlider:(id)arg1 didChangeElapsedTime:(double)arg2;	// IMP=0x0000000100057634
- (void)updateConstraintsConstants;	// IMP=0x00000001000575a4
- (void)unloadConstraints;	// IMP=0x0000000100057404
- (void)loadConstraints;	// IMP=0x0000000100056c9c
- (void)loadContentView;	// IMP=0x0000000100056ad8
- (void)commonInit;	// IMP=0x0000000100056a24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

