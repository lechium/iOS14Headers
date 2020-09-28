/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KeyPitch : NSObject {

	double _frequency;
	double _timeOffsetMS;

}

@property (assign,nonatomic) double frequency;                 //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double timeOffsetMS;              //@synthesize timeOffsetMS=_timeOffsetMS - In the implementation block
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(void)setTimeOffsetMS:(double)arg1 ;
-(id)initWithFrequency:(double)arg1 timeOffset:(double)arg2 ;
-(double)timeOffsetMS;
-(id)description;
@end
