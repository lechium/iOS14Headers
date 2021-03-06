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

@interface UITextFieldBackgroundView : UIView {

	BOOL _active;
	BOOL _enabled;
	float _progress;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setProgress:(float)arg1 ;
-(void)_updateImages;
@end

