/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaPlaylist;

@interface _NMSyncDefaultsAssociatedObject : NSObject {

	MPMediaPlaylist* _assetSyncPlaylist;

}

@property (nonatomic,retain) MPMediaPlaylist * assetSyncPlaylist;              //@synthesize assetSyncPlaylist=_assetSyncPlaylist - In the implementation block
-(void)dealloc;
-(MPMediaPlaylist *)assetSyncPlaylist;
-(id)init;
-(void)setAssetSyncPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
@end

