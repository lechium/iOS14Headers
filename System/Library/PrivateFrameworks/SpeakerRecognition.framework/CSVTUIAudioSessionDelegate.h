/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVTUIAudioSessionDelegate <NSObject>
@required
-(void)audioSessionDidStopRecording:(long long)arg1;
-(void)audioSessionRecordBufferAvailable:(id)arg1;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
-(void)audioSessionErrorDidOccur:(id)arg1;
-(void)audioSessionUnsupportedAudioRoute;

@end

