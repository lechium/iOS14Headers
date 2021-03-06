/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface GKLoadingCell : UICollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loading;

}

@property (nonatomic,retain) UILabel * loading;                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UILabel *)loading;
-(void)setLoading:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
@end

