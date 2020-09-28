/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetric.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface HDClinicalIngestionResponseTimeMetric : NSObject <HDClinicalIngestionAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (nonatomic,retain) NSMutableDictionary * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) NSDictionary * collectedMetrics; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)collectedMetrics;
-(NSMutableDictionary *)elements;
-(void)resetMetric;
-(NSString *)debugDescription;
-(void)addResponseTimeMetricElement:(id)arg1 ;
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSNumber *)analyticsString;
-(unsigned long long)count;
-(void)combineWithMetric:(id)arg1 ;
@end
