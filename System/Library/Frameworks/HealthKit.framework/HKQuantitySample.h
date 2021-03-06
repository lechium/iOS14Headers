/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class HKQuantity, HDCodableQuantitySample, HKQuantityType;

@interface HKQuantitySample : HKSample {

	HKQuantity* _quantity;
	long long _freezeState;
	long long _count;
	HDCodableQuantitySample* _codableQuantitySample;

}

@property (assign,setter=_setFrozen:,getter=_frozen,nonatomic) BOOL frozen; 
@property (setter=_setCodableQuantitySample:,nonatomic,retain) HDCodableQuantitySample * codableQuantitySample;              //@synthesize codableQuantitySample=_codableQuantitySample - In the implementation block
@property (copy,readonly) HKQuantityType * quantityType; 
@property (copy,readonly) HKQuantity * quantity; 
@property (readonly) long long count;                                                                                        //@synthesize count=_count - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(BOOL)_isConcreteObjectClass;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4 ;
+(id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(HKQuantityType *)quantityType;
-(BOOL)_shouldNotifyOnInsert;
-(BOOL)_frozen;
-(id)_init;
-(id)initWithCoder:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setFrozen:(BOOL)arg1 ;
-(HKQuantity *)quantity;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(void)_setFreezing;
-(HDCodableQuantitySample *)codableQuantitySample;
-(void)_setCodableQuantitySample:(id)arg1 ;
-(id)_valueDescription;
-(long long)_compareFreezeStateWithSample:(id)arg1 ;
-(void)_setQuantity:(id)arg1 ;
@end

