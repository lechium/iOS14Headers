/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DOCThumbnailRequest : NSObject {

	/*^block*/id _thumbnailGenerationRequiresDownloadHandler;

}

@property (nonatomic,copy) id thumbnailGenerationRequiresDownloadHandler;              //@synthesize thumbnailGenerationRequiresDownloadHandler=_thumbnailGenerationRequiresDownloadHandler - In the implementation block
+(id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
+(id)iconRequestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
+(id)requestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3 ;
-(void)cancel;
-(void)setThumbnailGenerationRequiresDownloadHandler:(id)arg1 ;
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)thumbnailGenerationRequiresDownloadHandler;
@end

