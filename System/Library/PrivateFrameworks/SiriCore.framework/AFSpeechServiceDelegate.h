/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1;

@end
