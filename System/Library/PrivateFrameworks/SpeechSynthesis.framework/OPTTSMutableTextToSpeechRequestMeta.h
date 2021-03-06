/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequestMeta.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (assign,nonatomic) long long channel_type; 
@property (nonatomic,copy) NSString * app_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)channel_type;
-(void)setChannel_type:(long long)arg1 ;
-(NSString *)app_id;
-(void)setApp_id:(NSString *)arg1 ;
-(id)init;
@end

