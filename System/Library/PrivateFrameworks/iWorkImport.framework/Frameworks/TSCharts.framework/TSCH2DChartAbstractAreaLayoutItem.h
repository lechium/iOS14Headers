/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartTitleLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	TSCHChartTitleLayoutItem* mTitleElement;
	TSCHChartDataSetNameLayoutItem* mDataSetNameElement;
	TSCHChartBodyLayoutItem* mChartBody;

}

@property (nonatomic,readonly) TSCHChartBodyLayoutItem * bodyLayoutItem; 
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(CGRect)i_currentBufferAreaUnitRect;
-(TSCHChartBodyLayoutItem *)bodyLayoutItem;
@end

