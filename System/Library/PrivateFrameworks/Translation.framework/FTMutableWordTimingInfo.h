/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTWordTimingInfo.h>

@class NSString;

@interface FTMutableWordTimingInfo : FTWordTimingInfo

@property (nonatomic,copy) NSString * word; 
@property (assign,nonatomic) unsigned sample_idx; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) unsigned length; 
@property (assign,nonatomic) float timestamp; 
-(void)setLength:(unsigned)arg1 ;
-(NSString *)word;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)sample_idx;
-(void)setSample_idx:(unsigned)arg1 ;
-(float)timestamp;
-(unsigned)length;
-(void)setOffset:(unsigned)arg1 ;
-(void)setTimestamp:(float)arg1 ;
-(unsigned)offset;
-(void)setWord:(NSString *)arg1 ;
-(id)init;
@end

