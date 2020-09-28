//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HomePodUpdateBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface HomePodUpdateViewController : HomePodUpdateBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100036118
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x0000000100036080
- (void)handleDismissButton:(id)arg1;	// IMP=0x0000000100035fe8
- (void)handleCheckForUpdateButton:(id)arg1;	// IMP=0x0000000100035f4c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100035ec0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100035e28
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100035ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
