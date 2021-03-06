/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDColorFill.h>

@class TSUColor;

@interface TSDMutableColorFill : TSDColorFill

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) double hue; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double brightness; 
-(void)setSaturation:(double)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(void)setHue:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
@end

