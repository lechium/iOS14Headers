/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIButton, UIColor, NSString;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {

	unsigned long long _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) double borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned long long hardEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(unsigned long long)hardEdge;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGRect)_frameForLine;
-(void)layoutSubviews;
-(UIColor *)borderColor;
-(id)init;
-(void)setDelegate:(UIButton *)arg1 ;
-(UIButton *)delegate;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

