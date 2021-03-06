/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXCapsuleButton, NSString, PXCMMImageView, UILabel, PXUpdater;

@interface PXCMMSendBackBannerView : UIView {

	PXCapsuleButton* _actionButton;
	NSString* _actionButtonTitle;
	/*^block*/id _actionButtonAction;
	PXCMMImageView* _imageView;
	UILabel* _captionLabel;
	UILabel* _headlineLabel;
	PXUpdater* _updater;

}
+(id)captionLabelFont;
+(double)captionLabelTopInset;
+(double)bottomInset;
+(id)_headlineLabelFont;
-(id)new;
-(void)_updateLabels;
-(void)setAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(id)initWithMessage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_attributedStringWithString:(id)arg1 ;
-(void)layoutSubviews;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setActionButtonWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)_updateActionButton;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(BOOL)arg3 ;
-(id)_headlineStringAttributes;
@end

