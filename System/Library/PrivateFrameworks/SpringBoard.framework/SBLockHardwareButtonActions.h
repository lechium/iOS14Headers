/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBApplication, SBProximitySensorManager, SBHardwareButtonService, SBWalletPreArmController, SOSManager, SBHardwareButtonGestureParameters, SBSiriHardwareButtonInteraction, SBAccessibilityHardwareButtonInteraction, SBSleepWakeHardwareButtonInteraction, NSString;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {

	long long _homeButtonType;
	SBApplication* _lastLockButtonEventRecipient;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	SBWalletPreArmController* _walletPreArmController;
	SOSManager* _sosManager;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	SBHardwareButtonGestureParameters* _proximitySensorGestureParameters;
	long long _sosTriggerMechanism;
	BOOL _isButtonDown;
	SBSiriHardwareButtonInteraction* _siriButtonInteraction;
	SBAccessibilityHardwareButtonInteraction* _accessibilityButtonInteraction;
	SBSleepWakeHardwareButtonInteraction* _sleepWakeButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _proximitySensorButtonInteraction;

}

@property (nonatomic,retain) SBSiriHardwareButtonInteraction * siriButtonInteraction;                                                                  //@synthesize siriButtonInteraction=_siriButtonInteraction - In the implementation block
@property (nonatomic,retain) SBAccessibilityHardwareButtonInteraction * accessibilityButtonInteraction;                                                //@synthesize accessibilityButtonInteraction=_accessibilityButtonInteraction - In the implementation block
@property (nonatomic,retain) SBSleepWakeHardwareButtonInteraction * sleepWakeButtonInteraction;                                                        //@synthesize sleepWakeButtonInteraction=_sleepWakeButtonInteraction - In the implementation block
@property (nonatomic,retain) id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;              //@synthesize proximitySensorButtonInteraction=_proximitySensorButtonInteraction - In the implementation block
@property (nonatomic,readonly) BOOL isButtonDown;                                                                                                      //@synthesize isButtonDown=_isButtonDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isButtonDown;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(void)_sendButtonEventToApp:(id)arg1 down:(BOOL)arg2 ;
-(id)initWithHomeButtonType:(long long)arg1 proximitySensorManager:(id)arg2 ;
-(BOOL)reverseFadeOutIfNeeded;
-(BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
-(void)setSiriButtonInteraction:(SBSiriHardwareButtonInteraction *)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(void)_showPowerDownTransientOverlayOnForceReset;
-(BOOL)_shouldWaitForDoublePress;
-(void)_performSOSDidTriggerActions;
-(void)setSleepWakeButtonInteraction:(SBSleepWakeHardwareButtonInteraction *)arg1 ;
-(void)performSinglePressDidFailActions;
-(void)performSOSGestureBeganActions;
-(void)performLongPressActions;
-(void)performSecondButtonDownActions;
-(BOOL)performButtonUpPreActions;
-(void)performSinglePressAction;
-(void)performDoublePressActions;
-(void)_registeredLockButtonAppsDidChange:(id)arg1 ;
-(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)proximitySensorButtonInteraction;
-(void)performInitialButtonDownActions;
-(BOOL)_sendButtonDownToRegisteredApp;
-(void)setAccessibilityButtonInteraction:(SBAccessibilityHardwareButtonInteraction *)arg1 ;
-(void)performFinalButtonUpActions;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(BOOL)_sendButtonUpToRegisteredApp;
-(id)hardwareButtonGestureParameters;
-(BOOL)_isSOSActive;
-(SBSleepWakeHardwareButtonInteraction *)sleepWakeButtonInteraction;
-(SBAccessibilityHardwareButtonInteraction *)accessibilityButtonInteraction;
-(void)performLongPressCancelledActions;
-(void)performSOSActionsWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_foregroundAppRegisteredForLockButtonEvents;
-(SBSiriHardwareButtonInteraction *)siriButtonInteraction;
-(void)performForceResetSequenceBeganActions;
-(void)performSOSGestureEndedActions;
-(void)setProximitySensorButtonInteraction:(id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider>)arg1 ;
-(void)performTriplePressActions;
-(void)performInitialButtonUpActions;
@end
