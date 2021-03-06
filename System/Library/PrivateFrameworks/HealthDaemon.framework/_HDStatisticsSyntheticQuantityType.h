/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuantityType.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, HKUnit;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding> {

	HKSampleType* _underlyingSampleType;
	long long _overriddenAggregationStyle;
	HKUnit* _overriddenCanonicalUnit;

}

@property (nonatomic,copy,readonly) HKSampleType * underlyingSampleType;              //@synthesize underlyingSampleType=_underlyingSampleType - In the implementation block
@property (nonatomic,readonly) long long overriddenAggregationStyle;                  //@synthesize overriddenAggregationStyle=_overriddenAggregationStyle - In the implementation block
@property (nonatomic,copy,readonly) HKUnit * overriddenCanonicalUnit;                 //@synthesize overriddenCanonicalUnit=_overriddenCanonicalUnit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)syntheticQuantityTypeWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3 ;
-(id)canonicalUnit;
-(Class)dataObjectClass;
-(id)_initWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)overriddenAggregationStyle;
-(HKSampleType *)underlyingSampleType;
-(long long)aggregationStyle;
-(HKUnit *)overriddenCanonicalUnit;
@end

