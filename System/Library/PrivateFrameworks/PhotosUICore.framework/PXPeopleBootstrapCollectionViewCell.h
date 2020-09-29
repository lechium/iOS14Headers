/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIView, UIImageView, UIImage;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell {

	BOOL _confirmed;
	BOOL _isMergeCandidate;
	BOOL _isVerified;
	unsigned long long _presentationStatus;
	PXPersonImageRequest* _imageRequest;
	PXRoundedCornerOverlayView* _roundCornerOverlay;
	UIView* _selectedCheckmarkView;
	UIView* _unselectedCheckmarkView;
	UIImageView* _badgeView;
	UIImageView* _imageView;
	CGSize _checkmarkImageSize;

}

@property (nonatomic,readonly) PXRoundedCornerOverlayView * roundCornerOverlay;              //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,readonly) UIView * selectedCheckmarkView;                               //@synthesize selectedCheckmarkView=_selectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIView * unselectedCheckmarkView;                             //@synthesize unselectedCheckmarkView=_unselectedCheckmarkView - In the implementation block
@property (nonatomic,readonly) UIImageView * badgeView;                                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) CGSize checkmarkImageSize;                                    //@synthesize checkmarkImageSize=_checkmarkImageSize - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                                                 //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,nonatomic) unsigned long long presentationStatus;                          //@synthesize presentationStatus=_presentationStatus - In the implementation block
@property (nonatomic,retain) PXPersonImageRequest * imageRequest;                            //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL isMergeCandidate;                                          //@synthesize isMergeCandidate=_isMergeCandidate - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                                                //@synthesize isVerified=_isVerified - In the implementation block
+(id)cloudErrorBadgeImage;
-(BOOL)_isRTL;
-(UIImageView *)badgeView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setConfirmed:(BOOL)arg1 ;
-(UIImage *)image;
-(BOOL)isVerified;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(UIImageView *)imageView;
-(BOOL)confirmed;
-(PXPersonImageRequest *)imageRequest;
-(void)setPresentationStatus:(unsigned long long)arg1 ;
-(void)setIsMergeCandidate:(BOOL)arg1 ;
-(void)_updateCellSizing;
-(unsigned long long)presentationStatus;
-(BOOL)isMergeCandidate;
-(UIView *)selectedCheckmarkView;
-(CGSize)checkmarkImageSize;
-(UIView *)unselectedCheckmarkView;
-(void)setImageRequest:(PXPersonImageRequest *)arg1 ;
@end
