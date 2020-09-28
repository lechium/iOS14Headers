/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HRERecommendationRankingController : NSObject
+(double)maxRank;
+(double)minRank;
-(id)rankRecommendations:(id)arg1 userProfiler:(id)arg2 ;
-(double)calculateAdjustedCosineSimilarityScore:(id)arg1 userProfiler:(id)arg2 ;
-(id)rankRecommendationsFromSet:(id)arg1 userProfiler:(id)arg2 ;
@end
