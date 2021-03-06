/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString, HDXPCAlarmScheduler, NSObject;

@interface HDXPCAlarm : NSObject {

	os_unfair_lock_s _lock;
	NSString* _eventName;
	HDXPCAlarmScheduler* _scheduler;
	NSObject*<OS_dispatch_queue> _eventHandlerQueue;
	/*^block*/id _eventHandler;
	/*^block*/id _unitTest_schedulerObserver;

}

@property (nonatomic,readonly) HDXPCAlarmScheduler * scheduler;                             //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventHandlerQueue;              //@synthesize eventHandlerQueue=_eventHandlerQueue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id unitTest_schedulerObserver;                                   //@synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                                   //@synthesize eventName=_eventName - In the implementation block
-(id)eventHandler;
-(HDXPCAlarmScheduler *)scheduler;
-(void)setUnitTest_schedulerObserver:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)eventHandlerQueue;
-(void)setEventHandler:(id)arg1 ;
-(id)unitTest_schedulerObserver;
-(void)setNextFireDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
-(id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(NSString *)eventName;
-(void)eventDidFire:(id)arg1 ;
-(void)unschedule;
-(void)beginReceivingEventsWithHandler:(/*^block*/id)arg1 ;
-(id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3 ;
-(id)description;
-(void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
@end

