/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class RTRoutineManager, NSBundle, CLLocationManager, NSMutableDictionary, NSObject, NSArray, NSString;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {

	void* coreLocationDyLibHandle;
	void* coreRoutineDyLibHandle;
	RTRoutineManager* routineManager;
	NSBundle* mobileWiFiBundle;
	CLLocationManager* mobileWiFiLocationManager;
	Class CLLocationManagerClassRef;
	NSMutableDictionary* pendingLOIBlocks;
	NSObject*<OS_dispatch_source> locationRequestTimer;
	/*function pointer*/void* clCopyTechnologiesInUseFunc;
	BOOL _gpsInUse;
	NSArray* _allLOIs;

}

@property (retain) NSArray * allLOIs;                               //@synthesize allLOIs=_allLOIs - In the implementation block
@property (assign,nonatomic) BOOL gpsInUse;                         //@synthesize gpsInUse=_gpsInUse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSArray *)allLOIs;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)unloadFrameworks;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)fetchCurrentLocationLOIOnQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAllLOIs:(NSArray *)arg1 ;
-(BOOL)loadCoreLocation;
-(void)dealloc;
-(BOOL)authorizedToUseCoreRoutine;
-(void)fetchLOICountOnMainQueueWithReply:(/*^block*/id)arg1 ;
-(BOOL)loadCoreRoutine;
-(unsigned long long)addPendingLOIBlocks:(/*^block*/id)arg1 ;
-(BOOL)gpsInUse;
-(void)cleanUpPendingLOIBlocks;
-(void)showLocationArrow;
-(id)init;
-(long long)preflightFrameworks;
-(void)getLocationTechnologyState;
-(void)callPendingLOIBlocksWithCLLocation:(id)arg1 LOI:(id)arg2 andError:(id)arg3 ;
-(id)mobileWiFiLocationManager;
-(void)setGpsInUse:(BOOL)arg1 ;
@end

