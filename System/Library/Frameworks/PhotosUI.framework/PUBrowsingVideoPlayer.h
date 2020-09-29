/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewModel.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXVideoSessionDelegate.h>
#import <libobjc.A.dylib/PXActivityCoordinatorItem.h>

@protocol PUDisplayAsset;
@class PXUpdater, NSHashTable, PUMediaProvider, PXVideoSession, AVPlayerItem, NSError, NSMutableSet, PXActivityCoordinator, PUBrowsingVideoPlayerChange, ISWrappedAVPlayer, NSString;

@interface PUBrowsingVideoPlayer : PUViewModel <ISChangeObserver, PXChangeObserver, PXVideoSessionDelegate, PXActivityCoordinatorItem> {

	PXUpdater* _updater;
	SCD_Struct_PH4 _pendingSeekTime;
	/*^block*/id _pendingSeekCompletionHandler;
	void* _videoSessionPresenter;
	BOOL _isPlayingAllowed;
	BOOL _alwaysRespectsMuteSwitch;
	BOOL _isMuted;
	BOOL _isPlayerLoadingAllowed;
	BOOL _isActivated;
	BOOL __isUpdatingAudioSession;
	BOOL _shouldLoadVideoSession;
	BOOL _shouldRegisterForPlayback;
	float _volume;
	unsigned long long _activityCoordinatorQueuePosition;
	NSHashTable* _timeObservers;
	NSHashTable* _videoOutputs;
	id<PUDisplayAsset> _asset;
	PUMediaProvider* _mediaProvider;
	long long _desiredPlayState;
	long long _audioStatus;
	PXVideoSession* _videoSession;
	AVPlayerItem* _playerItem;
	NSError* _error;
	NSMutableSet* __playerLoadingDisablingReasons;
	NSMutableSet* __playingDisablingReasons;
	unsigned long long _nextPlayerLoadingEnabledUpdateID;
	PXActivityCoordinator* _playbackCoordinator;
	SCD_Struct_PH4 _desiredSeekTime;

}

