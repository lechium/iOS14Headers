/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, PXLoadingStatusManager;

@interface PXMediaProvider : NSObject {

	NSArray* _availableThumbnailSizes;
	PXLoadingStatusManager* _loadingStatusManager;

}

@property (nonatomic,readonly) NSArray * availableThumbnailSizes; 
@property (nonatomic,readonly) CGSize masterThumbnailSize; 
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;              //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
+(id)preheatQueue;
-(PXLoadingStatusManager *)loadingStatusManager;
-(void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(CGSize)arg3 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(NSArray *)availableThumbnailSizes;
-(void)enumerateAvailableThumbnailDataFormats:(/*^block*/id)arg1 ;
-(CGSize)masterThumbnailSize;
-(void)cancelImageRequest:(long long)arg1 ;
-(void)stopCachingImagesForAllAssets;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

