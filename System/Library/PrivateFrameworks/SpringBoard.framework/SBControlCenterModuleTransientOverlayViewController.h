/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/CCUIModuleAlertViewControllerDelegate.h>

@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;
@class CCUIModuleAlertViewController, CCSModulePresentationOptions, NSString;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate> {

	CCUIModuleAlertViewController* _moduleOverlayViewController;
	id<SBControlCenterModuleTransientOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) CCSModulePresentationOptions * presentationOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredInterfaceOrientationForPresentation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)handleHomeButtonPress;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_shouldBlurBackground;
-(void)_dismiss;
-(id)init;
-(void)setDelegate:(id<SBControlCenterModuleTransientOverlayViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldDisableControlCenter;
-(id<SBControlCenterModuleTransientOverlayViewControllerDelegate>)delegate;
-(CCSModulePresentationOptions *)presentationOptions;
-(BOOL)_canShowWhileLocked;
-(void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2 ;
-(long long)preferredUnlockedGestureDismissalStyle;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(BOOL)shouldDisableOrientationUpdates;
-(void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(BOOL)arg4 otherAnimations:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
@end

