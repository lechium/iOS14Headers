/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UICollectionReusableView.h>

@class GKLeaderboard, GKGameRecord, GKLeaderboardMetadataView, UIStackView, NSLayoutConstraint;

@interface GKLeaderboardSectionHeaderView : UICollectionReusableView {

	BOOL _dataUpdated;
	GKLeaderboard* _leaderboard;
	GKGameRecord* _gameRecord;
	GKLeaderboardMetadataView* _personalView;
	GKLeaderboardMetadataView* _socialView;
	UIStackView* _container;
	NSLayoutConstraint* _contentInsetTop;
	NSLayoutConstraint* _contentInsetBottom;
	NSLayoutConstraint* _contentInsetTrailing;
	NSLayoutConstraint* _contentInsetLeading;

}

@property (assign,nonatomic) BOOL dataUpdated;                                       //@synthesize dataUpdated=_dataUpdated - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                            //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKGameRecord * gameRecord;                              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * personalView;               //@synthesize personalView=_personalView - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * socialView;                 //@synthesize socialView=_socialView - In the implementation block
@property (nonatomic,retain) UIStackView * container;                                //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetTop;                   //@synthesize contentInsetTop=_contentInsetTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetBottom;                //@synthesize contentInsetBottom=_contentInsetBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetTrailing;              //@synthesize contentInsetTrailing=_contentInsetTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetLeading;               //@synthesize contentInsetLeading=_contentInsetLeading - In the implementation block
-(void)updateLayout;
-(NSLayoutConstraint *)contentInsetTop;
-(void)setContainer:(UIStackView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(GKLeaderboardMetadataView *)socialView;
-(void)setPersonalView:(GKLeaderboardMetadataView *)arg1 ;
-(void)setSocialView:(GKLeaderboardMetadataView *)arg1 ;
-(GKLeaderboardMetadataView *)personalView;
-(id)formattedNumber:(id)arg1 ;
-(BOOL)dataUpdated;
-(void)setDataUpdated:(BOOL)arg1 ;
-(id)attributedStringWithSymbol:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(GKGameRecord *)gameRecord;
-(void)updateHighlightsWithGameRecord:(id)arg1 leaderboardCount:(long long)arg2 setCount:(long long)arg3 ;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(NSLayoutConstraint *)contentInsetTrailing;
-(void)setContentInsetTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentInsetLeading;
-(void)setContentInsetLeading:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentInsetBottom;
-(void)setContentInsetTop:(NSLayoutConstraint *)arg1 ;
-(void)setContentInsetBottom:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
-(UIStackView *)container;
@end
