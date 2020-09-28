/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPolicyAggregator.h>

@class MCProfileConnection, SBSetupManager, SBAlertItemsController, SBApplicationController, SBAssistantController, SBCommandTabController, SBConferenceManager, SBRemoteTransientOverlaySessionManager, SBLockScreenManager, SBLockStateAggregator, SBTelephonyManager, SBMainWorkspace, SBBannerManager, SBLocalDefaults;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator {

	MCProfileConnection* _override_profileConnection;
	SBSetupManager* _override_setupManager;
	SBAlertItemsController* _override_alertItemsController;
	SBApplicationController* _override_applicationController;
	SBAssistantController* _override_assistantController;
	SBCommandTabController* _override_commandTabController;
	SBConferenceManager* _override_conferenceManager;
	SBRemoteTransientOverlaySessionManager* _override_remoteTransientOverlaySessionManager;
	SBLockScreenManager* _override_lockScreenManager;
	SBLockStateAggregator* _override_lockStateAggregator;
	SBTelephonyManager* _override_telephonyManager;
	SBMainWorkspace* _override_mainWorkspace;
	SBBannerManager* _override_bannerManager;
	CFBooleanRef _hasCameraCapability;
	SBLocalDefaults* _defaults;
	BOOL _storeDemoAppLockEnabled;

}

@property (setter=_setProfileConnection:,getter=_profileConnection,nonatomic,retain) MCProfileConnection * profileConnection;                                                                                          //@synthesize override_profileConnection=_override_profileConnection - In the implementation block
@property (setter=_setSetupManager:,getter=_setupManager,nonatomic,retain) SBSetupManager * setupManager;                                                                                                              //@synthesize override_setupManager=_override_setupManager - In the implementation block
@property (setter=_setAlertItemsController:,getter=_alertItemsController,nonatomic,retain) SBAlertItemsController * alertItemsController;                                                                              //@synthesize override_alertItemsController=_override_alertItemsController - In the implementation block
@property (setter=_setApplicationController:,getter=_applicationController,nonatomic,retain) SBApplicationController * applicationController;                                                                          //@synthesize override_applicationController=_override_applicationController - In the implementation block
@property (setter=_setAssistantController:,getter=_assistantController,nonatomic,retain) SBAssistantController * assistantController;                                                                                  //@synthesize override_assistantController=_override_assistantController - In the implementation block
@property (setter=_setCommandTabController:,getter=_commandTabController,nonatomic,retain) SBCommandTabController * commandTabController;                                                                              //@synthesize override_commandTabController=_override_commandTabController - In the implementation block
@property (setter=_setConferenceManager:,getter=_conferenceManager,nonatomic,retain) SBConferenceManager * conferenceManager;                                                                                          //@synthesize override_conferenceManager=_override_conferenceManager - In the implementation block
@property (setter=_setRemoteTransientOverlaySessionManager:,getter=_remoteTransientOverlaySessionManager,nonatomic,retain) SBRemoteTransientOverlaySessionManager * remoteTransientOverlaySessionManager;              //@synthesize override_remoteTransientOverlaySessionManager=_override_remoteTransientOverlaySessionManager - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                                                                                          //@synthesize override_lockScreenManager=_override_lockScreenManager - In the implementation block
@property (setter=_setLockStateAggregator:,getter=_lockStateAggregator,nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                                                                  //@synthesize override_lockStateAggregator=_override_lockStateAggregator - In the implementation block
@property (setter=_setTelephonyManager:,getter=_telephonyManager,nonatomic,retain) SBTelephonyManager * telephonyManager;                                                                                              //@synthesize override_telephonyManager=_override_telephonyManager - In the implementation block
@property (setter=_setMainWorkspace:,getter=_mainWorkspace,nonatomic,retain) SBMainWorkspace * mainWorkspace;                                                                                                          //@synthesize override_mainWorkspace=_override_mainWorkspace - In the implementation block
@property (setter=_setBannerManager:,getter=_bannerManager,nonatomic,retain) SBBannerManager * bannerManager;                                                                                                          //@synthesize override_bannerManager=_override_bannerManager - In the implementation block
-(BOOL)_allowsCapabilitySpotlightWithExplanation:(id*)arg1 ;
-(id)_profileConnection;
-(id)_mainWorkspace;
-(id)_applicationController;
-(BOOL)_allowsCapabilityLockScreenBulletinWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityLockScreenCameraWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityControlCenterWithExplanation:(id*)arg1 ;
-(BOOL)allowsCapability:(long long)arg1 explanation:(id*)arg2 ;
-(BOOL)_allowsCapabilityVoiceControlWithExplanation:(id*)arg1 ;
-(id)_telephonyManager;
-(BOOL)_allowsCapabilityLiftToWakeWithExplanation:(id*)arg1 ;
-(id)_alertItemsController;
-(void)_setLockScreenManager:(id)arg1 ;
-(void)_setBannerManager:(id)arg1 ;
-(BOOL)_allowsCapabilityTodayViewWithExplanation:(id*)arg1 ;
-(BOOL)_allowsNotificationOrControlCenterWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityQuickNoteWithExplanation:(id*)arg1 ;
-(void)reloadDemoDefaults;
-(BOOL)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityLogoutWithExplanation:(id*)arg1 ;
-(void)_setProfileConnection:(id)arg1 ;
-(BOOL)_allowsCapabilityScreenshotWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilitySuggestedApplicationWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityDismissCoverSheetWithExplanation:(id*)arg1 ;
-(void)_setMainWorkspace:(id)arg1 ;
-(BOOL)_hasFullySetUpUserWithExplanation:(id*)arg1 ;
-(void)_setSetupManager:(id)arg1 ;
-(id)_initWithDefaults:(id)arg1 ;
-(BOOL)allowsCapability:(long long)arg1 ;
-(BOOL)_allowsCapabilityLockScreenControlCenterWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id*)arg1 ;
-(id)init;
-(BOOL)_allowsCapabilityLoginWindowWithExplanation:(id*)arg1 ;
-(id)_conferenceManager;
-(id)_assistantController;
-(void)_setConferenceManager:(id)arg1 ;
-(id)_commandTabController;
-(void)_setTelephonyManager:(id)arg1 ;
-(BOOL)_dictationInfoOnScreen;
-(id)_lockStateAggregator;
-(void)_setAlertItemsController:(id)arg1 ;
-(BOOL)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id*)arg1 ;
-(id)_setupManager;
-(BOOL)_allowsCapabilityLockScreenTodayViewWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityHomeScreenEditingWithExplanation:(id*)arg1 ;
-(void)_setApplicationController:(id)arg1 ;
-(void)_setCommandTabController:(id)arg1 ;
-(BOOL)_allowsCapabilitySystemGestureWithExplanation:(id*)arg1 ;
-(void)_setAssistantController:(id)arg1 ;
-(id)_remoteTransientOverlaySessionManager;
-(BOOL)_allowsCapabilityAssistantEnabledWithExplanation:(id*)arg1 ;
-(BOOL)allowsTransitionRequest:(id)arg1 ;
-(void)_setLockStateAggregator:(id)arg1 ;
-(id)_lockScreenManager;
-(BOOL)_allowsCapabilityCommandTabWithExplanation:(id*)arg1 ;
-(id)_bannerManager;
-(void)_setRemoteTransientOverlaySessionManager:(id)arg1 ;
-(BOOL)_allowsCapabilityCoverSheetWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilityAssistantWithExplanation:(id*)arg1 ;
-(BOOL)_allowsCapabilitySendMediaCommandWithExplanation:(id*)arg1 ;
@end
