/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking;
@class NSString, NSNumber;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {

	id<HMFLocking> _lock;
	NSString* _sessionIdentifier;
	long long _playbackState;
	long long _shuffleState;
	long long _repeatState;
	NSNumber* _volume;
	NSNumber* _muted;
	NSString* _mediaUniqueIdentifier;

}

@property (assign,nonatomic) long long playbackState;                          //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) long long shuffleState;                           //@synthesize shuffleState=_shuffleState - In the implementation block
@property (assign,nonatomic) long long repeatState;                            //@synthesize repeatState=_repeatState - In the implementation block
@property (copy) NSNumber * volume;                                            //@synthesize volume=_volume - In the implementation block
@property (copy) NSNumber * muted;                                             //@synthesize muted=_muted - In the implementation block
@property (copy) NSString * mediaUniqueIdentifier;                             //@synthesize mediaUniqueIdentifier=_mediaUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sessionIdentifier;
-(void)setVolume:(NSNumber *)arg1 ;
-(NSNumber *)muted;
-(void)setPlaybackState:(long long)arg1 ;
-(long long)shuffleState;
-(long long)repeatState;
-(void)setRepeatState:(long long)arg1 ;
-(NSString *)mediaUniqueIdentifier;
-(void)setShuffleState:(long long)arg1 ;
-(void)setMediaUniqueIdentifier:(NSString *)arg1 ;
-(id)dumpState;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(NSNumber *)volume;
-(void)setMuted:(NSNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)playbackState;
-(unsigned long long)hash;
@end

