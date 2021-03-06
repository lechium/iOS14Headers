/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKCircularAnalogDialColorPalette <NSObject>
@property (nonatomic,readonly) BOOL isMulticolorPalette; 
@required
-(id)circularDialFillColor;
-(BOOL)isMulticolorPalette;
-(id)colorForCircularTicksForMinute:(unsigned long long)arg1;
-(id)circularDialSubtickColor;
-(id)colorForCircularTicksForHour:(unsigned long long)arg1;
-(id)circularDialTickColor;

@end

