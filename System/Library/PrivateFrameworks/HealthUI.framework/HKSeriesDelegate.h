/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSeriesDelegate
@required
-(UIEdgeInsets*)virtualMarginInsets;
-(BOOL)measuringStartupTime;
-(BOOL)seriesDrawingDuringAutoscale;
-(BOOL)seriesDrawingDuringScrolling;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
-(BOOL)seriesDrawingDuringTiling;
-(CGRect*)screenRectForSeries:(id)arg1;
-(void)autoscaleStateChangedForSeries:(id)arg1;
-(BOOL)rangeIsVisible:(id)arg1;
-(void)nonemptyDrawComplete;

@end

