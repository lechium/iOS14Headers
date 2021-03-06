/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usingCompass;
	float _gyroTemperature;
	float _compassTemperature;
	CMAttitude* _attitude;
	NSString* _physicalDeviceUniqueID;
	unsigned long long _machTimestamp;
	SCD_Struct_CM3 _gravity;
	SCD_Struct_CM3 _userAcceleration;
	SCD_Struct_CM3 _rotationRate;
	SCD_Struct_CM3 _rawAcceleration;
	SCD_Struct_CM3 _rawRotationRate;
	SCD_Struct_CM3 _rawMagneticField;

}

@property (nonatomic,readonly) SCD_Struct_CM3 rawAcceleration;                       //@synthesize rawAcceleration=_rawAcceleration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM3 rawRotationRate;                       //@synthesize rawRotationRate=_rawRotationRate - In the implementation block
@property (nonatomic,readonly) unsigned long long machTimestamp;                     //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (nonatomic,readonly) float gyroTemperature;                                //@synthesize gyroTemperature=_gyroTemperature - In the implementation block
@property (nonatomic,readonly) float compassTemperature;                             //@synthesize compassTemperature=_compassTemperature - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM3 rawMagneticField;                      //@synthesize rawMagneticField=_rawMagneticField - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM3 gravity;                               //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM3 userAcceleration;                      //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) float tip; 
@property (nonatomic,readonly) float tilt; 
@property (nonatomic,readonly) CMAttitude * attitude;                                //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM3 rotationRate;                          //@synthesize rotationRate=_rotationRate - In the implementation block
@property (getter=isUsingCompass,nonatomic,readonly) BOOL usingCompass;              //@synthesize usingCompass=_usingCompass - In the implementation block
@property (nonatomic,copy,readonly) NSString * physicalDeviceUniqueID;               //@synthesize physicalDeviceUniqueID=_physicalDeviceUniqueID - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)tilt;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDeviceMotionLite:(SCD_Struct_CM62)arg1 andDeviceID:(id)arg2 ;
-(id)debugDescription;
-(void)dealloc;
-(SCD_Struct_CM3)userAcceleration;
-(BOOL)isUsingCompass;
-(NSString *)physicalDeviceUniqueID;
-(SCD_Struct_CM3)rawAcceleration;
-(SCD_Struct_CM3)rawRotationRate;
-(unsigned long long)machTimestamp;
-(float)gyroTemperature;
-(float)compassTemperature;
-(SCD_Struct_CM3)rawMagneticField;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_CM3)rotationRate;
-(SCD_Struct_CM3)gravity;
-(CMAttitude *)attitude;
-(id)description;
-(float)tip;
@end

