/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@interface _HKBooleanFilter : _HKFilter {

	BOOL _value;

}

@property (nonatomic,readonly) BOOL value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)trueFilter;
+(id)falseFilter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(long long)acceptsActivitySummary:(id)arg1 ;
-(long long)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3 ;
-(id)init;
-(BOOL)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)description;
@end
