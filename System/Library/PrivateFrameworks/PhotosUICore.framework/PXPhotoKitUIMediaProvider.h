/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableArray, NSObject, PHAssetResourceQualityClass, PXPhotoKitThumbnailCache, PHImageManager, PHCachingImageManager;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {

	NSArray* _thumbnailQualityClasses;
	NSArray* _thumbnailCaches;
	CGSize _masterThumbnailSize;
	Aq _lastActivity;
	os_unfair_lock_s _preheatlock;
	NSMutableArray* _preheatLock_preheatStates;
	NSObject*<OS_dispatch_queue> _preheatQueue;
	unsigned long long _preheatQueue_state;
	os_unfair_lock_s _lock;
	CGSize _lock_lastTargetSize;
	long long _lock_lastQualityClassIndex;
	PHAssetResourceQualityClass* _lock_lastResourceQualityClass;
	PXPhotoKitThumbnailCache* _lock_lastThumbnailCache;
	PHImageManager* _imageManager;
	PHCachingImageManager* _cachingImageManager;

}

@property (nonatomic,readonly) PHImageManager * imageManager;                            //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * cachingImageManager;              //@synthesize cachingImageManager=_cachingImageManager - In the implementation block
+(id)defaultMediaProvider;
-(void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(CGSize)arg3 ;
-(void)_preheatQueue_schedulePreheat;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)_preheatQueue_scheduleUpdateAfterDelay;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_schedulePreheat;
-(void)_preheatQueue_update;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_thumbnailDataForAsset:(id)arg1 qualityClass:(id)arg2 cache:(id)arg3 onlyFromCache:(BOOL)arg4 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg5 ;
-(id)init;
-(void)enumerateAvailableThumbnailDataFormats:(/*^block*/id)arg1 ;
-(CGSize)masterThumbnailSize;
-(void)_getQualityClass:(id*)arg1 cache:(id*)arg2 qualityClassIndex:(long long*)arg3 forTargetSize:(CGSize)arg4 ;
-(PHCachingImageManager *)cachingImageManager;
-(void)_noteActivity;
-(void)_setPreheatInfo:(id)arg1 forQualityClassIndex:(long long)arg2 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(void)stopCachingImagesForAllAssets;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)initWithImageManager:(id)arg1 ;
-(PHImageManager *)imageManager;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_preheatInfoForQualityClassIndex:(long long)arg1 ;
@end

