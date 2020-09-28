/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSURLSessionDownloadTask;

@interface VUIARAssetRequest : NSObject {

	BOOL _isDownloading;
	NSURL* _remoteURL;
	NSURL* _shareURL;
	NSString* _fileName;
	NSURLSessionDownloadTask* _task;
	/*^block*/id _completionHandler;
	NSString* _cacheKey;

}

@property (nonatomic,retain) NSString * fileName;                          //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                            //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                             //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
-(NSString *)cacheKey;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSURLSessionDownloadTask *)task;
-(void)setIsDownloading:(BOOL)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSURL *)shareURL;
-(BOOL)isDownloading;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)setTask:(NSURLSessionDownloadTask *)arg1 ;
-(NSURL *)remoteURL;
-(void)cancelDownload;
-(void)setCacheKey:(NSString *)arg1 ;
-(id)cachePath;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)recordLog:(id)arg1 ;
-(id)cacheDownloadedFileFromLocation:(id)arg1 ;
-(id)initWithRemoteURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3 ;
-(void)startDownloadWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_prefixForString:(id)arg1 ;
@end
