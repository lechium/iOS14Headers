//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSDissolveEffectView, BCSImageQuad, UIImageView, UIView, UIVisualEffectView;

@interface BCSScanningAnimator : NSObject
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
    BCSDissolveEffectView *_platterView;	// 16 = 0x10
    UIVisualEffectView *_coverView;	// 24 = 0x18
    UIView *_focusIndicator;	// 32 = 0x20
    BCSImageQuad *_imageQuad;	// 40 = 0x28
    UIImageView *_targetQRImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100006a28
@property(retain, nonatomic) UIImageView *targetQRImage; // @synthesize targetQRImage=_targetQRImage;
@property(retain, nonatomic) BCSImageQuad *imageQuad; // @synthesize imageQuad=_imageQuad;
@property(retain, nonatomic) UIView *focusIndicator; // @synthesize focusIndicator=_focusIndicator;
- (void)reset;	// IMP=0x0000000100006984
- (void)showCoverView;	// IMP=0x0000000100006780
- (void)animatePopWithAppImageBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000065b4
- (void)animatePushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005efc
- (void)_performMeshTransform:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000047fc
- (struct CGPoint)_qrImagePopScaleFactor;	// IMP=0x000000010000479c
- (struct CGRect)_platterInitialFrame;	// IMP=0x0000000100004610
- (struct CGRect)_restRect;	// IMP=0x0000000100004568
- (struct CGPoint)_restPosition;	// IMP=0x00000001000044fc
- (id)_meshTransform:(_Bool)arg1;	// IMP=0x0000000100004280
- (id)_perspectiveCorrectedImage;	// IMP=0x0000000100004278

@end

