/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSCalendar : NSObject
+(void)initialize;
+(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
+(long long)weekOfMonthFromDate:(id)arg1 ;
+(long long)weekOfYearFromDate:(id)arg1 ;
+(long long)monthFromDate:(id)arg1 ;
+(BOOL)isFirstMonthOfSeasonForLocalDate:(id)arg1 ;
+(id)startOfDayForDate:(id)arg1 ;
+(id)localStartSeasonDateForLocalDate:(id)arg1 ;
+(id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)validDateForDate:(id)arg1 ;
+(id)southernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2 ;
+(id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
+(long long)yearFromDate:(id)arg1 ;
+(long long)hourFromDate:(id)arg1 ;
+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1 ;
+(id)s_seasonCountryCodesDictionary;
+(id)universalDateFromLocalDate:(id)arg1 ;
+(BOOL)currentLocaleSupportsSeasons;
+(id)seasonNameForDateComponents:(id)arg1 locale:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)currentLocalDate;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1 ;
+(id)localDateFromUniversalDate:(id)arg1 ;
+(id)startOfWeekForDate:(id)arg1 ;
+(long long)dayFromDate:(id)arg1 ;
+(BOOL)supportsSeasonsWithLocale:(id)arg1 ;
+(BOOL)isDateValid:(id)arg1 ;
+(BOOL)isLastWeekOfMonthForLocalDate:(id)arg1 ;
+(BOOL)isFirstTenDaysOfSeasonForLocalDate:(id)arg1 ;
+(BOOL)isSecondHalfOfSeasonForLocalDate:(id)arg1 ;
+(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
+(id)dateComponentsWithUTCDate:(id)arg1 localDate:(id)arg2 ;
+(id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2 ;
+(id)dateFromComponents:(unsigned long long)arg1 ofDate:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(BOOL)isFirstTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(BOOL)isLastMonthOfSeasonForLocalDate:(id)arg1 ;
+(id)endOfDayForDate:(id)arg1 ;
+(long long)dayOfWeekFromDate:(id)arg1 ;
+(id)seasonNameForLocalDate:(id)arg1 locale:(id)arg2 ;
+(BOOL)isLastTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2 ;
+(long long)yearForWeekOfYearFromDate:(id)arg1 ;
+(id)dateComponentsWithLocalDate:(id)arg1 ;
+(id)northernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(id)dateByAddingHours:(long long)arg1 toDate:(id)arg2 ;
+(id)dateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
+(id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
+(id)endOfWeekForDate:(id)arg1 ;
+(id)dateByAddingYears:(long long)arg1 toDate:(id)arg2 ;
+(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
+(BOOL)isMiddleMonthOfSeasonForLocalDate:(id)arg1 ;
+(id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2 ;
@end

