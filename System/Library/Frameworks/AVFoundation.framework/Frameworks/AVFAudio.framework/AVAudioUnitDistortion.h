/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (assign,nonatomic) float preGain; 
@property (assign,nonatomic) float wetDryMix; 
-(float)preGain;
-(void)setWetDryMix:(float)arg1 ;
-(void)loadFactoryPreset:(long long)arg1 ;
-(id)init;
-(AUPreset*)FillOutAUPreset:(long long)arg1 ;
-(void)setPreGain:(float)arg1 ;
-(float)wetDryMix;
@end
