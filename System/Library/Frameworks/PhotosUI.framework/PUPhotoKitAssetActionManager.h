/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAssetActionManager.h>

@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager {

	BOOL _enableNavigateToPhotos;
	PUPhotoKitDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) PUPhotoKitDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL enableNavigateToPhotos;                                  //@synthesize enableNavigateToPhotos=_enableNavigateToPhotos - In the implementation block
+(Class)actionPerformerClassForActionType:(unsigned long long)arg1 ;
-(PUPhotoKitDataSourceManager *)dataSourceManager;
-(id)_photosDataSource;
-(void)setDataSourceManager:(PUPhotoKitDataSourceManager *)arg1 ;
-(id)_photoKitAssetsDataSource;
-(BOOL)_actionTypeIsSimple:(unsigned long long)arg1 ;
-(BOOL)enableNavigateToPhotos;
-(void)setEnableNavigateToPhotos:(BOOL)arg1 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2 ;
@end

