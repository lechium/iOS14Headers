/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKAudioPlayerDelegate.h>

@protocol CKAudioControllerDelegate;
@class CKAudioPlayer, NSMutableArray, NSArray, CKMediaObject, NSString;

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {

	unsigned long long _currentIndex;
	CKAudioPlayer* _listenAudioPlayer;
	BOOL _shouldUseSpeaker;
	BOOL _shouldStopPlayingWhenSilent;
	BOOL _shouldDuckOthers;
	BOOL _shouldUseAVPlayer;
	BOOL _playing;
	BOOL _paused;
	BOOL _interrupted;
	NSMutableArray* _mediaObjects;
	id<CKAudioControllerDelegate> _delegate;
	CKAudioPlayer* _audioPlayer;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (setter=_setMediaObjects:,nonatomic,retain) NSMutableArray * _mediaObjects;              //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKAudioPlayer * audioPlayer;                                          //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                     //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) NSArray * mediaObjects; 
@property (assign,nonatomic,__weak) id<CKAudioControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSpeaker;                                                //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPlayingWhenSilent;                                     //@synthesize shouldStopPlayingWhenSilent=_shouldStopPlayingWhenSilent - In the implementation block
@property (assign,nonatomic) BOOL shouldDuckOthers;                                                //@synthesize shouldDuckOthers=_shouldDuckOthers - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAVPlayer;                                               //@synthesize shouldUseAVPlayer=_shouldUseAVPlayer - In the implementation block
@property (nonatomic,readonly) CKMediaObject * currentMediaObject; 
@property (nonatomic,readonly) double currentMediaObjectTime; 
@property (nonatomic,readonly) double currentMediaObjectDuration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)play;
-(BOOL)isPlaying;
-(BOOL)interrupted;
-(void)setVolume:(float)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)pause;
-(void)setInterrupted:(BOOL)arg1 ;
-(float)volume;
-(CKAudioPlayer *)audioPlayer;
-(void)_setMediaObjects:(id)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(BOOL)shouldUseSpeaker;
-(unsigned long long)audioSessionControllerOptions;
-(BOOL)shouldStopPlayingWhenSilent;
-(BOOL)shouldDuckOthers;
-(void)audioPlayerDidFinishPlaying:(id)arg1 ;
-(BOOL)shouldUseAVPlayer;
-(void)setAudioPlayer:(CKAudioPlayer *)arg1 ;
-(void)playListenSound:(/*^block*/id)arg1 ;
-(void)_notifyPlayerDidPrepareMediaObject:(id)arg1 successfully:(BOOL)arg2 ;
-(void)playListenEndSound:(/*^block*/id)arg1 ;
-(void)addMediaObjects:(id)arg1 ;
-(void)audioPlayerCurrentTimeDidChange:(id)arg1 ;
-(void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(BOOL)arg2 ;
-(double)currentMediaObjectDuration;
-(void)dealloc;
-(NSMutableArray *)_mediaObjects;
-(NSArray *)mediaObjects;
-(BOOL)isPaused;
-(void)prepareToPlay;
-(void)setDelegate:(id<CKAudioControllerDelegate>)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setShouldUseSpeaker:(BOOL)arg1 ;
-(void)playAfterDelay:(double)arg1 ;
-(id)initWithMediaObjects:(id)arg1 ;
-(id<CKAudioControllerDelegate>)delegate;
-(CKMediaObject *)currentMediaObject;
-(double)currentMediaObjectTime;
-(void)addMediaObject:(id)arg1 ;
-(void)setShouldUseAVPlayer:(BOOL)arg1 ;
-(void)setShouldStopPlayingWhenSilent:(BOOL)arg1 ;
-(void)setShouldDuckOthers:(BOOL)arg1 ;
-(void)stop;
-(void)applicationWillResignActive;
@end

