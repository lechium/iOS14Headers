/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioAnalytics.h>

@class NSArray;

@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (nonatomic,copy) NSArray * speech_recognition_features; 
@property (nonatomic,copy) NSArray * acoustic_features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)speech_recognition_features;
-(void)setSpeech_recognition_features:(NSArray *)arg1 ;
-(NSArray *)acoustic_features;
-(void)setAcoustic_features:(NSArray *)arg1 ;
-(id)init;
@end

