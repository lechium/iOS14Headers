/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class UIColor;

@interface SXStrokeStyle : SXJSONObject

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) SXConvertibleValue width; 
@property (nonatomic,readonly) int style; 
-(int)style;
-(SXConvertibleValue)width;
-(UIColor *)color;
-(int)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end
