/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CEKBadgeViewDelegate;
@class UIColor;

@interface CEKBadgeView : UIView {

	id<CEKBadgeViewDelegate> _delegate;
	double __fillCornerRadius;
	UIColor* __fillColor;
	UIColor* __contentColor;

}

@property (assign,setter=_setFillCornerRadius:,nonatomic) double _fillCornerRadius;              //@synthesize _fillCornerRadius=__fillCornerRadius - In the implementation block
@property (setter=_setFillColor:,nonatomic,retain) UIColor * _fillColor;                         //@synthesize _fillColor=__fillColor - In the implementation block
@property (setter=_setContentColor:,nonatomic,retain) UIColor * _contentColor;                   //@synthesize _contentColor=__contentColor - In the implementation block
@property (assign,nonatomic,__weak) id<CEKBadgeViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setFillCornerRadius:(double)arg1 ;
-(void)_setContentColor:(id)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(UIColor *)_fillColor;
-(UIColor *)_contentColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<CEKBadgeViewDelegate>)arg1 ;
-(id)_maskImage;
-(id<CEKBadgeViewDelegate>)delegate;
-(void)drawRect:(CGRect)arg1 ;
-(double)_fillCornerRadius;
-(id)_invertMaskImage:(id)arg1 ;
@end
