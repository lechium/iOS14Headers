/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDualTimeView.h>

@class CABackdropLayer, CAFilter;

@interface NTKSiderealTimeView : NTKDualTimeView {

	CABackdropLayer* _blurBackdrop;
	CAFilter* _gaussianFilter;
	CAFilter* _brightnessFilter;
	CAFilter* _saturationFilter;

}
-(void)_setupDigitalTimeViews;
-(id)_secondTickActiveColorForColor:(unsigned long long)arg1 ;
-(void)_setupAnalogHandsView;
-(void)_didFinishTimeViewSetup;
-(BOOL)shouldUseCustomDialBackground;
-(id)_customDialBackgroundView;
-(void)setBrightnessFilterInputAmount:(double)arg1 ;
-(void)setSaturationFilterInputAmount:(double)arg1 ;
-(void)updateFilters;
-(double)_analogTickInset;
-(CGSize)_hourTickSize;
-(CGSize)_minuteTickSize;
-(unsigned long long)_hourTickCount;
-(unsigned long long)_minuteTickCount;
-(id)_hourTickColorForColor:(unsigned long long)arg1 ;
-(id)_minuteTickColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1 ;
-(CGSize)_secondTickSize;
-(double)_digitalTimeLabelFontSize;
-(id)_digitalTimeLabelColorForColor:(unsigned long long)arg1 ;
-(id)_secondTickInactiveColorForColor:(unsigned long long)arg1 ;
@end
