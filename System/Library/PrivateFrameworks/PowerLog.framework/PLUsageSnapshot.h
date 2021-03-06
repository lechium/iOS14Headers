/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PLUsageSnapshot : NSObject {

	NSDate* _timestamp;
	double _cpuUsage;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double cpuUsage;                 //@synthesize cpuUsage=_cpuUsage - In the implementation block
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)cpuUsage;
-(void)setCpuUsage:(double)arg1 ;
-(id)description;
@end

