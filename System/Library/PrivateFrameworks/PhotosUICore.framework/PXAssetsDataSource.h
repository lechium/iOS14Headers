/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSPredicate;

@interface PXAssetsDataSource : PXSectionedDataSource {

	long long _cachedNumberOfAssets;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	unsigned long long _estimatedOtherCount;

}

@property (nonatomic,readonly) id<PXDisplayCollection> containerCollection; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> firstAssetCollection; 
@property (nonatomic,readonly) id<PXDisplayAssetCollection> lastAssetCollection; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                        //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                        //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedOtherCount;                         //@synthesize estimatedOtherCount=_estimatedOtherCount - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) long long startingSection; 
@property (nonatomic,readonly) BOOL startsAtEnd; 
@property (nonatomic,readonly) BOOL isFiltered; 
@property (nonatomic,readonly) NSPredicate * filterPredicate; 
@property (nonatomic,readonly) BOOL isSorted; 
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset; 
@property (nonatomic,readonly) BOOL areAllSectionsConsideredAccurate; 
-(NSPredicate *)filterPredicate;
-(id<PXDisplayCollection>)containerCollection;
-(unsigned long long)numberOfAssets;
-(long long)numberOfCuratedItemsInAssetCollection:(id)arg1 ;
-(id)startingAssetReference;
-(id)metadataAssetAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForAssetReference:(id)arg1 ;
-(BOOL)isFilteringAssetCollection:(id)arg1 ;
-(long long)numberOfCuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfUncuratedItemsInAssetCollection:(id)arg1 ;
-(unsigned long long)estimatedAssetCountForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 ;
-(BOOL)startsAtEnd;
-(id)assetCollectionAtSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)assetCollectionReferenceAtSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForAssetCollectionReference:(id)arg1 ;
-(id)assetCollectionReferenceForAssetCollectionReference:(id)arg1 ;
-(BOOL)isFilteringSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)isFilteringDisabledForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)keyAssetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)keyAssetsForAssetCollection:(id)arg1 ;
-(unsigned long long)estimatedVideosCount;
-(id)objectReferenceNearestToObjectReference:(id)arg1 ;
-(BOOL)isFiltered;
-(unsigned long long)estimatedOtherCount;
-(id)assetIdentifierAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectReferenceNearestToObjectReference:(id)arg1 inSection:(long long)arg2 ;
-(id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id*)arg2 ;
-(id)assetAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1 ;
-(long long)aggregateMediaType;
-(long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1 ;
-(id<PXDisplayAssetCollection>)lastAssetCollection;
-(BOOL)isSorted;
-(long long)startingSection;
-(id<PXDisplayAssetCollection>)firstAssetCollection;
-(id)photosGraphSuggestedContributions;
-(id)assetsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectIDAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(Class)objectReferenceClassForSection;
-(Class)objectReferenceClassForItem;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(PXSimpleIndexPath)arg1 ;
-(BOOL)isFilteringDisabledForAssetCollection:(id)arg1 ;
-(id)assetReferenceForAssetReference:(id)arg1 ;
-(id)assetReferenceAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)assetCollectionReferenceNearestToObjectReference:(id)arg1 ;
-(BOOL)hasCurationForAssetCollection:(id)arg1 ;
-(long long)numberOfUncuratedItemsInSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)areAllSectionsConsideredAccurate;
-(unsigned long long)estimatedPhotosCount;
-(long long)totalNumberOfItems;
-(id<PXDisplayAsset>)keyAsset;
@end
