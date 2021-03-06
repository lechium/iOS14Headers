/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SVVideoMetadata.h>

@protocol SXVideoProviding, SXVideoPlaybackHost, SXAVPlayerFactory;
@class NSObject, NSError, NSHashTable, SXAVPlayer, SVKeyValueObserver, SVTimeline, NSArray, NSString;

@interface SXPlaybackCoordinator : NSObject <SVVideoMetadata> {

	BOOL _playbackLikelyToKeepUp;
	BOOL _playbackBufferFull;
	BOOL _muted;
	BOOL _playbackRequested;
	BOOL _initiatedPlayback;
	id<SXVideoProviding> _video;
	unsigned long long _state;
	NSObject*<SXVideoPlaybackHost> _host;
	NSError* _error;
	NSHashTable* _observers;
	SXAVPlayer* _player;
	/*^block*/id _cancelHandler;
	SVKeyValueObserver* _playerItemPresentationSizeObserver;
	SVKeyValueObserver* _readyForDisplayObserver;
	id<SXAVPlayerFactory> _playerFactory;
	SVKeyValueObserver* _muteStateObserver;
	SVKeyValueObserver* _playbackLikelyToKeepUpObserver;
	SVKeyValueObserver* _playbackBufferFullObserver;
	SVTimeline* _timeline;
	double _pausedAtTime;
	CGSize _dimensions;

}

@property (assign,nonatomic) BOOL playbackRequested;                                               //@synthesize playbackRequested=_playbackRequested - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                            //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (assign,nonatomic) BOOL initiatedPlayback;                                               //@synthesize initiatedPlayback=_initiatedPlayback - In the implementation block
@property (assign,nonatomic) CGSize dimensions;                                                    //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playerItemPresentationSizeObserver;              //@synthesize playerItemPresentationSizeObserver=_playerItemPresentationSizeObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * readyForDisplayObserver;                         //@synthesize readyForDisplayObserver=_readyForDisplayObserver - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id<SXAVPlayerFactory> playerFactory;                                //@synthesize playerFactory=_playerFactory - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * muteStateObserver;                               //@synthesize muteStateObserver=_muteStateObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playbackLikelyToKeepUpObserver;                  //@synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playbackBufferFullObserver;                      //@synthesize playbackBufferFullObserver=_playbackBufferFullObserver - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                              //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic) double pausedAtTime;                                                  //@synthesize pausedAtTime=_pausedAtTime - In the implementation block
@property (nonatomic,readonly) id<SXVideoProviding> video;                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,readonly) double loadingProgress; 
@property (nonatomic,readonly) BOOL playbackLikelyToKeepUp;                                        //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,readonly) BOOL playbackBufferFull;                                            //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<SXVideoPlaybackHost> host;                           //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                           //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double framerate; 
@property (nonatomic,readonly) double timePlayed; 
@property (nonatomic,readonly) double volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<SXVideoPlaybackHost>)host;
-(SXAVPlayer *)player;
-(double)time;
-(void)setHost:(NSObject*<SXVideoPlaybackHost>)arg1 ;
-(BOOL)muted;
-(void)load;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(void)pause;
-(NSHashTable *)observers;
-(id<SXVideoProviding>)video;
-(id)cancelHandler;
-(double)duration;
-(double)volume;
-(NSArray *)loadedTimeRanges;
-(void)setMuted:(BOOL)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(double)framerate;
-(void)setDimensions:(CGSize)arg1 ;
-(double)timePlayed;
-(void)setCancelHandler:(id)arg1 ;
-(BOOL)playbackBufferFull;
-(BOOL)playbackLikelyToKeepUp;
-(SVTimeline *)timeline;
-(unsigned long long)state;
-(void)addPlaybackObserver:(id)arg1 ;
-(void)stateChanged;
-(void)removePlaybackObserver:(id)arg1 ;
-(double)loadingProgress;
-(CGSize)dimensions;
-(void)playbackReadyToStart;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg1 ;
-(void)timeElapsed:(double)arg1 duration:(double)arg2 ;
-(void)loadedTimeRangesChanged;
-(double)pausedAtTime;
-(void)setPausedAtTime:(double)arg1 ;
-(void)loadVideoIfNeeded;
-(void)setupPlayerWithURL:(id)arg1 ;
-(id<SXAVPlayerFactory>)playerFactory;
-(void)addPlayerItemPresentationSizeObserver;
-(void)addMuteStateObserver;
-(void)addPlaybackBuferObserver;
-(void)addPlaybackLikelyToKeepUpObserver;
-(BOOL)initiatedPlayback;
-(void)setPlaybackRequested:(BOOL)arg1 ;
-(void)setInitiatedPlayback:(BOOL)arg1 ;
-(void)configureTimeline;
-(void)playbackPausedAtTime:(double)arg1 ;
-(void)playbackResumedAtTime:(double)arg1 ;
-(void)playbackBufferFullStateChanged;
-(void)setPlaybackBufferFullObserver:(SVKeyValueObserver *)arg1 ;
-(void)playbackLikelyToKeepUpStateChanged;
-(void)setPlaybackLikelyToKeepUpObserver:(SVKeyValueObserver *)arg1 ;
-(void)muteStateChanged;
-(void)setMuteStateObserver:(SVKeyValueObserver *)arg1 ;
-(void)setPlayerItemPresentationSizeObserver:(SVKeyValueObserver *)arg1 ;
-(BOOL)supportImpressionTracking;
-(BOOL)supportsQuartileTracking;
-(id)initWithVideo:(id)arg1 playerFactory:(id)arg2 ;
-(void)playWithButtonTapped:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)removePlayerItemPresentationSizeObserver;
-(BOOL)playbackRequested;
-(SVKeyValueObserver *)playerItemPresentationSizeObserver;
-(SVKeyValueObserver *)readyForDisplayObserver;
-(void)setReadyForDisplayObserver:(SVKeyValueObserver *)arg1 ;
-(SVKeyValueObserver *)muteStateObserver;
-(SVKeyValueObserver *)playbackLikelyToKeepUpObserver;
-(SVKeyValueObserver *)playbackBufferFullObserver;
@end

