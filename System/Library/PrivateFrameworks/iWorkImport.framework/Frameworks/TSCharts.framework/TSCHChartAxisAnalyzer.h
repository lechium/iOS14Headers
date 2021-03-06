/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartAxis, NSMutableArray;

@interface TSCHChartAxisAnalyzer : NSObject {

	TSCHChartAxis* mAxis;
	BOOL mShouldCalculateMedian;
	double mMin;
	double mMax;
	double mMedian;
	unsigned long long mNumValues;
	double mSumOfValues;
	BOOL mFirstValue;
	BOOL mDidCalculateMedian;
	NSMutableArray* mValues;

}
+(id)analyzerForAxis:(id)arg1 needsMedian:(BOOL)arg2 ;
-(double)min;
-(double)median;
-(double)average;
-(double)max;
-(id)initForAxis:(id)arg1 needsMedian:(BOOL)arg2 ;
-(BOOL)p_hasMedianReferenceLine;
-(void)addGridValue:(id)arg1 forSeries:(id)arg2 ;
@end

