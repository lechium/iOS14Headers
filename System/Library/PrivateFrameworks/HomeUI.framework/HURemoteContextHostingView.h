/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HURemoteContextHostingView : UIView {

	UIView* _contentView;
	UIView* _destinationOutContainerView;
	UIView* _destinationOutView;
	UIView* _destinationOverView;

}

@property (nonatomic,readonly) UIView * destinationOutContainerView;              //@synthesize destinationOutContainerView=_destinationOutContainerView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOutView;                       //@synthesize destinationOutView=_destinationOutView - In the implementation block
@property (nonatomic,readonly) UIView * destinationOverView;                      //@synthesize destinationOverView=_destinationOverView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners; 
-(unsigned long long)maskedCorners;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(UIView *)contentView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithContentView:(id)arg1 ;
-(double)_cornerRadius;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(double)_continuousCornerRadius;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)destinationOutView;
-(UIView *)destinationOutContainerView;
-(UIView *)destinationOverView;
@end
