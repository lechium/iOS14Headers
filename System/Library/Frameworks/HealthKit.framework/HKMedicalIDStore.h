/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, _HKMedicalIDData, NSString;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKTaskServerProxyProvider* _setupStatusProxyProvider;
	_HKMedicalIDData* _lastFetchedMedicalIDData;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) long long medicalIDSetUpStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setupStatusServerInterface;
+(id)serverInterface;
+(id)setupStatusClientInterface;
+(id)clientInterface;
+(id)setupStatusTaskIdentifier;
+(id)taskIdentifier;
-(void)fetchMedicalIDClinicalContactsWithCompletion:(/*^block*/id)arg1 ;
-(long long)medicalIDSetUpStatus;
-(void)connectionInvalidated;
-(void)fetchMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(id)exportedInterface;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(/*^block*/id)arg1 ;
-(void)setLastFetchedMedicalIDData:(id)arg1 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(id)remoteInterface;
-(void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)lastFetchedMedicalIDData;
@end
