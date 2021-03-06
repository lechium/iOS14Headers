/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSDateInterval, NSUUID, NSArray;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {

	NSMutableArray* _sortedBuckets;
	NSDateInterval* _dateInterval;
	long long _numberOfBuckets;
	long long _numberOfReadings;
	NSUUID* _sessionUUID;
	NSArray* _highlightedReadings;

}

@property (setter=_setHighlightedReadings:,nonatomic,retain) NSArray * highlightedReadings;              //@synthesize highlightedReadings=_highlightedReadings - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                                            //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long numberOfBuckets;                                                //@synthesize numberOfBuckets=_numberOfBuckets - In the implementation block
@property (nonatomic,readonly) long long numberOfReadings;                                               //@synthesize numberOfReadings=_numberOfReadings - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionUUID;                                                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(NSDateInterval *)dateInterval;
-(long long)numberOfReadings;
-(id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(BOOL)arg2 ;
-(NSArray *)highlightedReadings;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3 ;
-(void)_setHighlightedReadings:(id)arg1 ;
-(long long)numberOfBuckets;
-(void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2 ;
-(void)enumerateBucketsWithBlock:(/*^block*/id)arg1 ;
-(id)_bucketsDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)bucketAtIndex:(long long)arg1 ;
-(NSUUID *)sessionUUID;
-(id)description;
@end

