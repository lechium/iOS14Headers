/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCAudioClientProtocol.h>

@class ACCAudioClient, NSString;

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol> {

	ACCAudioClient* _audioClient;

}

@property (nonatomic,retain) ACCAudioClient * audioClient;              //@synthesize audioClient=_audioClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedACCAudioManager;
-(ACCAudioClient *)audioClient;
-(void)setAudioClient:(ACCAudioClient *)arg1 ;
-(id)init;
-(BOOL)setDigitalAudioSampleRate:(unsigned)arg1 ;
-(unsigned)supportedDigitalAudioSampleRate:(unsigned)arg1 ;
-(id)supportedDigitalAudioSampleRates;
-(id)deviceAudioStates;
-(BOOL)allowBackgroundAudioForClient:(id)arg1 ;
@end
