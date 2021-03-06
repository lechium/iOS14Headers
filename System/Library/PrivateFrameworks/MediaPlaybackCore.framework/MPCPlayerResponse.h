/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPResponse.h>

@protocol MPCVideoView, MPCVideoOutput;
@class MPCPlayerResponseTracklist, MPCMediaRemoteController, MPCPlayerPath, UIView;

@interface MPCPlayerResponse : MPResponse {

	MPCPlayerResponseTracklist* _tracklist;
	long long _state;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	UIView*<MPCVideoView> _videoView;
	id<MPCVideoOutput> _videoOutput;

}

@property (nonatomic,readonly) id<MPCPlayerResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                            //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) UIView*<MPCVideoView> videoView;                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) id<MPCVideoOutput> videoOutput;                        //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseTracklist * tracklist;              //@synthesize tracklist=_tracklist - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
+(id)builderProtocol;
-(id)play;
-(id<MPCVideoOutput>)videoOutput;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(MPCPlayerResponseTracklist *)tracklist;
-(id)pause;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(MPCPlayerPath *)playerPath;
-(void)setVideoOutput:(id<MPCVideoOutput>)arg1 ;
-(id)_commandRequestForMediaRemoteCommand:(unsigned)arg1 ;
-(id)_stateDumpObject;
-(UIView*<MPCVideoView>)videoView;
-(void)setVideoView:(UIView*<MPCVideoView>)arg1 ;
-(long long)state;
-(id)stop;
-(MPCMediaRemoteController *)controller;
-(id)description;
@end

