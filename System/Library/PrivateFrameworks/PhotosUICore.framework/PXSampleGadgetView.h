/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol PXSampleGadgetViewDelegate;
@class UIColor, UIView;

@interface PXSampleGadgetView : UICollectionViewCell {

	UIColor* _color;
	id<PXSampleGadgetViewDelegate> _delegate;
	UIView* _colorView;

}

@property (nonatomic,retain) UIView * colorView;                                          //@synthesize colorView=_colorView - In the implementation block
@property (assign,nonatomic,__weak) id<PXSampleGadgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * color;                                             //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)colorView;
-(void)layoutSubviews;
-(void)setColorView:(UIView *)arg1 ;
-(void)setDelegate:(id<PXSampleGadgetViewDelegate>)arg1 ;
-(id<PXSampleGadgetViewDelegate>)delegate;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end
