/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PRRangeMeasurement, PRAngleMeasurement;

@interface PRDeviceScore : NSObject {

	NSData* _btAddress;
	long long _proximity;
	PRRangeMeasurement* _range;
	PRAngleMeasurement* _angle;
	double _score;
	double _scoreUncertainty;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSData * btAddress;                      //@synthesize btAddress=_btAddress - In the implementation block
@property (readonly) long long proximity;                     //@synthesize proximity=_proximity - In the implementation block
@property (readonly) PRRangeMeasurement * range;              //@synthesize range=_range - In the implementation block
@property (readonly) PRAngleMeasurement * angle;              //@synthesize angle=_angle - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
@property (readonly) double scoreUncertainty;                 //@synthesize scoreUncertainty=_scoreUncertainty - In the implementation block
-(PRRangeMeasurement *)range;
-(PRAngleMeasurement *)angle;
-(long long)proximity;
-(double)score;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)btAddress;
-(BOOL)isEqualToPRDeviceScore:(id)arg1 ;
-(double)scoreUncertainty;
-(id)initWithValues:(id)arg1 proximity:(long long)arg2 range:(id)arg3 angle:(id)arg4 score:(double)arg5 scoreUncertainty:(double)arg6 ;
@end

