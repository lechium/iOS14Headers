/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUViewControllerTransition.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {

	long long __operation;

}

@property (assign,setter=_setOperation:,nonatomic) long long _operation;              //@synthesize _operation=__operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_operation;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)transitionWillPresentInteractively:(BOOL)arg1 ;
-(void)transitionWillDismissInteractively:(BOOL)arg1 ;
-(void)completeInteractivePresentTransitionFinished:(BOOL)arg1 ;
-(void)completeInteractiveDismissTransitionFinished:(BOOL)arg1 ;
-(void)imageModulationIntensityDidChange;
-(void)_setOperation:(long long)arg1 ;
-(void)finishInteractiveTransition;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentingViewController;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
@end

