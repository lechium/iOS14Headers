/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface STConfigurationSchedule : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDaysTheSame;
	NSDictionary* _scheduleDaysByWeekdayIndex;

}

@property (assign,nonatomic) BOOL allDaysTheSame;                                 //@synthesize allDaysTheSame=_allDaysTheSame - In the implementation block
@property (copy,readonly) NSDictionary * scheduleDaysByWeekdayIndex;              //@synthesize scheduleDaysByWeekdayIndex=_scheduleDaysByWeekdayIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithScheduleDays:(id)arg1 ;
-(NSDictionary *)scheduleDaysByWeekdayIndex;
-(BOOL)isEqualToConfigurationSchedule:(id)arg1 ;
-(id)initWithRepeatedScheduleDay:(id)arg1 ;
-(BOOL)allDaysTheSame;
-(void)setAllDaysTheSame:(BOOL)arg1 ;
@end

