/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDateComponents, NSTimeZone;

@interface HDAlarmEvent : NSObject {

	NSString* _clientIdentifier;
	NSString* _eventIdentifier;
	NSDate* _dueDate;
	NSDateComponents* _dueDateComponents;
	unsigned long long _eventOptions;
	NSTimeZone* __unitTest_localTimeZoneOverride;

}

@property (nonatomic,copy) NSTimeZone * _unitTest_localTimeZoneOverride;               //@synthesize _unitTest_localTimeZoneOverride=__unitTest_localTimeZoneOverride - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventIdentifier;                        //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dueDate;                                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentDueDate; 
@property (nonatomic,readonly) unsigned long long eventOptions;                        //@synthesize eventOptions=_eventOptions - In the implementation block
@property (nonatomic,readonly) BOOL requiresDeviceUnlocked; 
@property (nonatomic,readonly) BOOL requiresDeviceOnWrist; 
-(NSDate *)dueDate;
-(id)localTimeZone;
-(NSString *)clientIdentifier;
-(NSDateComponents *)dueDateComponents;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)eventIdentifier;
-(id)description;
-(unsigned long long)eventOptions;
-(id)_initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 dueDateComponents:(id)arg4 eventOptions:(unsigned long long)arg5 ;
-(NSTimeZone *)_unitTest_localTimeZoneOverride;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(NSDate *)currentDueDate;
-(BOOL)requiresDeviceOnWrist;
-(BOOL)requiresDeviceUnlocked;
-(void)set_unitTest_localTimeZoneOverride:(NSTimeZone *)arg1 ;
@end
