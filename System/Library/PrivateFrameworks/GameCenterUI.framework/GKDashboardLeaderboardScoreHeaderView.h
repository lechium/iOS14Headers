/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, GKTimeScopeButton, NSString;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView {

	id _timeScopeTarget;
	SEL _timeScopeAction;
	UILabel* _titleLabel;
	GKTimeScopeButton* _timeScopeButton;

}

@property (assign,nonatomic) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) GKTimeScopeButton * timeScopeButton;              //@synthesize timeScopeButton=_timeScopeButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) id timeScopeTarget;                               //@synthesize timeScopeTarget=_timeScopeTarget - In the implementation block
@property (assign,nonatomic) SEL timeScopeAction;                              //@synthesize timeScopeAction=_timeScopeAction - In the implementation block
+(double)defaultHeight;
-(UILabel *)titleLabel;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(NSString *)title;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)timeScopeTarget;
-(SEL)timeScopeAction;
-(void)setTimeScopeTarget:(id)arg1 ;
-(void)setTimeScopeAction:(SEL)arg1 ;
-(GKTimeScopeButton *)timeScopeButton;
-(void)awakeFromNib;
-(void)timeScopePressed:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTimeScopeButton:(GKTimeScopeButton *)arg1 ;
@end

