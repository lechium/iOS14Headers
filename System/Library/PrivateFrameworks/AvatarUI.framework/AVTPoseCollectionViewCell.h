/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, CAShapeLayer, UIImage, UIImageView, UIViewPropertyAnimator;

@interface AVTPoseCollectionViewCell : UICollectionViewCell {

	NSUUID* _contextIdentifier;
	CAShapeLayer* _selectionLayer;
	UIImage* _image;
	UIImageView* _imageView;
	UIImageView* _transitionImageView;
	UIViewPropertyAnimator* _scaleDownTransformAnimator;
	UIViewPropertyAnimator* _scaleUpWithBounceTransformAnimator;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;                                            //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * transitionImageView;                                        //@synthesize transitionImageView=_transitionImageView - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * scaleDownTransformAnimator;                      //@synthesize scaleDownTransformAnimator=_scaleDownTransformAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * scaleUpWithBounceTransformAnimator;              //@synthesize scaleUpWithBounceTransformAnimator=_scaleUpWithBounceTransformAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * contextIdentifier;                                               //@synthesize contextIdentifier=_contextIdentifier - In the implementation block
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)updateImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContextIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)contextIdentifier;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(void)setScaleDownTransformAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setScaleUpWithBounceTransformAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)scaleDownTransformAnimator;
-(void)cancelAnimations;
-(UIViewPropertyAnimator *)scaleUpWithBounceTransformAnimator;
-(UIImageView *)transitionImageView;
-(void)setTransitionImageView:(UIImageView *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
@end

