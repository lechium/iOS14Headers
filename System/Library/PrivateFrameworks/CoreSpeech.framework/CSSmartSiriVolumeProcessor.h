/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSmartSiriVolumeProcessor
@required
-(void)reset;
-(void)setAsset:(id)arg1;
-(void)startSmartSiriVolume;
-(id)initWithSamplingRate:(float)arg1 asset:(id)arg2;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;
-(void)didReceiveAlarmChanged:(long long)arg1;
-(void)didReceiveTimerChanged:(long long)arg1;
-(void)didReceiveMusicVolumeChanged:(float)arg1;
-(void)didReceiveAlarmVolumeChanged:(float)arg1;
-(void)didDetectKeywordWithResult:(id)arg1;

@end
