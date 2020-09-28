/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject {

	CLSLocationOfInterestCache* _visitsCache;
	BOOL _routineIsAvailable;
	NSDateInterval* _fetchDateInterval;
	NSMutableSet* _pendingPinningVisitIdentifiers;
	CLSRoutineServiceStatisticsStruct _statistics;

}

@property (nonatomic,retain) NSDateInterval * fetchDateInterval;                         //@synthesize fetchDateInterval=_fetchDateInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingPinningVisitIdentifiers;              //@synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers - In the implementation block
@property (nonatomic,readonly) CLSLocationOfInterestCache * visitsCache;                 //@synthesize visitsCache=_visitsCache - In the implementation block
@property (assign,nonatomic) BOOL routineIsAvailable;                                    //@synthesize routineIsAvailable=_routineIsAvailable - In the implementation block
@property (readonly) CLSRoutineServiceStatisticsStruct statistics;                       //@synthesize statistics=_statistics - In the implementation block
-(BOOL)routineIsAvailable;
-(CLSRoutineServiceStatisticsStruct)statistics;
-(void)setFetchDateInterval:(NSDateInterval *)arg1 ;
-(void)_buildLocationsOfInterestCache;
-(BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(CLSLocationOfInterestCache *)visitsCache;
-(NSDateInterval *)fetchDateInterval;
-(void)setRoutineIsAvailable:(BOOL)arg1 ;
-(void)postProcessLocationsOfInterest;
-(id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2 ;
-(id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2 ;
-(long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double*)arg2 ;
-(id)_placemarksFromLocationsOfInterest:(id)arg1 ;
-(void)invalidateLocationsOfInterest;
-(void)_pinPendingVisits;
-(void)setPendingPinningVisitIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)hasLocationsOfInterestInformation;
-(NSMutableSet *)pendingPinningVisitIdentifiers;
-(id)initWithFetchDateInterval:(id)arg1 ;
-(double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1 ;
-(id)placemarksOfInterestOfType:(long long)arg1 ;
-(unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1 ;
-(id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1 ;
-(id)locationsOfInterestOfType:(long long)arg1 ;
-(id)locationOfInterestAtLocation:(id)arg1 ;
-(id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2 ;
@end
