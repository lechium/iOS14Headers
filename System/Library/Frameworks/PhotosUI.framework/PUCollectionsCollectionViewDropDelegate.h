/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKit/UICollectionViewDropDelegate.h>

@protocol PUCollectionsCollectionViewDropDataProvider;
@class NSString;

@interface PUCollectionsCollectionViewDropDelegate : NSObject <UICollectionViewDropDelegate> {

	BOOL _dataProviderImplementsAllowDrop;
	id<PUCollectionsCollectionViewDropDataProvider> _dropDataProvider;

}

@property (assign,nonatomic,__weak) id<PUCollectionsCollectionViewDropDataProvider> dropDataProvider;              //@synthesize dropDataProvider=_dropDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(id)_collectionAtIndexPath:(id)arg1 ;
-(void)_handleDrop:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id<PUCollectionsCollectionViewDropDataProvider>)dropDataProvider;
-(void)setDropDataProvider:(id<PUCollectionsCollectionViewDropDataProvider>)arg1 ;
-(BOOL)_canHandleDropSession:(id)arg1 ;
-(BOOL)_allowDrop;
@end
