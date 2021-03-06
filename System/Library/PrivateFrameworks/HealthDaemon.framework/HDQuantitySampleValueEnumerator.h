/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDQuantitySampleValueEnumerator : NSObject
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(id)_propertiesForEnumeration;
+(id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 ;
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 profile:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)orderedQuantityValuesBySeriesForPredicate:(id)arg1 transaction:(id)arg2 options:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

