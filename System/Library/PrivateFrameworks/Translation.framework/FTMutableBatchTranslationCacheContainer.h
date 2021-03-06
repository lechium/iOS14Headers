/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationCacheContainer.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationCacheContainer : FTBatchTranslationCacheContainer

@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * translated_text; 
@property (nonatomic,copy) NSArray * spans; 
@property (assign,nonatomic) int sentence_count; 
-(NSArray *)spans;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTranslated_text:(NSString *)arg1 ;
-(int)sentence_count;
-(void)setSentence_count:(int)arg1 ;
-(NSString *)request_id;
-(NSString *)translated_text;
-(void)setRequest_id:(NSString *)arg1 ;
-(id)init;
-(void)setSpans:(NSArray *)arg1 ;
@end

