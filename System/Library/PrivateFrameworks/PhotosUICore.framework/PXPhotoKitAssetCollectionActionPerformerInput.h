/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PHFetchResult, PXAssetReference, PXAssetsDataSource;


@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>
@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@optional
-(PHFetchResult *)people;
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetsDataSource *)assetsDataSource;
-(id<UIDropSession>)dropSession;
-(PHFetchResult *)assetsFetchResult;
-(id<UIDragSession>)dragSession;

@end
