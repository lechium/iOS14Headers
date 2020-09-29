/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource {

	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;              //@synthesize match=_match - In the implementation block
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(GKTurnBasedMatch *)match;
-(double)preferredCollectionHeight;
-(void)dealloc;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(id)initWithMatch:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)itemCount;
@end
