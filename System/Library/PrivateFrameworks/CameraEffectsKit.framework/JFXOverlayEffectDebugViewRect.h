/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class UIColor;

@interface JFXOverlayEffectDebugViewRect : NSObject {

	BOOL _ignoreTransform;
	double _borderWidth;
	UIColor* _borderColor;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL ignoreTransform;               //@synthesize ignoreTransform=_ignoreTransform - In the implementation block
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)borderColor;
-(CGRect)frame;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)ignoreTransform;
-(void)setIgnoreTransform:(BOOL)arg1 ;
@end

