/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKLineSeries.h>

@interface _HKAudioVisibleRangeOverlaySeries : HKLineSeries
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(long long)overlayType;
-(void)drawOverlayInContext:(CGContextRef)arg1 seriesOverlayData:(id)arg2 ;
-(id)_leqDataFromBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 screenRect:(CGRect)arg3 ;
@end

