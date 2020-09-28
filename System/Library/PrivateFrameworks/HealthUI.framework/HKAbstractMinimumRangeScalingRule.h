/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class NSDictionary, HKValueRange, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	double _defaultYAxisRange;
	NSDictionary* _axisRangeOverrides;
	long long _portraitPrettyNumberRule;
	HKValueRange* _axisBounds;

}

@property (nonatomic,readonly) double defaultYAxisRange;                       //@synthesize defaultYAxisRange=_defaultYAxisRange - In the implementation block
@property (assign,nonatomic) long long portraitPrettyNumberRule;               //@synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule - In the implementation block
@property (nonatomic,retain) HKValueRange * axisBounds;                        //@synthesize axisBounds=_axisBounds - In the implementation block
@property (nonatomic,readonly) NSDictionary * axisRangeOverrides;              //@synthesize axisRangeOverrides=_axisRangeOverrides - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setPortraitPrettyNumberRule:(long long)arg1 ;
-(id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3 ;
-(void)setAxisBounds:(HKValueRange *)arg1 ;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 ;
-(id)yAxisBounds;
-(long long)portraitPrettyNumberRule;
-(double)_rangeForZoomLevel:(long long)arg1 ;
-(double)defaultYAxisRange;
-(HKValueRange *)axisBounds;
-(NSDictionary *)axisRangeOverrides;
@end
