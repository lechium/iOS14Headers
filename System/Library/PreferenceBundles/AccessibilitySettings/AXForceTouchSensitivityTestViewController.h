//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface AXForceTouchSensitivityTestViewController : UIViewController
{
    UIImageView *_messageImageView;	// 8 = 0x8
    UIButton *_doneButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f8428
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIImageView *messageImageView; // @synthesize messageImageView=_messageImageView;
- (void)doneButtonTapped;	// IMP=0x00000000000f8380
- (void)animateDoneButtonSlideIn;	// IMP=0x00000000000f81a8
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000f7f7c
- (void)loadView;	// IMP=0x00000000000f7bc8
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000000f7bc0

@end

