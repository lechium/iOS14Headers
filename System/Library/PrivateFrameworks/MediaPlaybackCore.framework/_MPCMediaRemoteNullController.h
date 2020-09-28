/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {

	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _contentItemForIdentifierFuture;
	MPCFuture* _contentItemArtworkForIdentifierFuture;

}
+(BOOL)_shouldRegisterForNotifications;
-(id)playQueueIdentifiersForRequest:(void*)arg1 ;
-(id)contentItemForIdentifier:(id)arg1 ;
-(id)playingIdentifier;
-(long long)playingIdentifierCacheState;
-(id)_init;
-(id)supportedCommands;
-(id)playQueueIdentifiersForRange:(MSVSignedRange)arg1 ;
-(id)playbackState;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(CGSize)arg3 ;
-(long long)contentItemCacheStateForIdentifier:(id)arg1 ;
-(void)invalidateAllTokens;
-(long long)supportedCommandsCacheState;
-(long long)playbackStateCacheState;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(long long)playQueueIdentifiersCacheStateForRange:(MSVSignedRange)arg1 ;
@end
