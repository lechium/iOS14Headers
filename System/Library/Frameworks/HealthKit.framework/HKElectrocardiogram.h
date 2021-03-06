/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class HKQuantity, NSNumber, NSArray, NSString;

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {

	Electrocardiogram* _reading;
	unsigned long long _privateClassification;
	HKQuantity* _averageHeartRate;
	long long _symptomsStatus;

}

@property (getter=_algorithmVersion,nonatomic,readonly) NSNumber * algorithmVersion; 
@property (nonatomic,readonly) unsigned long long privateClassification; 
@property (getter=privateSymptoms,nonatomic,readonly) unsigned long long privateSymptoms; 
@property (nonatomic,copy,readonly) NSArray * leadNames; 
@property (getter=_localizedSymptoms,nonatomic,readonly) NSArray * localizedSymptoms; 
@property (nonatomic,readonly) long long numberOfVoltageMeasurements; 
@property (nonatomic,copy,readonly) HKQuantity * samplingFrequency; 
@property (nonatomic,readonly) long long classification; 
@property (nonatomic,copy,readonly) HKQuantity * averageHeartRate; 
@property (nonatomic,readonly) long long symptomsStatus;                                               //@synthesize symptomsStatus=_symptomsStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
-(id)frequency;
-(unsigned long long)_classification;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)payload;
-(long long)classification;
-(HKQuantity *)averageHeartRate;
-(unsigned long long)privateClassification;
-(long long)symptomsStatus;
-(long long)symptoms;
-(void)_setAverageHeartRate:(id)arg1 ;
-(void)_setPrivateClassification:(unsigned long long)arg1 ;
-(void)_setSymptomsStatus:(long long)arg1 ;
-(unsigned long long)privateSymptoms;
-(id)_algorithmVersion;
-(void)enumerateDataForLead:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_localizedClassificationWithActiveAlgorithmVersion:(long long)arg1 ;
-(id)_localizedSymptoms;
-(long long)numberOfValues;
-(HKQuantity *)samplingFrequency;
-(long long)numberOfVoltageMeasurements;
-(void)_enumerateDataForLead:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)leadNames;
-(unsigned long long)_symptoms;
-(void)setReading:(Electrocardiogram*)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(BOOL)prepareForSaving:(id*)arg1 ;
@end

