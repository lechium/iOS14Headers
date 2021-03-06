/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>
#import <libobjc.A.dylib/MRTransactionSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MRPlaybackQueue, NSArray, NSDictionary, MRNowPlayingArtwork, NSDate, NSMutableDictionary, NSMutableArray, MRPlayerPath, MRPlaybackQueueSubscriptionController, MRNowPlayingPlayerClientCallbacks, MRContentItem;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRPlaybackQueue* _playbackQueue;
	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;
	NSDate* _playbackStateDate;
	unsigned long long _capabilities;
	NSDate* _lastReceivedCommandDate;
	NSDate* _activeRequestedDate;
	BOOL _pictureInPictureEnabled;
	BOOL _invalidatingPlaybackQueue;
	double _invalidatationTimestamp;
	NSMutableDictionary* _coelscingTransactionPackets;
	NSMutableArray* _transactionSources;
	NSMutableDictionary* _pendingPlaybackSessionMigrateEvents;
	NSMutableDictionary* _cachedContentItemChangedForPendingPlaybackQueueRequest;
	NSMutableArray* _enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
	MRPlayerPath* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;
	MRNowPlayingPlayerClientCallbacks* _clientCallbacks;

}

@property (assign,nonatomic) BOOL invalidatingPlaybackQueue; 
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                     //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSArray * supportedCommands; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork; 
@property (nonatomic,readonly) unsigned playbackState; 
@property (assign,nonatomic) double invalidatationTimestamp; 
@property (nonatomic,retain) MRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic) unsigned long long capabilities; 
@property (nonatomic,readonly) MRContentItem * nowPlayingContentItem; 
@property (nonatomic,readonly) BOOL hasReceivedCommandRecently; 
@property (assign,getter=isPictureInPictureEnabled,nonatomic) BOOL pictureInPictureEnabled; 
@property (nonatomic,retain) NSDate * activeRequestedDate; 
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) MRNowPlayingPlayerClientCallbacks * clientCallbacks;                         //@synthesize clientCallbacks=_clientCallbacks - In the implementation block
-(NSDictionary *)nowPlayingInfo;
-(void)restoreNowPlayingClientState;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(id)resolveCommandOptions:(unsigned)arg1 options:(id)arg2 ;
-(void)setPictureInPictureEnabled:(BOOL)arg1 ;
-(BOOL)removePendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(BOOL)hasReceivedCommandRecently;
-(unsigned long long)capabilities;
-(void)setActiveRequestedDate:(NSDate *)arg1 ;
-(void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2 ;
-(MRNowPlayingPlayerClientCallbacks *)clientCallbacks;
-(id)debugDescription;
-(void)flushPendingPlaybackSessionMigrateEvents:(/*^block*/id)arg1 ;
-(void)setInvalidatingPlaybackQueue:(BOOL)arg1 ;
-(unsigned)resolveCommand:(unsigned)arg1 ;
-(void)addPendingPlaybackSessionMigrateEvent:(id)arg1 ;
-(void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2 ;
-(MRContentItem *)nowPlayingContentItem;
-(void)updatePlaybackState:(unsigned)arg1 date:(id)arg2 ;
-(void)invalidatePlaybackQueue;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(void)updatePlayer:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(BOOL)isPictureInPictureEnabled;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(MRPlaybackQueue *)playbackQueue;
-(void)beginSendingTransactions;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
-(void)endSendingTransactions;
-(void)setInvalidatationTimestamp:(double)arg1 ;
-(void)clearCachedContentItemArtworkForItems:(id)arg1 ;
-(NSArray *)supportedCommands;
-(double)invalidatationTimestamp;
-(BOOL)invalidatingPlaybackQueue;
-(id)initWithPlayerPath:(id)arg1 ;
-(unsigned)playbackState;
-(void)addPendingRequest:(id)arg1 ;
-(void)sendContentItemChanges:(id)arg1 ;
-(void)invalidatePlaybackQueueWithPlaybackQueue:(id)arg1 ;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(NSDate *)activeRequestedDate;
-(void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 ;
-(id)description;
-(void)transactionDidEnd:(id)arg1 ;
-(void)setPlaybackQueue:(MRPlaybackQueue *)arg1 ;
@end

