/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _TtC12GameCenterUI22GKAddFriendsLockupView, _TtC12GameCenterUI14EmptyStateView, UIView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell {

	long long _friendCount;
	_TtC12GameCenterUI22GKAddFriendsLockupView* _addFriendsLockupView;
	_TtC12GameCenterUI14EmptyStateView* _noFriendsView;
	UIView* _container;
	UIView* _topLine;

}

@property (assign,nonatomic,__weak) _TtC12GameCenterUI22GKAddFriendsLockupView * addFriendsLockupView;              //@synthesize addFriendsLockupView=_addFriendsLockupView - In the implementation block
@property (assign,nonatomic,__weak) _TtC12GameCenterUI14EmptyStateView * noFriendsView;                             //@synthesize noFriendsView=_noFriendsView - In the implementation block
@property (nonatomic,retain) UIView * container;                                                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                                                      //@synthesize topLine=_topLine - In the implementation block
@property (assign,nonatomic) long long friendCount;                                                                 //@synthesize friendCount=_friendCount - In the implementation block
@property (assign,nonatomic) BOOL lineVisible; 
-(UIView *)topLine;
-(void)clearContainer;
-(void)setContainer:(UIView *)arg1 ;
-(void)setLineVisible:(BOOL)arg1 ;
-(BOOL)lineVisible;
-(void)setTopLine:(UIView *)arg1 ;
-(long long)friendCount;
-(CGSize)preferredLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)configureNoFriendsViewWithHandler:(/*^block*/id)arg1 ;
-(void)configureAddFriendsLockupWithHandler:(/*^block*/id)arg1 ;
-(void)setFriendCount:(long long)arg1 ;
-(_TtC12GameCenterUI22GKAddFriendsLockupView *)addFriendsLockupView;
-(void)setAddFriendsLockupView:(_TtC12GameCenterUI22GKAddFriendsLockupView *)arg1 ;
-(_TtC12GameCenterUI14EmptyStateView *)noFriendsView;
-(void)setNoFriendsView:(_TtC12GameCenterUI14EmptyStateView *)arg1 ;
-(void)awakeFromNib;
-(UIView *)container;
@end
