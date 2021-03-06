/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@interface UIDynamicColor : UIColor
-(void)set;
-(CGColorRef)CGColor;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(id)_highContrastDynamicColor;
-(BOOL)_isDeepColor;
-(void)setFill;
-(id)_backgroundColorIgnoringHighContrast;
-(BOOL)_isDynamic;
-(id)colorSpaceName;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(void)setStroke;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)resolvedColorWithTraitCollection:(id)arg1 ;
-(BOOL)isPatternColor;
-(double)alphaComponent;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
@end

