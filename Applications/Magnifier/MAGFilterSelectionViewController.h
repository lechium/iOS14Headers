//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MAGFilterSelectionControlPanelDelegate-Protocol.h"
#import "MAGFilterSelectionPreviewDelegate-Protocol.h"

@class CALayer, MAGFilterSelectionControlPanel, MAGFilterSelectionPreviewView, NSArray, NSString;
@protocol MAGFilterSelectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MAGFilterSelectionViewController : UIViewController <MAGFilterSelectionPreviewDelegate, MAGFilterSelectionControlPanelDelegate>
{
    _Bool _imageLayerRequiresOrientationCompensation;	// 8 = 0x8
    id <MAGFilterSelectionViewControllerDelegate> _delegate;	// 16 = 0x10
    CALayer *_imageLayer;	// 24 = 0x18
    MAGFilterSelectionPreviewView *_previewView;	// 32 = 0x20
    MAGFilterSelectionControlPanel *_controlPanel;	// 40 = 0x28
    NSArray *_normalLayoutConstraints;	// 48 = 0x30
    NSArray *_transitioningLayoutConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000277d4
@property(retain, nonatomic) NSArray *transitioningLayoutConstraints; // @synthesize transitioningLayoutConstraints=_transitioningLayoutConstraints;
@property(retain, nonatomic) NSArray *normalLayoutConstraints; // @synthesize normalLayoutConstraints=_normalLayoutConstraints;
@property(nonatomic) _Bool imageLayerRequiresOrientationCompensation; // @synthesize imageLayerRequiresOrientationCompensation=_imageLayerRequiresOrientationCompensation;
@property(retain, nonatomic) MAGFilterSelectionControlPanel *controlPanel; // @synthesize controlPanel=_controlPanel;
@property(retain, nonatomic) MAGFilterSelectionPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) __weak id <MAGFilterSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contrastSliderForUnitTesting;	// IMP=0x0000000100027678
- (id)brightnessSliderForUnitTesting;	// IMP=0x0000000100027624
- (id)invertButtonForUnitTesting;	// IMP=0x00000001000275d0
- (void)updateBrightnessAndContrastForAmbientLightChange;	// IMP=0x00000001000274c0
- (_Bool)accessibilityPerformEscape;	// IMP=0x0000000100027470
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100027468
- (double)contrastValueFromSliderValue:(double)arg1;	// IMP=0x0000000100027444
- (double)sliderValueFromContrastValue:(double)arg1;	// IMP=0x0000000100027418
- (double)brightnessValueFromSliderValue:(double)arg1;	// IMP=0x000000010002740c
- (double)sliderValueFromBrightnessValue:(double)arg1;	// IMP=0x0000000100027400
- (void)brightnessSliderDraggedToValue:(double)arg1 forControlPanel:(id)arg2;	// IMP=0x000000010002739c
- (void)contrastSliderDraggedToValue:(double)arg1 forControlPanel:(id)arg2;	// IMP=0x0000000100027338
- (void)filtersButtonTappedForControlPanel:(id)arg1;	// IMP=0x00000001000272bc
- (void)invertButtonTappedForControlPanel:(id)arg1;	// IMP=0x00000001000271cc
- (_Bool)imageLayerForPreviewRequiresOrientationCompensation:(id)arg1;	// IMP=0x00000001000271c0
- (void)userDidScrollToFilterSet:(id)arg1 inPreview:(id)arg2;	// IMP=0x0000000100027090
- (void)compensateForCurrentInterfaceOrientation;	// IMP=0x0000000100026fcc
- (void)positionSelectedFilterSetAnimated:(_Bool)arg1;	// IMP=0x0000000100026f2c
- (void)dialChangedToFilterSet:(id)arg1 forControlPanel:(id)arg2;	// IMP=0x0000000100026e38
- (void)resumeFromTransitionWithRootVCAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026aec
- (void)prepForTransitionWithRootVCWithControlPanelFrame:(struct CGRect)arg1 filtersButtonFrameInControlPanel:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000264b8
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000264b0
- (void)loadView;	// IMP=0x0000000100025d80
- (long long)modalPresentationStyle;	// IMP=0x0000000100025d78
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100025b5c
- (void)connectImageLayer;	// IMP=0x0000000100025adc
- (id)initWithImageLayer:(id)arg1 imageLayerRequiresOrientationCompensation:(_Bool)arg2;	// IMP=0x0000000100025a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

