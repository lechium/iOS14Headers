/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPSleepScheduleDayOccurrence.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSDateComponents, HKSPAlarmConfiguration, NSDate, NSSet, NSString;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,copy) NSDateComponents * bedtimeComponents; 
@property (nonatomic,copy) NSDateComponents * wakeUpComponents; 
@property (nonatomic,retain) HKSPAlarmConfiguration * alarmConfiguration; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(HKSPChangeSet *)changeSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)freeze;
-(void)testTurnOnAlarm;
-(void)testTurnOffAlarm;
-(id)init;
-(NSDateComponents *)bedtimeComponents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopy;
-(HKSPAlarmConfiguration *)alarmConfiguration;
-(void)setBedtimeComponents:(NSDateComponents *)arg1 ;
-(void)setWakeUpComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)wakeUpComponents;
-(void)setAlarmConfiguration:(HKSPAlarmConfiguration *)arg1 ;
-(id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 ;
-(BOOL)hasChangeAffectingScheduling;
@end

