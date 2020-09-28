/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScene, UIApplicationSceneSettings;

@interface _UISceneLifecycleMultiplexer : NSObject {

	UIScene* _uiSceneOfRecord;
	UIApplicationSceneSettings* _transitionalLifecycleState;
	struct {
		unsigned completedLaunch : 1;
		unsigned activatedOnce : 1;
	}  _multiplexerFlags;

}

@property (nonatomic,readonly) BOOL activatedOnce; 
@property (nonatomic,readonly) BOOL lifecycleWantsUnnecessaryDelayForSceneDelivery; 
@property (nonatomic,readonly) long long applicationState; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) BOOL suspendedEventsOnly; 
@property (nonatomic,readonly) BOOL suspendedUnderLock; 
@property (nonatomic,readonly) BOOL runningInTaskSwitcher; 
+(id)sharedInstance;
+(id)_mostActiveSceneForApplicationState;
+(id)mostActiveWindowSceneOnScreen:(id)arg1 ;
+(void)configureInitialDeactivationReasons:(unsigned long long)arg1 ;
+(id)mostActiveSceneWithTest:(/*^block*/id)arg1 ;
+(id)mostActiveScene;
+(long long)_compareLifecycleStateOfScene:(id)arg1 toScene:(id)arg2 ;
+(id)_mostActiveSceneIncludingInternal:(BOOL)arg1 withTest:(/*^block*/id)arg2 ;
-(void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3 ;
-(BOOL)lifecycleWantsUnnecessaryDelayForSceneDelivery;
-(id)initForAppSingleton:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3 ;
-(BOOL)isTrackingScene:(id)arg1 ;
-(BOOL)runningInTaskSwitcher;
-(BOOL)activatedOnce;
-(BOOL)isActive;
-(void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2 ;
-(void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2 ;
-(long long)applicationState;
-(void)noteApplicationLaunchCompleted;
-(BOOL)suspendedUnderLock;
-(void)_scheduleFirstCommit;
-(void)_globalTestRelatedActivationActionsForFirstActivation:(BOOL)arg1 foreground:(BOOL)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4 ;
-(BOOL)suspendedEventsOnly;
-(BOOL)_prepareForClientSuspensionWithScene:(id)arg1 ;
-(void)collectBackingStores;
-(void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(BOOL)arg3 withTransitionStore:(SCD_Struct_UI35)arg4 ;
@end
