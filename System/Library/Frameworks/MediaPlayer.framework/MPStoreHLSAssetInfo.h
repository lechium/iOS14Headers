/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject {

	ICStoreHLSAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * playlistURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (nonatomic,copy,readonly) NSURL * alternatePlaylistURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(BOOL)isiTunesStoreStream;
-(id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1 ;
-(NSURL *)playlistURL;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(NSURL *)alternatePlaylistURL;
-(NSURL *)alternateKeyCertificateURL;
-(NSURL *)alternateKeyServerURL;
@end

