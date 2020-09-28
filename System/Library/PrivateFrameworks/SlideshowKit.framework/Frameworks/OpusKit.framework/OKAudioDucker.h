/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface OKAudioDucker : NSObject {

	float _volume;
	float _currentVolume;
	float _fadeToVolume;
	float _fadeFromVolume;
	float _duckLevel;
	double _startFadeTime;
	long long _duckState;
	double _fadeDuration;
	double _duckDuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _setVolumeBlock;

}

@property (assign,nonatomic) float volume;              //@synthesize volume=_volume - In the implementation block
-(void)cancel;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)dealloc;
-(id)init;
-(void)beginFadingWithDuration:(double)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)endFading;
-(void)setSetVolumeBlock:(/*^block*/id)arg1 ;
-(void)endFading:(BOOL)arg1 ;
-(void)_handleTimerEvent;
@end
