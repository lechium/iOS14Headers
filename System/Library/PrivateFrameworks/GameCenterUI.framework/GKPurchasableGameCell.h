/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class GKStoreItemInternal, UILabel, GKRatingView;

@interface GKPurchasableGameCell : GKBaseGameCell {

	float _capturedRating;
	GKStoreItemInternal* _storeItem;
	UILabel* _developerLabel;
	UILabel* _priceLabel;
	GKRatingView* _ratingStarsView;
	UILabel* _numberRatings;

}

@property (nonatomic,retain) GKStoreItemInternal * storeItem;              //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) UILabel * developerLabel;                     //@synthesize developerLabel=_developerLabel - In the implementation block
@property (nonatomic,retain) UILabel * priceLabel;                         //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) GKRatingView * ratingStarsView;               //@synthesize ratingStarsView=_ratingStarsView - In the implementation block
@property (assign,nonatomic) float capturedRating;                         //@synthesize capturedRating=_capturedRating - In the implementation block
@property (nonatomic,retain) UILabel * numberRatings;                      //@synthesize numberRatings=_numberRatings - In the implementation block
-(void)setCapturedRating:(float)arg1 ;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(BOOL)canRemoveItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)capturedRating;
-(UILabel *)developerLabel;
-(void)setDeveloperLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(GKRatingView *)ratingStarsView;
-(void)setRatingStarsView:(GKRatingView *)arg1 ;
-(UILabel *)numberRatings;
-(void)setNumberRatings:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)didUpdateModel;
-(void)establishConstraints;
-(GKStoreItemInternal *)storeItem;
@end
