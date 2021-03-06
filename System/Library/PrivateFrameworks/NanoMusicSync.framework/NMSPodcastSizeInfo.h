/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding> {

	unsigned long long _totalSize;
	double _totalDuration;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,nonatomic) double totalDuration;                      //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) unsigned long long count;                  //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)totalDuration;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)totalSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)sizeDurationRatio;
-(unsigned long long)averageSize;
@end

