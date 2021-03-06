/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject {

	UIColor* _color1;
	UIColor* _color2;
	UIColor* _color3;
	double _position1;
	double _position2;
	double _position3;
	double _progress;

}

@property (nonatomic,readonly) UIColor * color1;              //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,readonly) UIColor * color2;              //@synthesize color2=_color2 - In the implementation block
@property (nonatomic,readonly) UIColor * color3;              //@synthesize color3=_color3 - In the implementation block
@property (nonatomic,readonly) double position1;              //@synthesize position1=_position1 - In the implementation block
@property (nonatomic,readonly) double position2;              //@synthesize position2=_position2 - In the implementation block
@property (nonatomic,readonly) double position3;              //@synthesize position3=_position3 - In the implementation block
@property (nonatomic,readonly) double progress;               //@synthesize progress=_progress - In the implementation block
+(id)allPoints;
+(id)pointWithColor1:(id)arg1 color2:(id)arg2 color3:(id)arg3 position1:(double)arg4 position2:(double)arg5 position3:(double)arg6 progress:(double)arg7 ;
-(UIColor *)color1;
-(UIColor *)color2;
-(UIColor *)color3;
-(double)progress;
-(double)position1;
-(double)position2;
-(double)position3;
@end

