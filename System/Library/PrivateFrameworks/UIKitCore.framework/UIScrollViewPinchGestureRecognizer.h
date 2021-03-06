/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	unsigned _hasParentScrollView : 1;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_analyticsIsGestureHandled;
-(void)setDelegate:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)_hysteresis;
-(UIScrollView *)scrollView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

