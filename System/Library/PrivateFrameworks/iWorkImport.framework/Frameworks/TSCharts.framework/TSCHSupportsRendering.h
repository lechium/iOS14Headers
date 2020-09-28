/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:24 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHSupportsRendering <NSObject>
@required
-(void)drawInContext:(CGContextRef)arg1;
-(id)geometry;
-(BOOL)shadowsEnabled;
-(double)viewScale;
-(BOOL)isDrawingIntoPDF;
-(id)chartLayout;
-(BOOL)renderGrid;
-(BOOL)forceRenderBlankBackground;
-(BOOL)renderElementsShadowOnly;
-(BOOL)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1;
-(BOOL)is2DRepFor3DChartRep;
-(BOOL)renderElements;
-(BOOL)renderLabels;
-(BOOL)requireSeparateLabelLayer;
-(BOOL)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
-(BOOL)renderReferenceLines;

@end
