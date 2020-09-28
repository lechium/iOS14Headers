/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBVoiceControlViewControllerDelegate.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>

@protocol SBVoiceControlTransientOverlayViewControllerDelegate;
@class _UIBackdropView, SBVoiceControlViewController, NSArray, NSString;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding> {

	_UIBackdropView* _backdropView;
	SBVoiceControlViewController* _contentViewController;
	id<SBVoiceControlTransientOverlayViewControllerDelegate> _voiceControlDelegate;

}

@property (nonatomic,copy) NSArray * nextRecognitionAudioInputPaths; 
@property (assign,nonatomic) BOOL shouldAllowSensitiveActions; 
@property (assign,nonatomic) BOOL shouldDisableHandlerActions; 
@property (assign,nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests; 
@property (assign,getter=isVoiceControlLoggingEnabled,nonatomic) BOOL voiceControlLoggingEnabled; 
@property (assign,nonatomic,__weak) id<SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;              //@synthesize voiceControlDelegate=_voiceControlDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(long long)preferredWhitePointAdaptivityStyle;
-(long long)preferredStatusBarStyle;
-(BOOL)becomeFirstResponder;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)canResignFirstResponder;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)resignFirstResponder;
-(BOOL)handleHomeButtonPress;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(void)conformsToCSBehaviorProviding;
-(long long)idleWarnMode;
-(void)viewDidLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)restrictedCapabilities;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)scrollingStrategy;
-(long long)notificationBehavior;
-(void)dealloc;
-(long long)participantState;
-(void)viewDidAppear:(BOOL)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)viewDidLoad;
-(void)conformsToCSExternalBehaviorProviding;
-(long long)proximityDetectionMode;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSString *)coverSheetIdentifier;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)initWithSource:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)endIgnoringAppearanceUpdates;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)prefersProximityDetectionEnabled;
-(void)resetSessionWithSource:(id)arg1 ;
-(void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)arg1 ;
-(void)setNextRecognitionAudioInputPaths:(NSArray *)arg1 ;
-(void)setVoiceControlDelegate:(id<SBVoiceControlTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)isVoiceControlLoggingEnabled;
-(void)setVoiceControlLoggingEnabled:(BOOL)arg1 ;
-(void)setShouldDisableHandlerActions:(BOOL)arg1 ;
-(void)setShouldDisableVoiceControlForBluetoothRequests:(BOOL)arg1 ;
-(void)setShouldAllowSensitiveActions:(BOOL)arg1 ;
-(NSArray *)nextRecognitionAudioInputPaths;
-(BOOL)shouldAllowSensitiveActions;
-(BOOL)shouldDisableHandlerActions;
-(BOOL)shouldDisableVoiceControlForBluetoothRequests;
-(void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)arg1 ;
-(void)voiceControlViewControllerRequestsDismissal:(id)arg1 ;
-(id<SBVoiceControlTransientOverlayViewControllerDelegate>)voiceControlDelegate;
@end