@property (nonatomic,readonly) PUBrowsingVideoPlayerChange * currentChange; 
@property (nonatomic,retain) PXVideoSession * videoSession;                                                                        //@synthesize videoSession=_videoSession - In the implementation block
@property (setter=_setPlayerItem:,nonatomic,retain) AVPlayerItem * playerItem;                                                     //@synthesize playerItem=_playerItem - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (assign,setter=_setPlayerLoadingAllowed:,nonatomic) BOOL isPlayerLoadingAllowed;                                         //@synthesize isPlayerLoadingAllowed=_isPlayerLoadingAllowed - In the implementation block
@property (setter=_setPlayerLoadingDisablingReasons:,nonatomic,retain) NSMutableSet * _playerLoadingDisablingReasons;              //@synthesize _playerLoadingDisablingReasons=__playerLoadingDisablingReasons - In the implementation block
@property (assign,setter=_setPlayingAllowed:,nonatomic) BOOL isPlayingAllowed;                                                     //@synthesize isPlayingAllowed=_isPlayingAllowed - In the implementation block
@property (setter=_setPlayingDisablingReasons:,nonatomic,retain) NSMutableSet * _playingDisablingReasons;                          //@synthesize _playingDisablingReasons=__playingDisablingReasons - In the implementation block
@property (assign,setter=_setUpdatingAudioSession:,nonatomic) BOOL _isUpdatingAudioSession;                                        //@synthesize _isUpdatingAudioSession=__isUpdatingAudioSession - In the implementation block
@property (assign,setter=_setAudioStatus:,nonatomic) long long audioStatus;                                                        //@synthesize audioStatus=_audioStatus - In the implementation block
@property (assign,nonatomic) unsigned long long nextPlayerLoadingEnabledUpdateID;                                                  //@synthesize nextPlayerLoadingEnabledUpdateID=_nextPlayerLoadingEnabledUpdateID - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadVideoSession;                                                                          //@synthesize shouldLoadVideoSession=_shouldLoadVideoSession - In the implementation block
@property (nonatomic,readonly) NSHashTable * timeObservers;                                                                        //@synthesize timeObservers=_timeObservers - In the implementation block
@property (nonatomic,readonly) NSHashTable * videoOutputs;                                                                         //@synthesize videoOutputs=_videoOutputs - In the implementation block
@property (nonatomic,readonly) PXActivityCoordinator * playbackCoordinator;                                                        //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterForPlayback;                                                                       //@synthesize shouldRegisterForPlayback=_shouldRegisterForPlayback - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,nonatomic) long long desiredPlayState;                                                                           //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (nonatomic,readonly) BOOL isPlaybackDesired; 
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) BOOL isStalled; 
@property (assign,nonatomic) BOOL alwaysRespectsMuteSwitch;                                                                        //@synthesize alwaysRespectsMuteSwitch=_alwaysRespectsMuteSwitch - In the implementation block
@property (nonatomic,readonly) BOOL isPlayable; 
@property (assign,nonatomic) float volume;                                                                                         //@synthesize volume=_volume - In the implementation block
@property (assign,setter=setMuted:,nonatomic) BOOL isMuted;                                                                        //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * avPlayer; 
@property (nonatomic,readonly) BOOL isAtBeginning; 
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (nonatomic,readonly) SCD_Struct_PH4 currentTime; 
@property (nonatomic,readonly) SCD_Struct_PH4 duration; 
@property (assign,nonatomic) SCD_Struct_PH4 desiredSeekTime;                                                                       //@synthesize desiredSeekTime=_desiredSeekTime - In the implementation block
@property (assign,setter=setActivated:,nonatomic) BOOL isActivated;                                                                //@synthesize isActivated=_isActivated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long activityCoordinatorQueuePosition;                                                  //@synthesize activityCoordinatorQueuePosition=_activityCoordinatorQueuePosition - In the implementation block
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)newViewModelChange;
-(PUBrowsingVideoPlayerChange *)currentChange;
-(void)setVolume:(float)arg1 ;
-(void)didPerformChanges;
-(BOOL)isPlayable;
-(void)invalidateExistingPlayer;
-(void)setPlayerLoadingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)rewindExistingPlayer;
-(void)setDesiredPlayState:(long long)arg1 ;
-(BOOL)isActivated;
-(id<PUDisplayAsset>)asset;
-(PUMediaProvider *)mediaProvider;
-(void)setActivated:(BOOL)arg1 ;
-(SCD_Struct_PH4)duration;
-(float)volume;
-(void)assetContentDidChange;
-(void)dealloc;
-(void)setMuted:(BOOL)arg1 ;
-(long long)desiredPlayState;
-(void)seekToTime:(SCD_Struct_PH4)arg1 toleranceBefore:(SCD_Struct_PH4)arg2 toleranceAfter:(SCD_Struct_PH4)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleWillResignActiveNotification:(id)arg1 ;
-(BOOL)isStalled;
-(NSError *)error;
-(unsigned long long)activityCoordinatorQueuePosition;
-(void)setActivityCoordinatorQueuePosition:(unsigned long long)arg1 ;
-(void)videoSessionDidPlayToEnd:(id)arg1 ;
-(BOOL)isPlaybackDesired;
-(void)setAlwaysRespectsMuteSwitch:(BOOL)arg1 ;
-(long long)audioStatus;
-(void)videoSessionAudioSessionOutputVolumeDidChange:(id)arg1 fromVolume:(float)arg2 toVolume:(float)arg3 ;
-(void)setShouldLoadVideoSession:(BOOL)arg1 ;
-(BOOL)isAtBeginning;
-(void)setPlayingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setDesiredSeekTime:(SCD_Struct_PH4)arg1 ;
-(void)registerTimeObserver:(id)arg1 ;
-(void)unregisterTimeObserver:(id)arg1 ;
-(void)registerVideoOutput:(id)arg1 ;
-(void)unregisterVideoOutput:(id)arg1 ;
-(void)_handleDidBecomeActiveNotification:(id)arg1 ;
-(void)_setAudioStatus:(long long)arg1 ;
-(void)_setPlayerLoadingAllowed:(BOOL)arg1 ;
-(void)_setPlayingAllowed:(BOOL)arg1 ;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(NSHashTable *)timeObservers;
-(NSHashTable *)videoOutputs;
-(BOOL)isPlayingAllowed;
-(void)_updatePlayerLoadingAllowedWithUpdateID:(unsigned long long)arg1 ;
-(void)_updateVideoSession;
-(void)_updateShouldRegisterForPlayback;
-(void)setShouldRegisterForPlayback:(BOOL)arg1 ;
-(long long)_videoSessionDesiredPlayState;
-(void)_updateVideoSessionDesiredPlayState;
-(PXVideoSession *)videoSession;
-(void)_updatePlayerVolume;
-(void)_performPendingSeekIfNeeded;
-(BOOL)alwaysRespectsMuteSwitch;
-(BOOL)isPlayerLoadingAllowed;
-(SCD_Struct_PH4)desiredSeekTime;
-(NSMutableSet *)_playerLoadingDisablingReasons;
-(void)_setPlayerLoadingDisablingReasons:(id)arg1 ;
-(NSMutableSet *)_playingDisablingReasons;
-(void)_setPlayingDisablingReasons:(id)arg1 ;
-(BOOL)_isUpdatingAudioSession;
-(void)_setUpdatingAudioSession:(BOOL)arg1 ;
-(unsigned long long)nextPlayerLoadingEnabledUpdateID;
-(void)setNextPlayerLoadingEnabledUpdateID:(unsigned long long)arg1 ;
-(BOOL)shouldLoadVideoSession;
-(PXActivityCoordinator *)playbackCoordinator;
-(BOOL)shouldRegisterForPlayback;
-(id)init;
-(BOOL)isMuted;
-(ISWrappedAVPlayer *)avPlayer;
-(void)seekToTime:(SCD_Struct_PH4)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(long long)playState;
-(SCD_Struct_PH4)currentTime;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)isAtEnd;
-(void)_handleShouldReloadAssetMediaNotification:(id)arg1 ;
-(void)_setPlayerItem:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)_updateAudioSessionCategory;
-(NSString *)description;
@end
