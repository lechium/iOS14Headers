//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CADisplayLink, CAMediaTimingFunction, SKUIItemOfferButton, UIImageView;

@interface DSDownloadProgressButton : UIControl
{
    UIImageView *_addToLibraryOrDownloadImageView;	// 8 = 0x8
    double _currentAnimatedProgress;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    UIImageView *_finishedImageView;	// 32 = 0x20
    double _initialAnimatedProgress;	// 40 = 0x28
    _Bool _isAnimatingProgress;	// 48 = 0x30
    SKUIItemOfferButton *_itemOfferButton;	// 56 = 0x38
    struct CGSize _lastLayoutSize;	// 64 = 0x40
    double _progressAnimationEndTime;	// 80 = 0x50
    double _progressAnimationStartTime;	// 88 = 0x58
    CAMediaTimingFunction *_progressAnimationTimingFunction;	// 96 = 0x60
    long long _progressType;	// 104 = 0x68
    double _progress;	// 112 = 0x70
    long long _style;	// 120 = 0x78
}

+ (id)_finishedImageForLayoutSize:(struct CGSize)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000008520
- (void).cxx_destruct;	// IMP=0x0000000000009120
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long progressType; // @synthesize progressType=_progressType;
- (_Bool)_usesDrawingForProgressType:(long long)arg1;	// IMP=0x00000000000090c8
- (void)_stopProgressAnimation;	// IMP=0x000000000000903c
- (void)_reloadForCurrentStateForInitialSetup:(_Bool)arg1 previousProgressType:(long long)arg2;	// IMP=0x00000000000087ac
- (_Bool)_needsFinishedImageViewForProgressType:(long long)arg1;	// IMP=0x0000000000008764
- (_Bool)_needsAddToLibraryOrDownloadImageViewForProgressType:(long long)arg1;	// IMP=0x000000000000870c
- (id)_addToLibraryOrDownloadImage;	// IMP=0x00000000000085fc
- (void)_handleDisplayLinkDidFire:(id)arg1;	// IMP=0x0000000000008420
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000815c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000008050
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000007fe8
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000007f04
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000007e9c
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000007db8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000007cb4
- (void)tintColorDidChange;	// IMP=0x0000000000007c44
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000007c04
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000007ae0
- (void)layoutSubviews;	// IMP=0x000000000000777c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000072a4
- (void)dealloc;	// IMP=0x0000000000007238
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000007170
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000007160

@end

