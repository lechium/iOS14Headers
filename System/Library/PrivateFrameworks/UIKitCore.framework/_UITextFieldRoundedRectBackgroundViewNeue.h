/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {

	SCD_Struct_UI62 _flags;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL usesSinglePixelLineWidth; 
@property (nonatomic,retain) UIColor * strokeColor;                      //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                           //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleCornerRadius; 
-(double)_screenScale;
-(void)setLineWidth:(double)arg1 ;
-(BOOL)usesSinglePixelLineWidth;
-(void)updateView;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)_cornerRadiusAdjustedForBoundsHeight;
-(void)setHasFlexibleCornerRadius:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)lineWidth;
-(void)setActive:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)setUsesSinglePixelLineWidth:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(BOOL)hasFlexibleCornerRadius;
-(UIColor *)strokeColor;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 updateView:(BOOL)arg4 ;
@end
