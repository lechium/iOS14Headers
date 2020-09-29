/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface PXMediaTypeInfoManager : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _pendingCompletionHandlers;

}
+(id)knowledgeBaseFallbackURL;
+(id)sharedManager;
-(void)_installMobileAssetAsUserInitiated:(BOOL)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleAssetDownloadProgressWithAsset:(id)arg1 error:(id)arg2 ;
-(void)_handleAssetQueryCallbackWithAsset:(id)arg1 error:(id)arg2 userInitiated:(BOOL)arg3 ;
-(id)_init;
-(id)init;
-(void)mediaTypeInfoURLForUTI:(id)arg1 codecName:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)prepareInformationForLookups;
-(void)_handleInstallMobileAssetCallbackWithAsset:(id)arg1 UTI:(id)arg2 codecName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processPendingCallbacksWithAsset:(id)arg1 ;
-(void)_prepareInformationForLookups;
@end
