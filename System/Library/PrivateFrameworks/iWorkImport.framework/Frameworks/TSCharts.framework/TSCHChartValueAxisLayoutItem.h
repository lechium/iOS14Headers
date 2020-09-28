/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAxisLayoutItem.h>

@class TSCHChartValueAxisLabelsLayoutItem;

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem {

	TSCHChartValueAxisLabelsLayoutItem* mValueLabels;

}

@property (nonatomic,readonly) TSCHChartValueAxisLabelsLayoutItem * axisValueLabelsLayoutItem; 
-(TSCHChartValueAxisLabelsLayoutItem *)axisValueLabelsLayoutItem;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
@end
