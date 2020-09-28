/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestContextDelegate.h>

@class NSMapTable, PHPhotoLibrary, NSString;

@interface PHImageManager : NSObject <PHMediaRequestContextDelegate> {

	NSMapTable* _requestContextsByID;
	Ai _nextRequestID;
	os_unfair_lock_s _lock;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _managerID;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long managerID;               //@synthesize managerID=_managerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(BOOL)arg3 ;
+(void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)buildExportSessionFromVideoURL:(id)arg1 infoDictionary:(id)arg2 exportPreset:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2 ;
+(unsigned long long)_nextManagerID;
-(PHPhotoLibrary *)photoLibrary;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)nextID;
-(int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)init;
-(void)mediaRequestContextDidFinish:(id)arg1 ;
-(void)_handleActivityForMediaContext:(id)arg1 ;
-(void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)arg1 options:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)_canStreamVideoForAsset:(id)arg1 ;
-(int)runRequestWithContext:(id)arg1 ;
-(void)_prepareLivePhotoResultWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 shouldIncludeVideo:(BOOL)arg3 videoURL:(id)arg4 info:(id)arg5 photoTime:(SCD_Struct_PH9)arg6 asset:(id)arg7 completion:(/*^block*/id)arg8 ;
-(int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)synchronousImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(int)requestNewCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)_requestLiveRenderAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)arg1 options:(id)arg2 ;
-(int)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestAVProxyForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageDataAndOrientationForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(BOOL*)arg3 didFindImage:(BOOL*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)cancelImageRequest:(int)arg1 ;
-(unsigned long long)hash;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(unsigned long long)managerID;
@end
