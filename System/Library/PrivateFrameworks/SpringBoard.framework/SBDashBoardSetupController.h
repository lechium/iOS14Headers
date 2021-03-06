/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class CSCoverSheetViewController, SBSetupManager, SBDashBoardSetupViewController, NSString;

@interface SBDashBoardSetupController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling> {

	CSCoverSheetViewController* _coverSheetViewController;
	SBSetupManager* _setupManager;
	SBDashBoardSetupViewController* _setupViewController;

}

@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)conformsToCSBehaviorProviding;
-(unsigned long long)restrictedCapabilities;
-(long long)scrollingStrategy;
-(void)_clearSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)_addOrRemoveSetupViewIfNecessaryAnimated:(BOOL)arg1 ;
-(void)conformsToCSEventHandling;
-(void)_setupModeChanged:(id)arg1 ;
-(long long)notificationBehavior;
-(void)dealloc;
-(long long)participantState;
-(void)conformsToCSExternalBehaviorProviding;
-(void)_configureForCurrentSetupMode;
-(long long)proximityDetectionMode;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2 ;
@end

