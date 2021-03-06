/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, NSString, PHImageRequestOptions;

@interface _PXPhotoKitAdjustedUIImageRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	BOOL _hasReturnedAdjustedResult;
	int _currentVersionRequestID;
	NSString* _uniqueContentIdentifier;
	CGSize _targetSize;
	long long _contentMode;
	PHImageRequestOptions* _options;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) CGSize targetSize;                            //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                        //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
+(id)memoryCache;
-(void)cancel;
-(PHImageRequestOptions *)options;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(id)_cachedImageURL;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 contentMode:(long long)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)memoryCachedImage;
-(void)cacheImageInMemory:(id)arg1 ;
-(id)_unscaledCachedImageURL;
-(id)_existingCachedImageURL;
-(id)memoryCacheKey;
-(BOOL)_deliverCachedImageIfPossible;
-(BOOL)_deliverCachedUnscaledImageIfPossible;
-(void)_handleCurrentVersionImageResult:(id)arg1 info:(id)arg2 ;
-(void)_handleImageWasCached;
-(void)start;
-(void)_handleRenderedImage:(id)arg1 error:(id)arg2 ;
-(void)_handleRenderingFinishedWithData:(id)arg1 destinationURL:(id)arg2 targetSize:(CGSize)arg3 ;
-(long long)contentMode;
-(id)resultHandler;
-(CGSize)targetSize;
@end

