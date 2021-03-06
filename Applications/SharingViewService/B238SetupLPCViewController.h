//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class UIButton, UILabel, _TtC18SharingViewService26SVSHomePodIDViewController, _TtC18SharingViewService37SVSLPCActivityIndicatorViewController;

@interface B238SetupLPCViewController : B238SetupBaseViewController
{
    _TtC18SharingViewService37SVSLPCActivityIndicatorViewController *_activityView;	// 32 = 0x20
    UILabel *_instructionsLabel;	// 40 = 0x28
    UIButton *_dismissButton;	// 48 = 0x30
    UIButton *_manuallyButton;	// 56 = 0x38
    _TtC18SharingViewService26SVSHomePodIDViewController *_scannerVC;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002a43c
@property(retain, nonatomic) _TtC18SharingViewService26SVSHomePodIDViewController *scannerVC; // @synthesize scannerVC=_scannerVC;
- (void)releaseCameraActivityAttribution;	// IMP=0x000000010002a3ec
- (void)takeCameraActivityAttribution;	// IMP=0x000000010002a3bc
- (void)handleDismissButton:(id)arg1;	// IMP=0x000000010002a31c
- (void)enterManuallyPressed:(id)arg1;	// IMP=0x000000010002a238
- (void)resetState;	// IMP=0x000000010002a070
- (void)setupScannerVC;	// IMP=0x0000000100029adc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100029a44
- (void)viewDidLoad;	// IMP=0x00000001000294e0

@end

