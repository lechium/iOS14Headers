/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService
-(void)setOrientationLockEnabled:(BOOL)arg1 ;
-(void)suspendAllDisplays;
-(void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(BOOL)arg2 ;
-(void)resetToHomeScreenAnimated:(BOOL)arg1 ;
-(void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3 ;
-(void)setAlertsEnabled:(BOOL)arg1 ;
-(void)addWidgetsToEachPage;
-(void)setMallocStackLoggingEnabled:(BOOL)arg1 ;
-(void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 ;
-(id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 ;
-(void)setHiddenFeaturesEnabled:(BOOL)arg1 ;
-(void)stashSwitcherModelToPath:(id)arg1 ;
-(void)setIdleTimerEnabled:(BOOL)arg1 ;
-(void)loadStashedSwitcherModelFromPath:(id)arg1 ;
@end

