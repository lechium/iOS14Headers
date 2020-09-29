/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCollectionsDataSource.h>

@class PHFetchResult;

@interface PXTransientCollectionsDataSource : PXCollectionsDataSource {

	PHFetchResult* _fetchResult;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)init;
-(long long)numberOfSections;
-(id)indexPathForCollection:(id)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(id)initWithFetchResult:(id)arg1 ;
-(PHFetchResult *)fetchResult;
-(id)collectionListForSection:(long long)arg1 ;
-(id)collectionAtIndexPath:(id)arg1 ;
@end
