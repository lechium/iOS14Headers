/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSPointerArray, UIColor, PXRoundedCornerOverlayView;

@interface PUCollageView : UIView {

	BOOL _hasRoundedCorners;
	double _spacing;
	long long _numberOfItems;
	double _cornerRadius;
	double _subitemCornerRadius;
	long long __numberOfImageViews;
	NSArray* __imageViews;
	NSPointerArray* __imageSizes;
	UIColor* _cornersBackgroundColor;
	PXRoundedCornerOverlayView* __roundedCornerOverlayView;
	CGSize _collageSize;

}

@property (nonatomic,readonly) long long _numberOfImageViews;                                                                          //@synthesize _numberOfImageViews=__numberOfImageViews - In the implementation block
@property (nonatomic,readonly) NSArray * _imageViews;                                                                                  //@synthesize _imageViews=__imageViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;                                                                           //@synthesize _imageSizes=__imageSizes - In the implementation block
@property (nonatomic,retain) UIColor * cornersBackgroundColor;                                                                         //@synthesize cornersBackgroundColor=_cornersBackgroundColor - In the implementation block
@property (setter=_setRoundedCornerOverlayView:,nonatomic,retain) PXRoundedCornerOverlayView * _roundedCornerOverlayView;              //@synthesize _roundedCornerOverlayView=__roundedCornerOverlayView - In the implementation block
@property (assign,nonatomic) CGSize collageSize;                                                                                       //@synthesize collageSize=_collageSize - In the implementation block
@property (assign,nonatomic) double spacing;                                                                                           //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                                                                  //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double subitemCornerRadius;                                                                               //@synthesize subitemCornerRadius=_subitemCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;                                                                                   //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
+(long long)maximumNumberOfItems;
-(double)cornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)cornersBackgroundColor;
-(void)layoutSubviews;
-(double)spacing;
-(void)setCornerRadius:(double)arg1 ;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(long long)arg2 ;
-(CGSize)collageSize;
-(void)setNumberOfItems:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)imageSizeForItemAtIndex:(long long)arg1 ;
-(void)_updateImageViews;
-(void)_updateRoundedCornerOverlayView;
-(double)subitemCornerRadius;
-(long long)_numberOfImageViews;
-(PXRoundedCornerOverlayView *)_roundedCornerOverlayView;
-(void)_setRoundedCornerOverlayView:(id)arg1 ;
-(void)setCornersBackgroundColor:(UIColor *)arg1 ;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setCollageSize:(CGSize)arg1 ;
-(void)setSubitemCornerRadius:(double)arg1 ;
-(NSArray *)_imageViews;
-(long long)numberOfItems;
-(void)setSpacing:(double)arg1 ;
-(BOOL)hasRoundedCorners;
-(NSPointerArray *)_imageSizes;
-(void)setHasRoundedCorners:(BOOL)arg1 withCornersBackgroundColor:(id)arg2 ;
@end

