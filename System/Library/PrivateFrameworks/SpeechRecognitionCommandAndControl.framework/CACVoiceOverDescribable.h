/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CACVoiceOverDescribable
@property (nonatomic,readonly) NSString * unfilteredRecognitionLabel; 
@property (nonatomic,readonly) NSString * recognitionLabel; 
@property (nonatomic,readonly) NSString * fullLabel; 
@property (nonatomic,readonly) NSString * valueLabel; 
@property (nonatomic,readonly) NSString * numberedLabel; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect frame; 
@required
-(unsigned long long)traits;
-(CGRect)frame;
-(NSString *)valueLabel;
-(NSString *)unfilteredRecognitionLabel;
-(NSString *)recognitionLabel;
-(NSString *)fullLabel;
-(NSString *)numberedLabel;

@end

