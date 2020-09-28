/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMMagnetometerData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM3 magneticField; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
-(void)dealloc;
-(SCD_Struct_CM3)magneticField;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
