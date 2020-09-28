/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/HKSPStateMachine.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineEventHandler.h>

@class HDSPEnvironmentNotReadyState, HDSPEnvironmentMigrationState, HDSPEnvironmentReadyState, HDSPEnvironmentDemoState, NSString;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler> {

	HDSPEnvironmentNotReadyState* _notReadyState;
	HDSPEnvironmentMigrationState* _migrationState;
	HDSPEnvironmentReadyState* _readyState;
	HDSPEnvironmentDemoState* _demoState;

}

@property (nonatomic,__weak,readonly) id<HDSPEnvironmentStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPEnvironmentStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPEnvironmentNotReadyState * notReadyState;                                 //@synthesize notReadyState=_notReadyState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentMigrationState * migrationState;                               //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentReadyState * readyState;                                       //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentDemoState * demoState;                                         //@synthesize demoState=_demoState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSystemReady;
-(void)systemDidBecomeReady;
-(BOOL)needsDataMigration;
-(id)stateMachineLog;
-(HDSPEnvironmentReadyState *)readyState;
-(HDSPEnvironmentNotReadyState *)notReadyState;
-(void)environmentShouldMigrateData;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(HDSPEnvironmentMigrationState *)migrationState;
-(HDSPEnvironmentDemoState *)demoState;
-(void)dataMigrationDidComplete;
-(void)environmentDidBecomeReady;
@end
