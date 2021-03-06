/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, MTAlarmManager;

@interface CSAlarmMonitor : CSEventMonitor {

	long long _alarmFiringState;
	NSObject*<OS_dispatch_queue> _queue;
	MTAlarmManager* _alarmManager;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2 ;
-(void)_alarmIsFiring:(id)arg1 ;
-(void)_alarmDismissed:(id)arg1 ;
-(void)_alarmStateReset:(id)arg1 ;
-(void)initializeAlarmState;
-(long long)alarmState;
@end

