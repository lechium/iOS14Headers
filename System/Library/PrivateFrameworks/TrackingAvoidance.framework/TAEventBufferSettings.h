/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
@interface TAEventBufferSettings : NSObject {

	unsigned long long _bufferCapacity;
	double _bufferTimeIntervalOfRetention;

}

@property (nonatomic,readonly) unsigned long long bufferCapacity;                 //@synthesize bufferCapacity=_bufferCapacity - In the implementation block
@property (nonatomic,readonly) double bufferTimeIntervalOfRetention;              //@synthesize bufferTimeIntervalOfRetention=_bufferTimeIntervalOfRetention - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)bufferCapacity;
-(double)bufferTimeIntervalOfRetention;
-(id)initWithBufferCapacityOrDefault:(id)arg1 bufferTimeIntervalOfRetentionOrDefault:(id)arg2 ;
-(id)initWithBufferCapacity:(unsigned long long)arg1 bufferTimeIntervalOfRetention:(double)arg2 ;
@end
