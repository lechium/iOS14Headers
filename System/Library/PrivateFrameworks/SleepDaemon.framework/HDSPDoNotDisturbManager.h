/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPTimeChangeObserver.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbListenerDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPDNDModeAssertionService;
@class NSDate, HKSPSleepScheduleModel, HDSPEnvironment, HDSPDoNotDisturbListener, HDSPDoNotDisturbStateMachine, NSString;

@interface HDSPDoNotDisturbManager : NSObject <HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider, HDSPNotificationObserver, HDSPSource, HDSPDiagnosticsProvider, HDSPDoNotDisturbListenerDelegate, HDSPEnvironmentAware> {

	os_unfair_lock_s _dndLock;
	HDSPEnvironment* _environment;
	HDSPDoNotDisturbListener* _doNotDisturbListener;
	HDSPDoNotDisturbStateMachine* _stateMachine;
	/*^block*/id _assertionServiceProvider;
	NSString* _assertionServiceClientIdentifier;
	id<HDSPDNDModeAssertionService> _assertionService;

}

@property (nonatomic,readonly) HDSPDoNotDisturbListener * doNotDisturbListener;               //@synthesize doNotDisturbListener=_doNotDisturbListener - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s dndLock;                                      //@synthesize dndLock=_dndLock - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbStateMachine * stateMachine;                   //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,copy,readonly) id assertionServiceProvider;                              //@synthesize assertionServiceProvider=_assertionServiceProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionServiceClientIdentifier;              //@synthesize assertionServiceClientIdentifier=_assertionServiceClientIdentifier - In the implementation block
@property (nonatomic,readonly) id<HDSPDNDModeAssertionService> assertionService;              //@synthesize assertionService=_assertionService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                          //@synthesize environment=_environment - In the implementation block
-(long long)sleepMode;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_currentState;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)diagnosticInfo;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(id)assertionServiceProvider;
-(void)disengageDoNotDisturb;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(NSDate *)currentDate;
-(HDSPDoNotDisturbStateMachine *)stateMachine;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(NSString *)sourceIdentifier;
-(unsigned long long)sleepScheduleState;
-(void)_updateDoNotDisturbAssertionService;
-(void)significantTimeChangeDetected:(id)arg1 ;
-(void)_takeDoNotDisturbAssertionWithIdentifier:(id)arg1 userVisibleEndDate:(id)arg2 updateOnly:(BOOL)arg3 ;
-(void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(id<HDSPDNDModeAssertionService>)assertionService;
-(id)diagnosticDescription;
-(id)_assertionServiceClientIdentifierForPairedDevice;
-(os_unfair_lock_s)dndLock;
-(void)_locked_cleanUpUnexpectedActiveAssertion;
-(void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(void)userTurnedOffDoNotDisturb;
-(HDSPEnvironment *)environment;
-(HDSPDoNotDisturbListener *)doNotDisturbListener;
-(id)initWithEnvironment:(id)arg1 assertionServiceProvider:(/*^block*/id)arg2 doNotDisturbListener:(id)arg3 ;
-(NSString *)assertionServiceClientIdentifier;
@end

