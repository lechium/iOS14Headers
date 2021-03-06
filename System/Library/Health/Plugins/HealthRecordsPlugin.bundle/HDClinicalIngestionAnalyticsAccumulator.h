/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDHealthRecordsProfileExtension, NSSet, HDClinicalIngestionResponseTimeMetric, HDClinicalIngestionRequestFailureMetric, NSString;

@interface HDClinicalIngestionAnalyticsAccumulator : NSObject {

	HDHealthRecordsProfileExtension* _profileExtension;
	NSSet* _collectionEnabledCountryCodes;
	HDClinicalIngestionResponseTimeMetric* _responseTimes;
	HDClinicalIngestionRequestFailureMetric* _requestFailures;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,copy,readonly) NSSet * collectionEnabledCountryCodes;                             //@synthesize collectionEnabledCountryCodes=_collectionEnabledCountryCodes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionResponseTimeMetric * responseTimes;                  //@synthesize responseTimes=_responseTimes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionRequestFailureMetric * requestFailures;              //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsString; 
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(HDClinicalIngestionRequestFailureMetric *)requestFailures;
-(NSSet *)collectionEnabledCountryCodes;
-(void)resetMetrics;
-(void)submitMetricsWithCoordinator:(id)arg1 ;
-(void)logMetrics;
-(NSString *)analyticsString;
-(void)accumulateIngestionAnalyticsMetric:(id)arg1 gatewayCountryCode:(id)arg2 ;
-(void)consumeAndResetIngestionAnalyticsMetricsFromAccumulator:(id)arg1 ;
-(HDClinicalIngestionResponseTimeMetric *)responseTimes;
@end

