/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
#import <libvoiced_tts.dylib/OPTTSFinalTextToSpeechStreamingResponse.h>

@class NSString;

@interface OPTTSMutableFinalTextToSpeechStreamingResponse : OPTTSFinalTextToSpeechStreamingResponse

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (assign,nonatomic) int error_code; 
@property (nonatomic,copy) NSString * error_str; 
@property (nonatomic,copy) NSString * stream_id; 
@property (assign,nonatomic) int total_pkt_number; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stream_id;
-(void)setStream_id:(NSString *)arg1 ;
-(int)total_pkt_number;
-(void)setTotal_pkt_number:(int)arg1 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)init;
-(void)setError_code:(int)arg1 ;
-(void)setError_str:(NSString *)arg1 ;
@end

