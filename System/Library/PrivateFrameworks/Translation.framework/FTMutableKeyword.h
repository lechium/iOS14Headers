/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTKeyword.h>

@class NSString;

@interface FTMutableKeyword : FTKeyword

@property (nonatomic,copy) NSString * keyword_orthography; 
@property (assign,nonatomic) double posterior; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)keyword_orthography;
-(void)setKeyword_orthography:(NSString *)arg1 ;
-(double)posterior;
-(void)setPosterior:(double)arg1 ;
@end

