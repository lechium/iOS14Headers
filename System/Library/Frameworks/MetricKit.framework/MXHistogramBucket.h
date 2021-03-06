/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXHistogramBucket : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _histogramBucketFormatter;
	NSMeasurement* _bucketStart;
	NSMeasurement* _bucketEnd;
	unsigned long long _bucketCount;

}

@property (readonly) NSMeasurement * bucketStart;                 //@synthesize bucketStart=_bucketStart - In the implementation block
@property (readonly) NSMeasurement * bucketEnd;                   //@synthesize bucketEnd=_bucketEnd - In the implementation block
@property (readonly) unsigned long long bucketCount;              //@synthesize bucketCount=_bucketCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)bucketCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBucketStart:(id)arg1 bucketEnd:(id)arg2 bucketCount:(unsigned long long)arg3 ;
-(NSMeasurement *)bucketStart;
-(NSMeasurement *)bucketEnd;
@end

