/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHFetchResult, NSString;

@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver> {

	PHFetchResult* _importSessions;

}

@property (nonatomic,retain) PHFetchResult * importSessions;              //@synthesize importSessions=_importSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateFlowLayout:(id)arg1 withBounds:(CGRect)arg2 traitCollection:(id)arg3 ;
-(void)_updateTitle;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)viewDidLoad;
-(PHFetchResult *)importSessions;
-(void)setImportSessions:(PHFetchResult *)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)_scrollToBottom:(id)arg1 ;
-(id)_assetForIndexPath:(id)arg1 ;
-(id)_assetsForSection:(long long)arg1 ;
@end

