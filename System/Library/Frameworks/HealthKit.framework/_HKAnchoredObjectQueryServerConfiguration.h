/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDeletedObjects;
	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                       //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;                      //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)includeContributorInformation;
-(HKQueryAnchor *)anchor;
-(double)collectionInterval;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(BOOL)includeDeletedObjects;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
@end

