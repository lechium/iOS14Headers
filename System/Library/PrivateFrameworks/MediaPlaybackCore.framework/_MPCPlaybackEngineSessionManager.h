/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/MPNowPlayingPlaybackQueueDataSource.h>

@protocol OS_dispatch_queue;
@class MPCPlaybackEngine, NSObject, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSMutableArray, NSMutableDictionary, MPCPlayerPath, NSString;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingPlaybackQueueDataSource> {

	MPCPlaybackEngine* _playbackEngine;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MPNowPlayingInfoCenter* _infoCenter;
	MPRemoteCommandCenter* _commandCenter;
	NSMutableArray* _sessionArchives;
	NSMutableDictionary* _sessionIdentifierArchiveMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                       //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoCenter * infoCenter;                            //@synthesize infoCenter=_infoCenter - In the implementation block
@property (nonatomic,readonly) MPRemoteCommandCenter * commandCenter;                          //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sessionArchives;                               //@synthesize sessionArchives=_sessionArchives - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessionIdentifierArchiveMap;              //@synthesize sessionIdentifierArchiveMap=_sessionIdentifierArchiveMap - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                      //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) NSString * stateRestorationSessionIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivesAtURL:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)saveSessionWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setStateRestorationSessionIdentifier:(NSString *)arg1 ;
-(void)loadSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)stateRestorationSessionIdentifier;
-(MPCPlayerPath *)playerPath;
-(void)_performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)sessionIdentifierArchiveMap;
-(void)publishIfNeeded;
-(id)_playbackSessionsDirectory;
-(id)_cachesDirectory;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2 ;
-(MPRemoteCommandCenter *)commandCenter;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2 ;
-(void)deleteSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)sessionArchives;
-(MPNowPlayingInfoCenter *)infoCenter;
@end

