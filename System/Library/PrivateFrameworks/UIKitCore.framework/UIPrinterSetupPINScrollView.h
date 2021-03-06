/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView {

	UIView* _contentView;
	double _visibleHeight;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double visibleHeight;              //@synthesize visibleHeight=_visibleHeight - In the implementation block
-(double)visibleHeight;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleHeight:(double)arg1 ;
@end

