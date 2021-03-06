/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <RelativeMotion/RMLogItem.h>

@class RMAttitude;

@interface RMPose : RMLogItem {

	RMAttitude* _attitude;
	double _consumedAuxTimestamp;
	double _receivedAuxTimestamp;
	double _machAbsTimestamp;

}

@property (assign,nonatomic) double machAbsTimestamp;                    //@synthesize machAbsTimestamp=_machAbsTimestamp - In the implementation block
@property (nonatomic,readonly) RMAttitude * attitude;                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) double consumedAuxTimestamp;              //@synthesize consumedAuxTimestamp=_consumedAuxTimestamp - In the implementation block
@property (nonatomic,readonly) double receivedAuxTimestamp;              //@synthesize receivedAuxTimestamp=_receivedAuxTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)machAbsTimestamp;
-(double)consumedAuxTimestamp;
-(double)receivedAuxTimestamp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(RMAttitude *)attitude;
-(id)description;
-(id)_initWithAttitude:(id)arg1 consumedAuxTimestamp:(double)arg2 receivedAuxTimestamp:(double)arg3 machAbsTimestamp:(double)arg4 ;
-(void)setMachAbsTimestamp:(double)arg1 ;
@end

