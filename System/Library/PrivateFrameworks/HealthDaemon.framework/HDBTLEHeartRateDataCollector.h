/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDataCollector.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDDataCollectorConfiguration, NSArray, NSMutableDictionary, HKHealthService, NSString;

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	HDDataCollectorConfiguration* _configuration;
	NSArray* _oneShotServices;
	NSMutableDictionary* _pendingSessions;
	HKHealthService* _connectedService;
	unsigned long long _connectedSessionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2 ;
-(id)sourceForDataAggregator:(id)arg1 ;
-(void)_queue_handleCharacteristic:(id)arg1 device:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_configurationChanged:(id)arg1 ;
-(void)_queue_service:(id)arg1 sessionDidDisconnect:(unsigned long long)arg2 ;
-(void)_queue_service:(id)arg1 sessionDidConnect:(unsigned long long)arg2 ;
-(id)_queue_currentState;
-(void)startOneShotCollectionForService:(id)arg1 ;
-(void)_cancelSessionsWithIdentifiers:(id)arg1 ;
-(id)aggregator;
-(void)_queue_updateForCurrentConfiguration;
-(BOOL)_queue_startHeartRateServices:(id)arg1 ;
-(void)_queue_service:(id)arg1 session:(unsigned long long)arg2 statusDidChange:(long long)arg3 finished:(BOOL)arg4 error:(id)arg5 ;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2 ;
-(id)identifierForDataAggregator:(id)arg1 ;
-(void)_queue_stopHeartRateCollection;
-(id)_heartRatePairingsWithError:(id*)arg1 ;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(void)_queue_startHeartRateCollection;
-(void)_queue_stateDidChange;
-(NSString *)description;
-(Class)sensorDatumClassForAggregator:(id)arg1 ;
@end

