/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMCameraClipFetchAssetContextOperationDataSource;
@class HMCameraClip, HMCameraClipPosterFrame, NSURL, HMCameraClipManager, NSString;

@interface HMCameraClipPosterFrameDownloadOperation : HMFOperation <HMFLogging> {

	HMCameraClip* _clip;
	HMCameraClipPosterFrame* _posterFrame;
	NSURL* _destinationFileURL;
	/*^block*/id _downloadPosterFrameCompletionBlock;
	HMCameraClipManager* _clipManager;
	id<HMCameraClipFetchAssetContextOperationDataSource> _dataSource;

}

@property (readonly) HMCameraClipManager * clipManager;                                            //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMCameraClip * clip;                                                          //@synthesize clip=_clip - In the implementation block
@property (readonly) HMCameraClipPosterFrame * posterFrame;                                        //@synthesize posterFrame=_posterFrame - In the implementation block
@property (copy) NSURL * destinationFileURL;                                                       //@synthesize destinationFileURL=_destinationFileURL - In the implementation block
@property (copy) id downloadPosterFrameCompletionBlock;                                            //@synthesize downloadPosterFrameCompletionBlock=_downloadPosterFrameCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMCameraClip *)clip;
-(HMCameraClipManager *)clipManager;
-(void)cancelWithError:(id)arg1 ;
-(HMCameraClipPosterFrame *)posterFrame;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 dataSource:(id)arg4 ;
-(id)downloadPosterFrameCompletionBlock;
-(id)fetchImageData;
-(id)writeImageData:(id)arg1 ;
-(void)finishWithImageData:(id)arg1 ;
-(id)fetchAssetContext;
-(id)downloadImageDataForAssetContext:(id)arg1 ;
-(id)decryptData:(id)arg1 ;
-(id)initWithClipManager:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 ;
-(void)setDownloadPosterFrameCompletionBlock:(id)arg1 ;
-(NSURL *)destinationFileURL;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(id<HMCameraClipFetchAssetContextOperationDataSource>)dataSource;
-(id)logIdentifier;
-(void)main;
-(NSString *)description;
@end

