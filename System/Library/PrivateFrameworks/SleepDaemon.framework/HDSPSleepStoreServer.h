/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSPSleepServer.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NAFuture, HKSPXPCConnectionListener, HDSPSleepMessageStore, NSString;

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	NAFuture* _environmentIsReady;
	HKSPXPCConnectionListener* _connectionListener;
	HDSPSleepMessageStore* _messageStore;

}

@property (nonatomic,readonly) NAFuture * environmentIsReady;                               //@synthesize environmentIsReady=_environmentIsReady - In the implementation block
@property (nonatomic,readonly) HKSPXPCConnectionListener * connectionListener;              //@synthesize connectionListener=_connectionListener - In the implementation block
@property (nonatomic,readonly) HDSPSleepMessageStore * messageStore;                        //@synthesize messageStore=_messageStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                        //@synthesize environment=_environment - In the implementation block
-(void)sleepAlarmWasModifiedWithCompletion:(/*^block*/id)arg1 ;
-(void)confirmAwakeWithCompletion:(/*^block*/id)arg1 ;
-(void)delayBedtimeForTimeInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)skipWindDownWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepEventIsDue:(id)arg1 ;
-(void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDSPSleepMessageStore *)messageStore;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSchedule:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(id)diagnosticInfo;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(void)skipBedtimeWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyClient:(id)arg1 forMissedMessagesWithSyncAnchor:(id)arg2 ;
-(void)saveSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)environmentWillInvalidate:(id)arg1 ;
-(id)eventIdentifiers;
-(void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startListening;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(void)_notifyClient:(id)arg1 forMissedSleepEvent:(id)arg2 syncAnchor:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 connectionListenerProvider:(/*^block*/id)arg2 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepEventRecord:(id)arg3 ;
-(void)_performWhenEnvironmentIsReady:(/*^block*/id)arg1 ;
-(HKSPXPCConnectionListener *)connectionListener;
-(id)diagnosticDescription;
-(void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_notifyClientForMissedSleepModeChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)publishWakeUpResultsNotificationWithCompletion:(/*^block*/id)arg1 ;
-(void)getSleepScheduleStateWithCompletion:(/*^block*/id)arg1 ;
-(NAFuture *)environmentIsReady;
-(void)getSleepSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveSleepSchedule:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkInWithSyncAnchor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyClientForMissedScheduleStateChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)getSleepEventRecordWithCompletion:(/*^block*/id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)saveSleepSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyClientForMissedSettingsChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)_notifyClientForMissedRecordChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)getSleepModeWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissGoodMorningWithCompletion:(/*^block*/id)arg1 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSettings:(id)arg3 ;
-(void)getSleepScheduleWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifyClientForMissedScheduleChange:(id)arg1 syncAnchor:(id)arg2 ;
-(void)setSleepMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end
