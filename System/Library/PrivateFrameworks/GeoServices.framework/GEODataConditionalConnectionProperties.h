/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding> {

	unsigned long long _workLoad;
	double _timeWindowStartTime;
	double _timeWindowDuration;

}

@property (nonatomic,readonly) unsigned long long workLoad;              //@synthesize workLoad=_workLoad - In the implementation block
@property (nonatomic,readonly) double timeWindowStartTime;               //@synthesize timeWindowStartTime=_timeWindowStartTime - In the implementation block
@property (nonatomic,readonly) double timeWindowDuration;                //@synthesize timeWindowDuration=_timeWindowDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)workLoad;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3 ;
-(double)timeWindowStartTime;
-(double)timeWindowDuration;
@end

