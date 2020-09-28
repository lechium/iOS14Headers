/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHMultiDataChartRep.h>

@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep
-(void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_currentSeriesIndex;
-(id)p_barElementsRenderer;
-(unsigned long long)p_currentGroupIndex;
-(id)p_currentBarSeriesModelCache;
-(CGRect)p_clampRenderingElementFrame:(CGRect)arg1 barElementFrame:(CGRect)arg2 ;
-(CGRect)p_renderingElementFrameForBarElementFrame:(CGRect)arg1 ;
-(void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1 ;
-(BOOL)p_repElementIsAboveInterceptForSeriesIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2 ;
-(void)p_calculateInterceptForElementFrame:(CGRect)arg1 elementLayer:(id)arg2 animationInfo:(id)arg3 ;
-(void)updateElementFrame:(CGRect)arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4 ;
-(CGRect)currentRepElementBoundsInNaturalSpace;
@end
