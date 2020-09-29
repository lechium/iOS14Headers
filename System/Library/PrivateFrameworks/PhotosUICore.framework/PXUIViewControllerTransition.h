/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, UIPercentDrivenInteractiveTransition, PXRegionOfInterest, NSString;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController* _internalMasterViewController;
	UIViewController* _internalDetailViewController;
	/*^block*/id _transitionAnimationStartHandler;
	/*^block*/id _transitionAnimationCompletionHandler;
	BOOL _supportsEdgeSwipeBackGesture;
	BOOL _interactive;
	BOOL _transitioningToDetail;
	UIPercentDrivenInteractiveTransition* _interactionController;
	long long _state;
	id __pauseToken;
	PXRegionOfInterest* _masterRegionOfInterest;

}

@property (assign,nonatomic) long long state;                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long transitionIdentifier; 
@property (setter=_setPauseToken:,nonatomic,retain) id _pauseToken;                                       //@synthesize _pauseToken=__pauseToken - In the implementation block
@property (nonatomic,readonly) BOOL supportsEdgeSwipeBackGesture;                                         //@synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;                                     //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,retain) PXRegionOfInterest * masterRegionOfInterest;                                 //@synthesize masterRegionOfInterest=_masterRegionOfInterest - In the implementation block
@property (assign,getter=isTransitioningToDetail,nonatomic) BOOL transitioningToDetail;                   //@synthesize transitioningToDetail=_transitioningToDetail - In the implementation block
@property (nonatomic,readonly) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * masterViewController; 
@property (nonatomic,__weak,readonly) UIViewController * detailViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(UIViewController *)masterViewController;
-(UIViewController *)detailViewController;
-(void)willStartTransition;
-(BOOL)isInteractive;
-(void)setState:(long long)arg1 ;
-(long long)transitionIdentifier;
-(id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)installTransitionAnimationStartHandler:(/*^block*/id)arg1 ;
-(void)installTransitionAnimationCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setPauseToken:(id)arg1 ;
-(void)setMasterRegionOfInterest:(PXRegionOfInterest *)arg1 ;
-(void)setTransitioningToDetail:(BOOL)arg1 ;
-(id)init;
-(void)didEndTransition;
-(id)_pauseToken;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)willEndTransition;
-(BOOL)isTransitioningToDetail;
-(PXRegionOfInterest *)masterRegionOfInterest;
-(BOOL)supportsEdgeSwipeBackGesture;
-(long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(long long)state;
-(double)transitionDuration:(id)arg1 ;
@end
