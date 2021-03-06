/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCHChartValueAxis.h>

@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {

	TSCHChartAxisAnalysis* mInProgressAnalysisForErrorBarData;

}
-(id)dataFormatter;
-(double)interceptForAxis:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(BOOL)supportsReferenceLines;
-(id)formattedStringForAxisValue:(id)arg1 ;
-(id)dataFormatterForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 ;
-(double)totalForGroupIndex:(unsigned long long)arg1 series:(id)arg2 ;
-(id)formattedStringForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg1 ;
-(void)updateMultiDataModelAxisAnalysis:(id)arg1 ;
-(double)doubleAxisToModelValue:(double)arg1 ;
-(void)updateModelAxisAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4 ;
-(double*)unitSpaceValuesForSeries:(id)arg1 groupIndexSet:(id)arg2 min:(double)arg3 max:(double)arg4 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 groupIndex:(unsigned long long)arg3 addValuesFromAllPreviousSeries:(BOOL)arg4 ;
-(BOOL)editableFormatForValueStrings;
-(id)valueForFormattedString:(id)arg1 ;
-(BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(id)userMin;
-(id)userMax;
-(double)totalForIndex:(unsigned long long)arg1 useDownsampledTotals:(BOOL)arg2 ;
@end

