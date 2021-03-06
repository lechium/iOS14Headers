/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@protocol WFHealthFeatureObserver, OS_dispatch_queue;
@class HKSPFeatureAvailabilityStore, NSObject, NSString;

@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver> {

	id<WFHealthFeatureObserver> _observer;
	HKSPFeatureAvailabilityStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _onboardingCompletedKey;

}

@property (nonatomic,retain) HKSPFeatureAvailabilityStore * store;                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long sleepOnboardingStatus; 
@property (nonatomic,readonly) NSString * onboardingCompletedKey;                      //@synthesize onboardingCompletedKey=_onboardingCompletedKey - In the implementation block
@property (assign,nonatomic,__weak) id<WFHealthFeatureObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(void)setStore:(HKSPFeatureAvailabilityStore *)arg1 ;
-(HKSPFeatureAvailabilityStore *)store;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserver:(id<WFHealthFeatureObserver>)arg1 ;
-(id<WFHealthFeatureObserver>)observer;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(id)initWithSleepFeature:(unsigned long long)arg1 ;
-(unsigned long long)sleepOnboardingStatus;
-(void)setSleepOnboardingStatus:(unsigned long long)arg1 ;
-(void)getSleepOnboardingStatus:(/*^block*/id)arg1 ;
-(NSString *)onboardingCompletedKey;
@end

