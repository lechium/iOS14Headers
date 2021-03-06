/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:15 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKBasicCollectionViewDataSource, NSMutableDictionary;

@interface GKSplittingDataSource : GKCollectionViewDataSource {

	GKBasicCollectionViewDataSource* _underlyingDataSource;
	NSMutableDictionary* _sectionToSectionInfo;

}

@property (nonatomic,retain) NSMutableDictionary * sectionToSectionInfo;                          //@synthesize sectionToSectionInfo=_sectionToSectionInfo - In the implementation block
@property (nonatomic,retain) GKBasicCollectionViewDataSource * underlyingDataSource;              //@synthesize underlyingDataSource=_underlyingDataSource - In the implementation block
@property (nonatomic,readonly) long long sectionCount; 
-(void)removeSection:(long long)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)dealloc;
-(void)setUnderlyingDataSource:(GKBasicCollectionViewDataSource *)arg1 ;
-(void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2 ;
-(void)setFilterPredicate:(id)arg1 forSection:(long long)arg2 ;
-(id)sectionInfoForSection:(long long)arg1 ;
-(id)init;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)configureDataSource;
-(id)itemsForSection:(long long)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllSections;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(void)refreshAdditionalInfoForDataType:(unsigned)arg1 updateNotifier:(id)arg2 ;
-(id)filteredItemsForRawItems:(id)arg1 ;
-(void)setItems:(id)arg1 forSection:(long long)arg2 ;
-(void)willUpdateSectionsWithItems:(id)arg1 ;
-(void)setSortDescriptors:(id)arg1 forSection:(long long)arg2 ;
-(NSMutableDictionary *)sectionToSectionInfo;
-(void)setSectionToSectionInfo:(NSMutableDictionary *)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(long long)sectionCount;
-(GKBasicCollectionViewDataSource *)underlyingDataSource;
@end

