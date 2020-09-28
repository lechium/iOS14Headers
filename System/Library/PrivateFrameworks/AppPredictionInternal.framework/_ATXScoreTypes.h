/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ATXScoreTypes : NSObject
+(unsigned long long)mappingForTopRankedSpecificGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(void)iterScoreInputsWithBlock:(/*^block*/id)arg1 ;
+(unsigned long long)mappingForTopRankedGeoHashSignalsWithResolution:(unsigned long long)arg1 withRank:(unsigned long long)arg2 forScoreInputCategory:(unsigned long long)arg3 ;
+(unsigned long long)mappingForDayOfWeekDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForTimeOfDayDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
+(unsigned long long)mappingForTopRankedZoom7GeoHashSignals:(unsigned long long)arg1 ;
+(id)stringForScoreInput:(unsigned long long)arg1 ;
+(unsigned long long)scoreInputForString:(id)arg1 ;
+(id)aggdStringForScoreInput:(unsigned long long)arg1 ;
+(id)scoreInputsToNames;
+(unsigned long long)mappingForTopRankedCoarseGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2 ;
@end
