/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKDevice, NSString;

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	unsigned long long _type;
	unsigned long long _activityType;
	HKDevice* _device;
	NSString* _brand;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * brand;                             //@synthesize brand=_brand - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKDevice *)device;
-(unsigned long long)activityType;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)brand;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)_setDevice:(id)arg1 ;
-(void)_setBrand:(id)arg1 ;
-(void)_setActivityType:(unsigned long long)arg1 ;
-(id)description;
@end

