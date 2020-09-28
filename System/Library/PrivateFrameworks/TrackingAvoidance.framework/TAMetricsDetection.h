/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TAGeneralDetectionMetrics, TAVisitDetectionMetrics, TASingleVisitDetectionMetrics, TASPAdvertisement, NSString;

@interface TAMetricsDetection : NSObject <TAMetricsProtocol, NSSecureCoding> {

	unsigned long long _detectionType;
	TAGeneralDetectionMetrics* _generalDetectionMetrics;
	TAVisitDetectionMetrics* _visitDetectionMetrics;
	TASingleVisitDetectionMetrics* _singleVisitDetectionMetrics;
	TASPAdvertisement* _latestAdvertisement;

}

@property (nonatomic,readonly) unsigned long long detectionType;                                         //@synthesize detectionType=_detectionType - In the implementation block
@property (nonatomic,readonly) TAGeneralDetectionMetrics * generalDetectionMetrics;                      //@synthesize generalDetectionMetrics=_generalDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TAVisitDetectionMetrics * visitDetectionMetrics;                          //@synthesize visitDetectionMetrics=_visitDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TASingleVisitDetectionMetrics * singleVisitDetectionMetrics;              //@synthesize singleVisitDetectionMetrics=_singleVisitDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;                                  //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)convertTADetectionTypeToString:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(TASPAdvertisement *)latestAdvertisement;
-(unsigned long long)detectionType;
-(id)initWithDetectionType:(unsigned long long)arg1 visitDetectionMetrics:(id)arg2 generalDetectionMetrics:(id)arg3 singleVisitDetectionMetrics:(id)arg4 latestAdvertisement:(id)arg5 ;
-(unsigned long long)getMetricsCollectionType;
-(TAVisitDetectionMetrics *)visitDetectionMetrics;
-(TAGeneralDetectionMetrics *)generalDetectionMetrics;
-(TASingleVisitDetectionMetrics *)singleVisitDetectionMetrics;
@end
