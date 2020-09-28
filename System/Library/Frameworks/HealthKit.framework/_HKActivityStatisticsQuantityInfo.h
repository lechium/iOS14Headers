/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HKQuantity;

@interface _HKActivityStatisticsQuantityInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _quantityValue;

}

@property (nonatomic,retain) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * quantityValue;              //@synthesize quantityValue=_quantityValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(HKQuantity *)quantityValue;
-(void)setQuantityValue:(HKQuantity *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
@end
