/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantitySample;

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration {

	HKQuantitySample* _quantitySample;

}

@property (nonatomic,copy) HKQuantitySample * quantitySample;              //@synthesize quantitySample=_quantitySample - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQuantitySample *)quantitySample;
-(void)setQuantitySample:(HKQuantitySample *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithQuantitySample:(id)arg1 ;
@end
