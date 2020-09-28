/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _HKReferenceRangeDotViewDot, UIColor;

@interface HKReferenceRangeDotView : UIView {

	_HKReferenceRangeDotViewDot* _dotView;

}

@property (nonatomic,retain) UIColor * dotColor; 
@property (assign,nonatomic,__weak) _HKReferenceRangeDotViewDot * dotView;              //@synthesize dotView=_dotView - In the implementation block
-(_HKReferenceRangeDotViewDot *)dotView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(void)setDotView:(_HKReferenceRangeDotViewDot *)arg1 ;
-(CGRect)desiredDotViewFrame;
@end
