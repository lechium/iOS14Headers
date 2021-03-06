/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PHAssetCollectionDataSource;
@class NSHashTable, NSMapTable, NSMutableSet, NSSet, NSOrderedSet, NSDictionary, NSArray, PXSelectionSnapshot;

@interface PUPhotoSelectionManager : NSObject <NSCopying> {

	NSHashTable* _changeObservers;
	NSMapTable* _selectionEntriesByAssetCollection;
	NSMutableSet* _uniqueAssetSelection;
	long long _selectionChangeCount;
	long long _options;
	id<PHAssetCollectionDataSource> _dataSource;

}

@property (nonatomic,readonly) long long options;                                            //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PHAssetCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isAnyAssetSelected; 
@property (nonatomic,readonly) NSSet * selectedAssets; 
@property (nonatomic,readonly) NSOrderedSet * orderedSelectedAssets; 
@property (nonatomic,readonly) NSDictionary * selectedAssetsByAssetCollection; 
@property (nonatomic,readonly) NSArray * selectedAssetCollections; 
@property (nonatomic,readonly) PXSelectionSnapshot * selectionSnapshot; 
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)selectedAssetsWithAssetCollectionOrdering:(id)arg1 ;
-(NSOrderedSet *)orderedSelectedAssets;
-(void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)setDataSource:(id<PHAssetCollectionDataSource>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAnyAssetSelectedInAssetCollection:(id)arg1 ;
-(long long)options;
-(id)init;
-(id)initWithOptions:(long long)arg1 ;
-(id<PHAssetCollectionDataSource>)dataSource;
-(void)selectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(PXSelectionSnapshot *)selectionSnapshot;
-(PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
-(BOOL)areAllAssetsSelectedInAssetCollection:(id)arg1 ;
-(void)deselectAllAssets;
-(id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)deselectAssetAtIndex:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)deselectAllAssetsInAssetCollections:(id)arg1 ;
-(BOOL)isAnyAssetSelectedInAssetCollections:(id)arg1 ;
-(BOOL)isAssetAtIndexSelected:(unsigned long long)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)areAllAssetsSelectedInAssetCollections:(id)arg1 ;
-(id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1 ;
-(void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_endSelectionChange;
-(NSArray *)selectedAssetCollections;
-(id)localizedSelectionString;
-(void)handlePhotoLibraryChange:(id)arg1 ;
-(void)invalidateAllAssetIndexes;
-(void)_beginSelectionChange;
-(BOOL)_shouldUniqueAssets;
-(NSDictionary *)selectedAssetsByAssetCollection;
-(NSSet *)selectedAssets;
-(BOOL)isAnyAssetSelected;
-(void)selectAllAssetsInAssetCollections:(id)arg1 ;
@end

