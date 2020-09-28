/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioAlertProviding <NSObject>
@required
-(BOOL)playAlertSoundForType:(long long)arg1;
-(void)configureAlertBehavior:(id)arg1;
-(void)setAudioAlertDelegate:(id)arg1;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
-(unsigned long long)alertStartTime;

@end
