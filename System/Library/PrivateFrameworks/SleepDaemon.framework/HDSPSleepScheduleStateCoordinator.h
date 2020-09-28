/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPSleepActionObserver.h>
#import <libobjc.A.dylib/HDSPSleepAlarmObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>

@class HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, NSDate, HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPObserverSet, NSString;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPSleepAlarmObserver, HDSPTimeChangeObserver> {

	os_unfair_lock_s _stateMachineLock;
	HDSPEnvironment* _environment;
	HDSPSleepScheduleStateCoordinatorStateMachine* _stateMachine;
	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) os_unfair_lock_s stateMachineLock;                                         //@synthesize stateMachineLock=_stateMachineLock - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinatorStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAppleWatch; 
@property (nonatomic,readonly) BOOL sleepFeaturesEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * previousOccurrence; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                      //@synthesize environment=_environment - In the implementation block
-(id)currentState;
-(void)sleepEventIsDue:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(os_unfair_lock_s)stateMachineLock;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)diagnosticInfo;
-(void)bedtimeWasSkipped:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(BOOL)isAppleWatch;
-(HKSPSleepScheduleOccurrence *)previousOccurrence;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(HKSPObserverSet *)observers;
-(id)eventIdentifiers;
-(void)bedtimeWasDelayed:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)wakeNotificationWasConfirmed:(id)arg1 ;
-(void)windDownWasSkipped:(id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(NSDate *)currentDate;
-(HDSPSleepScheduleStateCoordinatorStateMachine *)stateMachine;
-(BOOL)sleepFeaturesEnabled;
-(void)removeObserver:(id)arg1 ;
-(void)snoozeFireDateShouldBeReset;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(id)diagnosticDescription;
-(unsigned long long)currentSleepScheduleState;
-(void)timeZoneChangeDetected:(id)arg1 ;
-(void)_updateSleepScheduleState;
-(HDSPEnvironment *)environment;
-(void)wakeUpAlarmWasDismissed:(id)arg1 ;
@end
