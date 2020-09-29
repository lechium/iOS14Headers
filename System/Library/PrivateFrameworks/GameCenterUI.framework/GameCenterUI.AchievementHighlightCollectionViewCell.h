/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface GameCenterUI.AchievementHighlightCollectionViewCell : UICollectionViewCell {

	 decorationView;
	 title;
	 subtitle;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilitySubtitleLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(UILabel *)accessibilitySubtitleLabel;
-(UILabel *)accessibilityTitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
