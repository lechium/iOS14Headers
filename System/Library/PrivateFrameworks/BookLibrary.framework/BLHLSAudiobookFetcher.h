/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(id)preferredStreamFromMasterPlaylist:(id)arg1 ;
-(id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2 bundleID:(id)arg3 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURLSession *)session;
@end

