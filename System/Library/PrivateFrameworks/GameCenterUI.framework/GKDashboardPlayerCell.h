/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class GKPlayer, UIColor, GKDashboardPlayerShadowView, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell {

	BOOL _onDarkBackground;
	GKPlayer* _player;
	UIColor* _defaultContentBackgroundColor;
	GKDashboardPlayerShadowView* _playerView;
	NSLayoutConstraint* _playerViewBottomToNameLabelTopConstraint;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UIColor* _nameColor;
	UIColor* _statusColor;
	double _playerViewBottomToNameLabelTopConstant;

}

@property (nonatomic,retain) UIColor * nameColor;                                                        //@synthesize nameColor=_nameColor - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                                                      //@synthesize statusColor=_statusColor - In the implementation block
@property (assign,nonatomic) double playerViewBottomToNameLabelTopConstant;                              //@synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                                      //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,retain) UIColor * defaultContentBackgroundColor;                                    //@synthesize defaultContentBackgroundColor=_defaultContentBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (assign,nonatomic) GKDashboardPlayerShadowView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * playerViewBottomToNameLabelTopConstraint;              //@synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * statusLabel;                                                      //@synthesize statusLabel=_statusLabel - In the implementation block
+(double)preferredCollectionHeight;
+(CGSize)defaultSize;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)setStatusText:(id)arg1 ;
-(void)setNameColor:(UIColor *)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(void)setPlayerViewBottomToNameLabelTopConstant:(double)arg1 ;
-(void)setDefaultContentBackgroundColor:(UIColor *)arg1 ;
-(void)setNameText:(id)arg1 ;
-(UIView *)popoverSourceView;
-(UIColor *)defaultContentBackgroundColor;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(void)setStatusWithLastPlayedDate:(id)arg1 ;
-(void)updateLabelColorForDashboard;
-(BOOL)onDarkBackground;
-(NSLayoutConstraint *)playerViewBottomToNameLabelTopConstraint;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)dealloc;
-(void)setPlayerViewBottomToNameLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)nameColor;
-(UIColor *)statusColor;
-(double)playerViewBottomToNameLabelTopConstant;
-(void)setPlayerView:(GKDashboardPlayerShadowView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(GKDashboardPlayerShadowView *)playerView;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)setNameLabel:(UILabel *)arg1 ;
@end
