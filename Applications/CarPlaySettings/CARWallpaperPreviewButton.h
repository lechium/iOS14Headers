//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView, UIVisualEffectView;

@interface CARWallpaperPreviewButton : UIButton
{
    UIView *_platterView;	// 8 = 0x8
    UIVisualEffectView *_darkMaterial;	// 16 = 0x10
    UIVisualEffectView *_lightMaterial;	// 24 = 0x18
    UIView *_focusHighlightView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010001250c
@property(retain, nonatomic) UIView *focusHighlightView; // @synthesize focusHighlightView=_focusHighlightView;
@property(retain, nonatomic) UIVisualEffectView *lightMaterial; // @synthesize lightMaterial=_lightMaterial;
@property(retain, nonatomic) UIVisualEffectView *darkMaterial; // @synthesize darkMaterial=_darkMaterial;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
- (void)_updateMaterialForInterfaceStyle:(long long)arg1;	// IMP=0x000000010001228c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100012208
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100012178
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000120f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100011370

@end
