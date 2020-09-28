/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, NSCalendar, NSArray, HKQuantity, HKSleepSchedule;

@interface HKSHSleepDaySummary : NSObject <NSSecureCoding, NSCopying> {

	double _inBedDuration;
	double _sleepDuration;
	BOOL _didComputeDurationTotals;
	long long _morningIndex;
	NSDateInterval* _dateInterval;
	NSCalendar* _calendar;
	NSArray* _periods;
	NSArray* _schedules;
	HKQuantity* _sleepDurationGoal;

}

@property (nonatomic,readonly) long long morningIndex;                              //@synthesize morningIndex=_morningIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;                  //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSArray * periods;                              //@synthesize periods=_periods - In the implementation block
@property (nonatomic,copy,readonly) NSArray * schedules;                            //@synthesize schedules=_schedules - In the implementation block
@property (nonatomic,copy,readonly) HKSleepSchedule * primarySchedule; 
@property (nonatomic,copy,readonly) HKQuantity * sleepDurationGoal;                 //@synthesize sleepDurationGoal=_sleepDurationGoal - In the implementation block
@property (nonatomic,readonly) double inBedDuration; 
@property (nonatomic,readonly) double sleepDuration; 
+(BOOL)supportsSecureCoding;
+(id)daySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 periods:(id)arg4 schedules:(id)arg5 sleepDurationGoal:(id)arg6 ;
+(id)emptyDaySummaryWithMorningIndex:(long long)arg1 dateInterval:(id)arg2 calendar:(id)arg3 ;
-(NSArray *)periods;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCalendar *)calendar;
-(NSDateInterval *)dateInterval;
-(NSArray *)schedules;
-(double)inBedDuration;
-(double)sleepDuration;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HKQuantity *)sleepDurationGoal;
-(long long)morningIndex;
-(HKSleepSchedule *)primarySchedule;
-(void)_computeDurationTotalsIfNeeded;
@end
