/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBApplicationHosting.h>
#import <libobjc.A.dylib/SBAutoUnlockRule.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehavior.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>
#import <libobjc.A.dylib/SBCoverSheetSlidingViewControllerContentViewController.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBLockScreenBacklightControlling.h>
#import <libobjc.A.dylib/SBLockScreenBehaviorSuppressing.h>
#import <libobjc.A.dylib/SBLockScreenBlockedStateObserving.h>
#import <libobjc.A.dylib/SBLockScreenButtonObserving.h>
#import <libobjc.A.dylib/SBLockScreenCallHandling.h>
#import <libobjc.A.dylib/SBLockScreenContentStateProviding.h>
#import <libobjc.A.dylib/SBLockScreenCustomActionStoring.h>
#import <libobjc.A.dylib/SBLockScreenIdleTimerControlling.h>
#import <libobjc.A.dylib/SBLockScreenLockingAndUnlocking.h>
#import <libobjc.A.dylib/SBLockScreenMediaControlsPresenting.h>
#import <libobjc.A.dylib/SBLockScreenPasscodeViewPresenting.h>
#import <libobjc.A.dylib/SBLockScreenPluginPresenting.h>
#import <libobjc.A.dylib/SBLockScreenProximityBehaviorProviding.h>
#import <libobjc.A.dylib/SBLockScreenStatusBarTransitioning.h>

@protocol SBIdleTimerCoordinating, SBBiometricUnlockBehaviorDelegate;
@class SBFLockScreenActionContext, UIVisualEffectView, SBFLockScreenWakeAnimator, NSString;

@interface SBLockScreenViewControllerBase : UIViewController <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBCoverSheetSlidingViewControllerContentViewController, SBIdleTimerProviding, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning> {

	SBFLockScreenActionContext* _customLockScreenActionContext;
	BOOL _authenticated;
	BOOL _expectsFaceContact;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	double _backlightLevel;
	id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
	UIVisualEffectView* _wakeEffectView;
	SBFLockScreenWakeAnimator* _lockScreenWakeAnimator;

}

@property (assign,nonatomic,__weak) UIVisualEffectView * wakeEffectView;                                                                    //@synthesize wakeEffectView=_wakeEffectView - In the implementation block
@property (nonatomic,readonly) SBFLockScreenWakeAnimator * lockScreenWakeAnimator;                                                          //@synthesize lockScreenWakeAnimator=_lockScreenWakeAnimator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;                                  //@synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate - In the implementation block
@property (nonatomic,readonly) BOOL contentOccludesBackground; 
@property (assign,nonatomic) double backlightLevel;                                                                                         //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (getter=_customLockScreenActionContext,nonatomic,retain) SBFLockScreenActionContext * customLockScreenActionContext; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                                       //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                     //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,getter=isShowingMediaControls,nonatomic) BOOL showingMediaControls; 
@property (nonatomic,readonly) BOOL expectsFaceContact;                                                                                     //@synthesize expectsFaceContact=_expectsFaceContact - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLockStatusBarTime; 
-(void)jiggleLockIcon;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)isAuthenticated;
-(BOOL)handleVolumeDownButtonPress;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3 ;
-(double)backlightLevel;
-(id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleLockButtonPress;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)prepareForUIUnlock;
-(id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1 ;
-(BOOL)isPasscodeLockVisible;
-(BOOL)handleHomeButtonLongPress;
-(void)setBiometricUnlockBehaviorDelegate:(id<SBBiometricUnlockBehaviorDelegate>)arg1 ;
-(BOOL)handleHomeButtonPress;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldAutoUnlockForSource:(int)arg1 ;
-(BOOL)isShowingMediaControls;
-(BOOL)isHostingAnApp;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(BOOL)isMainPageVisible;
-(BOOL)isInScreenOffMode;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(void)updateStatusBarForLockScreenComeback;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)shouldUnlockUIOnKeyDownEvent;
-(void)setBacklightLevel:(double)arg1 ;
-(BOOL)shouldDisableALS;
-(BOOL)suppressesControlCenter;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(id)_customLockScreenActionContext;
-(BOOL)suppressesScreenshots;
-(void)prepareForUILock;
-(void)setCustomLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)noteMenuButtonUp;
-(BOOL)suppressesBanners;
-(BOOL)expectsFaceContact;
-(void)conformsToSBApplicationHosting;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isUnlockDisabled;
-(BOOL)willUIUnlockFromSource:(int)arg1 ;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(void)updateStatusBarForLockScreenTeardown;
-(void)noteResetRestoreStateUpdated;
-(void)noteDeviceBlockedStatusUpdated;
-(id)hostedAppSceneHandles;
-(BOOL)canHostAnApp;
-(id)hostedAppSceneHandle;
-(UIVisualEffectView *)wakeEffectView;
-(BOOL)shouldShowLockStatusBarTime;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)noteMenuButtonDown;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)handleBiometricEvent:(unsigned long long)arg1 ;
-(SBFLockScreenWakeAnimator *)lockScreenWakeAnimator;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)enableLockScreenPluginWithContext:(id)arg1 ;
-(void)launchEmergencyDialer;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1 ;
-(BOOL)contentOccludesBackground;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setWakeEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)isMakingEmergencyCall;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
@end

