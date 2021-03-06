//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SVSTopDismissAnimator;

@interface SVSTopAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    SVSTopDismissAnimator *_dismissAnimator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008193c
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100081930
- (void)animateTransition:(id)arg1;	// IMP=0x000000010008171c
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000001000816a8
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000100081664
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000100081660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

