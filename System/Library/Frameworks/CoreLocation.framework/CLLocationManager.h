/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,getter=isMatchInfoEnabled,nonatomic) BOOL matchInfoEnabled; 
@property (assign,setter=_setGroundAltitudeEnabled:,getter=_isGroundAltitudeEnabled,nonatomic) BOOL _groundAltitudeEnabled; 
@property (assign,nonatomic) BOOL privateMode; 
@property (nonatomic,readonly) BOOL locationServicesAvailable; 
@property (nonatomic,readonly) BOOL locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) BOOL supportInfo; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (nonatomic,readonly) BOOL _limitsPrecision; 
@property (nonatomic,readonly) int _authorizationStatus; 
@property (getter=isAuthorizedForPreciseLocation,nonatomic,readonly) BOOL authorizedForPreciseLocation; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) long long accuracyAuthorization; 
@property (getter=isAuthorizedForWidgetUpdates,nonatomic,readonly) BOOL authorizedForWidgetUpdates; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) BOOL locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) BOOL showsBackgroundLocationIndicator; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedBeaconConstraints; 
+(BOOL)shutdownDaemon;
+(void)setLocationServicesEnabled:(BOOL)arg1 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)authorizationStatus;
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(unsigned long long)entityAuthorizationForLocationDictionary:(id)arg1 ;
+(void)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1 ;
+(BOOL)locationServicesEnabled;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(id)sharedManager;
+(id)setAuthorizationPromptMapDisplayEnabled:(BOOL)arg1 ;
+(BOOL)locationServicesEnabled:(BOOL)arg1 ;
+(BOOL)isRangingAvailable;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(BOOL)authorizationPromptMapDisplayEnabled;
+(BOOL)significantLocationChangeMonitoringAvailable;
+(BOOL)isMonitoringAvailableForClass:(Class)arg1 ;
+(BOOL)regionMonitoringAvailable;
+(BOOL)regionMonitoringEnabled;
+(BOOL)mapCorrectionAvailable;
+(BOOL)_checkAndExerciseAuthorizationForBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)isPeerRangingAvailable;
+(BOOL)_checkAndExerciseAuthorizationForBundle:(id)arg1 error:(id*)arg2 ;
+(BOOL)deferredLocationUpdatesAvailable;
+(id)_archivedAuthorizationDecisionsWithError:(id*)arg1 ;
+(id)_applyArchivedAuthorizationDecisions:(id)arg1 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2 ;
+(BOOL)bundleSupported:(id)arg1 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundleIdentifier:(id)arg3 ;
+(void)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 forBundle:(id)arg3 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(void)setIncidentalUseMode:(int)arg1 forBundle:(id)arg2 ;
+(void)setIncidentalUseMode:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(BOOL)dumpLogsWithMessage:(id)arg1 ;
+(void)getIncidentalUseMode:(int*)arg1 forBundle:(id)arg2 ;
+(void)getIncidentalUseMode:(int*)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setTemporaryAuthorizationGranted:(BOOL)arg1 forBundle:(id)arg2 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)dumpDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
+(BOOL)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(id)_getClientTransientAuthorizationInfoForBundleId:(id)arg1 error:(id*)arg2 ;
+(id)_getClientTransientAuthorizationInfoForBundlePath:(id)arg1 error:(id*)arg2 ;
+(id)_setClientTransientAuthorizationInfoForBundleId:(id)arg1 data:(id)arg2 ;
+(id)_setClientTransientAuthorizationInfoForBundlePath:(id)arg1 data:(id)arg2 ;
+(int)_authorizationStatus;
+(void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensationType:(int)arg2 forLocationDictionary:(id)arg3 ;
+(BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(BOOL)isLocationActiveForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(BOOL)hasUsedBackgroundLocationServices:(id)arg1 ;
+(unsigned long long)allowableAuthorizationForLocationDictionary:(id)arg1 ;
+(BOOL)correctiveCompensationStatusForLocationDictionary:(id)arg1 ;
+(unsigned long long)incidentalUseModeForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 forLocationDictionary:(id)arg2 ;
+(void)setEntityAuthorization:(unsigned long long)arg1 withCorrectiveCompensation:(BOOL)arg2 forLocationDictionary:(id)arg3 ;
+(BOOL)backgroundIndicatorEnabledForLocationDictionary:(id)arg1 ;
+(void)setBackgroundIndicatorEnabled:(BOOL)arg1 forLocationDictionary:(id)arg2 ;
+(BOOL)headingAvailable;
-(void)requestWhenInUseAuthorization;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(NSSet *)rangedRegions;
-(void)requestLocation;
-(long long)activityType;
-(BOOL)isAuthorizedForPreciseLocation;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)setActivityType:(long long)arg1 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissHeadingCalibrationDisplay;
-(void)_updateVIOEstimation:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)startUpdatingVehicleHeading;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(double)expectedGpsUpdateInterval;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)stopUpdatingLocation;
-(CLHeading *)heading;
-(void)stopUpdatingVehicleSpeed;
-(double)distanceFilter;
-(void)stopUpdatingVehicleHeading;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setDistanceFilter:(double)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(int)headingOrientation;
-(void)onClientEventLocation:(id)arg1 forceMapMatching:(BOOL)arg2 type:(id)arg3 ;
-(int)authorizationStatus;
-(id)technologiesInUse;
-(double)desiredAccuracy;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)startUpdatingLocation;
-(void)_stopFetchingContinuousPlaceInferences;
-(void)resumeLocationUpdates;
-(void)markAsHavingReceivedLocation;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)setHeadingFilter:(double)arg1 ;
-(void)stopMonitoringSignificantLocationChanges;
-(id)_initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg1 ;
-(void)setSupportInfo:(BOOL)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)callPlaceInferenceHandlerWithResult:(id)arg1 error:(id)arg2 ;
-(long long)accuracyAuthorization;
-(void)_fetchContinuousPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)locationServicesEnabled;
-(BOOL)privateMode;
-(id)_startPlaceInferencesCommonLogic:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(NSSet *)rangedBeaconConstraints;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)stopMonitoringVisits;
-(CLLocation *)location;
-(void)_updateARSessionState:(unsigned long long)arg1 ;
-(void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 ;
-(void)dealloc;
-(id)appsUsingLocationWithDetails;
-(void)onClientEventHeading:(id)arg1 ;
-(void)requestRangingToPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 limitingBundleIdentifier:(id)arg2 delegate:(id)arg3 onQueue:(id)arg4 ;
-(void)startMonitoringSignificantLocationChanges;
-(BOOL)locationServicesAvailable;
-(id)appsUsingLocation;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(id)_groundAltitudeAtLocation:(id)arg1 ;
-(void)setPurpose:(NSString *)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)setPausesLocationUpdatesAutomatically:(BOOL)arg1 ;
-(BOOL)_isFusionInfoEnabled;
-(void)onClientEventPeerRanging:(id)arg1 ;
-(void)respondToRangingFromPeers:(id)arg1 timeoutSeconds:(double)arg2 ;
-(BOOL)_isGroundAltitudeEnabled;
-(void)disallowDeferredLocationUpdates;
-(void)onClientEventRegion:(id)arg1 ;
-(void)startUpdatingLocationWithPrompt;
-(int)_authorizationStatus;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 silo:(id)arg4 ;
-(id)init;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 ;
-(void)onClientEventPeerRangingError:(id)arg1 ;
-(void)_setGroundAltitudeEnabled:(BOOL)arg1 ;
-(void)_startMonitoringSignificantLocationChangesOfDistance:(double)arg1 withPowerBudget:(int)arg2 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)startRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(BOOL)locationServicesApproved;
-(void)onRangingRequestTimeout;
-(BOOL)isDynamicAccuracyReductionEnabled;
-(void)startRangingToPeers:(id)arg1 intervalSeconds:(unsigned long long)arg2 ;
-(void)stopRangingBeaconsSatisfyingConstraint:(id)arg1 ;
-(BOOL)_limitsPrecision;
-(NSSet *)monitoredRegions;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(void)_updateVLLocalizationResult:(id)arg1 ;
-(BOOL)isAuthorizedForWidgetUpdates;
-(NSString *)purpose;
-(void)onClientEventError:(id)arg1 ;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)resetApps;
-(void)_fetchPlaceInferencesWithFidelityPolicy:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(id<CLLocationManagerDelegate>)delegate;
-(BOOL)allowsAlteredAccessoryLocations;
-(void)onLocationRequestTimeout;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)onClientEventPeerRangingRequestProcessed:(id)arg1 ;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)registerAsLocationClient;
-(void)stopTechStatusUpdates;
-(void)stopRangingToPeers:(id)arg1 ;
-(double)headingFilter;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)requestStateForRegion:(id)arg1 ;
-(BOOL)headingAvailable;
-(BOOL)isMatchInfoEnabled;
-(double)maximumRegionMonitoringDistance;
-(BOOL)pausesLocationUpdatesAutomatically;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(CLClientRef)internalClient;
-(void)_startLeechingVisits;
-(void)setPrivateMode:(BOOL)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(void)setIsActuallyAWatchKitExtension:(BOOL)arg1 ;
-(void)stopRangingFromPeers:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(BOOL)supportInfo;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)onClientEventSignificantLocationVisit:(id)arg1 ;
-(void)_setFusionInfoEnabled:(BOOL)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)stopAppStatusUpdates;
-(void)startMonitoringVisits;
-(void)requestAlwaysAuthorization;
-(void)_requestTemporaryFullAccuracyWithUsageDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)onClientEventPlaceInferenceResult:(id)arg1 ;
-(void)startAppStatusUpdates;
-(void)startRangingFromPeers:(id)arg1 ;
-(void)startTechStatusUpdates;
-(void)pauseLocationUpdates:(BOOL)arg1 ;
-(void)onClientEventNoLocationWatchdog:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventPlaceInferenceError:(id)arg1 ;
@end
