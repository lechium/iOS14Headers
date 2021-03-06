/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell {

	UILabel* _statsLabel;
	UILabel* _dateLabel;

}

@property (nonatomic,retain) UILabel * statsLabel;              //@synthesize statsLabel=_statsLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;               //@synthesize dateLabel=_dateLabel - In the implementation block
-(void)setDateLabel:(UILabel *)arg1 ;
-(id)achievementsStringWithGameRecord:(id)arg1 ;
-(id)leaderboardStringWithGameRecord:(id)arg1 ;
-(void)setStatsLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(UILabel *)dateLabel;
-(void)didUpdateModel;
-(id)statText;
-(UILabel *)statsLabel;
@end

