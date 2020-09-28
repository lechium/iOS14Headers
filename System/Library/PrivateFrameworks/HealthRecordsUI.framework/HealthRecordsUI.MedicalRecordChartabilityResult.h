/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TtC15HealthRecordsUI28MedicalRecordChartDataSource, NSArray, NSDate;

@interface HealthRecordsUI.MedicalRecordChartabilityResult : NSObject {

	 configuration;
	 masterDataSource;
	 seriesDataSources;
	 outOfRangeDataSource;
	 noRangeDataSource;

}

@property (readonly,nonatomic) id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_> configuration; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * masterDataSource; 
@property (readonly,nonatomic) NSArray * seriesDataSources; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * outOfRangeDataSource; 
@property (readonly,nonatomic) _TtC15HealthRecordsUI28MedicalRecordChartDataSource * noRangeDataSource; 
@property (readonly,nonatomic) NSDate * latestChartableDate; 
@property (readonly,nonatomic) BOOL shouldProduceAtLeastOneOverlay; 
-(BOOL)shouldProduceAtLeastOneOverlay;
-(NSDate *)latestChartableDate;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)masterDataSource;
-(NSArray *)seriesDataSources;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)outOfRangeDataSource;
-(_TtC15HealthRecordsUI28MedicalRecordChartDataSource *)noRangeDataSource;
-(id)init;
-(id<_TtP15HealthRecordsUI31MedicalRecordChartConfiguration_>)configuration;
@end
