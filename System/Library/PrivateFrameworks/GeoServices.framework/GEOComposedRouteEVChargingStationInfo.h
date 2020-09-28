/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding> {

	unsigned long long _muid;
	NSString* _name;
	double _chargingTime;
	double _batteryChargeAfterCharging;
	double _batteryPercentageAfterCharging;
	double _gainedBatteryCharge;
	double _gainedBatteryPercentage;
	double _gainedTravelRange;

}

@property (nonatomic,readonly) unsigned long long muid;                            //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double chargingTime;                                //@synthesize chargingTime=_chargingTime - In the implementation block
@property (nonatomic,readonly) double batteryChargeAfterCharging;                  //@synthesize batteryChargeAfterCharging=_batteryChargeAfterCharging - In the implementation block
@property (nonatomic,readonly) double batteryPercentageAfterCharging;              //@synthesize batteryPercentageAfterCharging=_batteryPercentageAfterCharging - In the implementation block
@property (nonatomic,readonly) double gainedBatteryCharge;                         //@synthesize gainedBatteryCharge=_gainedBatteryCharge - In the implementation block
@property (nonatomic,readonly) double gainedBatteryPercentage;                     //@synthesize gainedBatteryPercentage=_gainedBatteryPercentage - In the implementation block
@property (nonatomic,readonly) double gainedTravelRange;                           //@synthesize gainedTravelRange=_gainedTravelRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)muid;
-(double)chargingTime;
-(double)gainedBatteryPercentage;
-(double)gainedTravelRange;
-(double)gainedBatteryCharge;
-(double)batteryChargeAfterCharging;
-(double)batteryPercentageAfterCharging;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGeoStep:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithGeoEVChargingInfo:(id)arg1 muid:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithGeoETAStep:(id)arg1 withMuid:(unsigned long long)arg2 name:(id)arg3 ;
-(NSString *)name;
-(id)description;
@end
