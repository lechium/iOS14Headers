/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PHAsset, NSObject, NSString, AVAsset, AVVideoComposition, NSURL, PHSandboxExtensionWrapper, PHImageManager;

@interface PHLivePhoto : NSObject <NSItemProviderReading, NSCopying, NSSecureCoding> {

	PHAsset* _asset;
	NSObject* _plImage;
	BOOL _skipInstantiatingImageAndAVAsset;
	float _audioVolume;
	NSString* _uniqueIdentifier;
	NSString* _assetUUID;
	AVAsset* _videoAsset;
	unsigned long long _options;
	AVVideoComposition* _videoComposition;
	NSString* _assetLocalIdentifier;
	NSURL* _imageURL;
	PHSandboxExtensionWrapper* _imageURLSandboxExtensionWrapper;
	NSURL* _videoURL;
	PHSandboxExtensionWrapper* _videoURLSandboxExtensionWrapper;
	long long _contentMode;
	PHImageManager* _imageManager;
	CGSize _size;
	CGSize _targetSize;
	SCD_Struct_PH9 _photoTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * assetUUID;                                                //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                                     //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH9 photoTime;                                                 //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) AVVideoComposition * videoComposition;                               //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                                     //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (readonly) NSString * uniqueIdentifier;                                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                                         //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) PHSandboxExtensionWrapper * imageURLSandboxExtensionWrapper;              //@synthesize imageURLSandboxExtensionWrapper=_imageURLSandboxExtensionWrapper - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) PHSandboxExtensionWrapper * videoURLSandboxExtensionWrapper;              //@synthesize videoURLSandboxExtensionWrapper=_videoURLSandboxExtensionWrapper - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSString * imageTypeIdentifier; 
@property (nonatomic,readonly) NSString * videoTypeIdentifier; 
@property (nonatomic,copy,readonly) id imageFileLoader; 
@property (nonatomic,copy,readonly) id videoFileLoader; 
@property (nonatomic,readonly) CGSize targetSize;                                                        //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                                                    //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                          //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,nonatomic) BOOL skipInstantiatingImageAndAVAsset;                                      //@synthesize skipInstantiatingImageAndAVAsset=_skipInstantiatingImageAndAVAsset - In the implementation block
@property (assign,nonatomic,__weak) PHImageManager * imageManager;                                       //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                              //@synthesize size=_size - In the implementation block
+(id)livePhotoWithResourceFileURLs:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)readableTypeIdentifiersForItemProvider;
+(SCD_Struct_PH9)_photoTimeForLivePhotoWithImageURL:(id)arg1 videoURL:(id)arg2 ;
+(int)requestLivePhotoWithResourceFileURLs:(id)arg1 placeholderImage:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 resultHandler:(/*^block*/id)arg5 ;
+(void)cancelLivePhotoRequestWithRequestID:(int)arg1 ;
+(id)loopingLivePhotoWithResourceFileURLs:(id)arg1 skipInstantiatingImageAndAVAsset:(BOOL)arg2 error:(id*)arg3 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 skipInstantiatingImageAndAVAsset:(BOOL)arg4 error:(id*)arg5 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 skipValidation:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
+(BOOL)_canCreateLoopingLivePhotoWithURLs:(id)arg1 outError:(id*)arg2 ;
+(id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 skipValidation:(BOOL)arg4 isLooping:(BOOL)arg5 skipInstantiatingImageAndAVAsset:(BOOL)arg6 error:(id*)arg7 ;
+(BOOL)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4 ;
+(BOOL)_validateFileURLs:(id)arg1 withValidationOptions:(unsigned long long)arg2 outError:(id*)arg3 ;
-(void)setAudioVolume:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)assetUUID;
-(NSURL *)videoURL;
-(PHAsset *)asset;
-(unsigned long long)options;
-(SCD_Struct_PH9)photoTime;
-(NSString *)assetLocalIdentifier;
-(id)videoComplement;
-(id)_imageManager;
-(id)initWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(SCD_Struct_PH9)arg4 asset:(id)arg5 options:(unsigned long long)arg6 ;
-(id)initWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(SCD_Struct_PH9)arg4 asset:(id)arg5 ;
-(NSString *)imageTypeIdentifier;
-(id)imageFileLoader;
-(id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 ;
-(id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 skipInstantiatingImageAndAVAsset:(BOOL)arg5 ;
-(BOOL)_synchronouslyLoadImageURL:(id*)arg1 videoURL:(id*)arg2 error:(id*)arg3 ;
-(AVAsset *)videoAsset;
-(id)initWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(SCD_Struct_PH9)arg4 asset:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7 ;
-(id)initWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(SCD_Struct_PH9)arg4 assetUUID:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7 ;
-(void)_ensureConstituentData;
-(id)_initWithImage:(CGImageRef)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(SCD_Struct_PH9)arg4 asset:(id)arg5 assetUUID:(id)arg6 options:(unsigned long long)arg7 videoComposition:(id)arg8 ;
-(NSString *)videoTypeIdentifier;
-(id)videoFileLoader;
-(PHSandboxExtensionWrapper *)imageURLSandboxExtensionWrapper;
-(void)_loadConstituentURLsWithNetworkAccessAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PHSandboxExtensionWrapper *)videoURLSandboxExtensionWrapper;
-(BOOL)skipInstantiatingImageAndAVAsset;
-(void)setSkipInstantiatingImageAndAVAsset:(BOOL)arg1 ;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(NSString *)originalFilename;
-(NSString *)uniqueIdentifier;
-(id)initWithBundleAtURL:(id)arg1 ;
-(id)image;
-(id)initWithCoder:(id)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)contentMode;
-(CGSize)size;
-(BOOL)hasPhotoColorAdjustments;
-(float)audioVolume;
-(CGSize)targetSize;
-(PHImageManager *)imageManager;
-(NSURL *)imageURL;
-(void)saveToPhotoLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
@end
