//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLIndoorProtocolPrivate-Protocol.h"

@class CLAvailableVenuesStateMachine, CLGpsPosition, CLIndoorForegroundFetchRequest, CLIndoorLocation, CLIndoorTilePrefetcher, CLIndoorUniverse, NSString, NSURL, NSXPCConnection;

@interface CLIndoorProvider : NSObject <CLIndoorProtocolPrivate>
{
    struct optional<DeferredState> _deferredState;	// 8 = 0x8
    struct unique_ptr<FloorEnvironmentLoader, std::__1::default_delete<FloorEnvironmentLoader>> _floorEnvironmentLoader;	// 64 = 0x40
    struct unique_ptr<LocalizerApi, std::__1::default_delete<LocalizerApi>> _serviceLocalizer;	// 72 = 0x48
    struct optional<DataRun> _simulation;	// 80 = 0x50
    struct shared_ptr<PlatformInfo> _platformInfo;	// 136 = 0x88
    struct shared_ptr<_EventBusCollection> _eventBuses;	// 152 = 0x98
    struct shared_ptr<SensorCollection> _localizationSensorCollection;	// 168 = 0xa8
    struct shared_ptr<DynamicScanPriorityObserver> _scanPriorityObserver;	// 184 = 0xb8
    struct optional<DispatchLocalizerObserver> _localizerObserver;	// 200 = 0xc8
    struct optional<DispatchPossibleLocationTrackerObserver> _possibleLocationObserver;	// 224 = 0xe0
    struct shared_ptr<sensors::CombinedLogger> _sensorLogger;	// 248 = 0xf8
    optional_4453896d _paramOverrides;	// 264 = 0x108
    struct optional<Params> _params;	// 552 = 0x228
    CLGpsPosition *_lastOutdoorPositionAvailable;	// 576 = 0x240
    CLGpsPosition *_lastGpsPositionAvailable;	// 584 = 0x248
    duration_673274cf _lastGpsReceivedTime;	// 592 = 0x250
    CLAvailableVenuesStateMachine *_avlVenuesStateMachine;	// 600 = 0x258
    _Bool _localizationActive;	// 608 = 0x260
    _Bool _localizationStarted;	// 609 = 0x261
    _Bool _demoRunStarted;	// 610 = 0x262
    _Bool _isRegionalEnabled;	// 611 = 0x263
    int _prefetchFloorLimitIndoor;	// 612 = 0x264
    int _prefetchFloorLimitRegional;	// 616 = 0x268
    int _prefetchByteSizeLimitIndoor;	// 620 = 0x26c
    int _prefetchByteSizeLimitRegional;	// 624 = 0x270
    float _numOfDaysBeforeIndoorTileRedownload;	// 628 = 0x274
    float _numOfDaysBeforeRegionalTileRedownload;	// 632 = 0x278
    NSXPCConnection *_xpcConnection;	// 640 = 0x280
    CLIndoorTilePrefetcher *_prefetcher;	// 648 = 0x288
    NSURL *_workdir;	// 656 = 0x290
    CLIndoorLocation *_latestFix;	// 664 = 0x298
    CLIndoorUniverse *_indoorUniverse;	// 672 = 0x2a0
    CLIndoorForegroundFetchRequest *_currentForegroundFetchRequest;	// 680 = 0x2a8
    shared_ptr_00a9cfce _fsDb;	// 688 = 0x2b0
    optional_222981b3 _selectedLocation;	// 704 = 0x2c0
}

+ (id)getAvailabilityTilePathFromWorkdir:(id)arg1;	// IMP=0x0000000100360590
+ (id)makeReason:(id)arg1 withCode:(long long)arg2 withInfo:(id)arg3;	// IMP=0x0000000100360268
+ (id)makeReason:(id)arg1 withCode:(long long)arg2 withFailure:(id)arg3;	// IMP=0x000000010036012c
- (id).cxx_construct;	// IMP=0x000000010036b214
- (void).cxx_destruct;	// IMP=0x000000010036aef4
@property(nonatomic) optional_222981b3 selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(retain, nonatomic) CLIndoorForegroundFetchRequest *currentForegroundFetchRequest; // @synthesize currentForegroundFetchRequest=_currentForegroundFetchRequest;
@property(retain, nonatomic) CLIndoorUniverse *indoorUniverse; // @synthesize indoorUniverse=_indoorUniverse;
@property(nonatomic) _Bool isRegionalEnabled; // @synthesize isRegionalEnabled=_isRegionalEnabled;
@property(retain, nonatomic) CLIndoorLocation *latestFix; // @synthesize latestFix=_latestFix;
@property(nonatomic) _Bool demoRunStarted; // @synthesize demoRunStarted=_demoRunStarted;
@property(nonatomic) _Bool localizationStarted; // @synthesize localizationStarted=_localizationStarted;
@property(nonatomic) _Bool localizationActive; // @synthesize localizationActive=_localizationActive;
@property(nonatomic) float numOfDaysBeforeRegionalTileRedownload; // @synthesize numOfDaysBeforeRegionalTileRedownload=_numOfDaysBeforeRegionalTileRedownload;
@property(nonatomic) float numOfDaysBeforeIndoorTileRedownload; // @synthesize numOfDaysBeforeIndoorTileRedownload=_numOfDaysBeforeIndoorTileRedownload;
@property(nonatomic) int prefetchByteSizeLimitRegional; // @synthesize prefetchByteSizeLimitRegional=_prefetchByteSizeLimitRegional;
@property(nonatomic) int prefetchByteSizeLimitIndoor; // @synthesize prefetchByteSizeLimitIndoor=_prefetchByteSizeLimitIndoor;
@property(nonatomic) int prefetchFloorLimitRegional; // @synthesize prefetchFloorLimitRegional=_prefetchFloorLimitRegional;
@property(nonatomic) int prefetchFloorLimitIndoor; // @synthesize prefetchFloorLimitIndoor=_prefetchFloorLimitIndoor;
@property(copy, nonatomic) NSURL *workdir; // @synthesize workdir=_workdir;
@property(nonatomic) __weak CLIndoorTilePrefetcher *prefetcher; // @synthesize prefetcher=_prefetcher;
@property(nonatomic) shared_ptr_00a9cfce fsDb; // @synthesize fsDb=_fsDb;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)gpsSignalQualityAvailable:(id)arg1;	// IMP=0x000000010036ac40
- (void)gpsEstimateAvailable:(id)arg1;	// IMP=0x000000010036a700
- (void)outdoorLocationAvailable:(id)arg1;	// IMP=0x0000000100369f34
- (void)updateUniverseIfAllowedAndNecessary:(CDStruct_4d1fbe9a)arg1;	// IMP=0x00000001003698fc
- (void)initializeIndoorUniverse:(id)arg1 atLocation:(id)arg2;	// IMP=0x0000000100369318
- (void)stopLocalizer;	// IMP=0x0000000100368ffc
- (void)onQueueStopUpdatingLocation:(int)arg1;	// IMP=0x0000000100368e28
- (void)stopUpdatingLocation;	// IMP=0x0000000100368e18
- (void)onQueueInterruptDownloads:(int)arg1;	// IMP=0x0000000100368ddc
- (void)startLocalizer;	// IMP=0x00000001003672ec
- (void)startUpdatingLocationAtLocation:(id)arg1;	// IMP=0x00000001003665c8
- (void)startUpdatingLocationDeferred:(id)arg1;	// IMP=0x0000000100366170
- (void)onQueueLocalizeOnSelection:(const struct SelectedLocations *)arg1 withParameterOverrides:(optional_4453896d)arg2;	// IMP=0x000000010036587c
- (id)initializeServiceApi;	// IMP=0x00000001003653a4
- (void)setLocationGroups:(id)arg1;	// IMP=0x0000000100364c74
- (void)playbackDatarun:(id)arg1;	// IMP=0x00000001003640f8
- (_Bool)onQueueProcessCompletedFetch:(id)arg1;	// IMP=0x00000001003637c4
- (void)requestForegroundTileDownload;	// IMP=0x00000001003634c0
- (void)foregroundRequestCompleted:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100362ed8
- (void)foregroundRequestCompleted:(id)arg1;	// IMP=0x0000000100362ad0
- (void)foregroundTileDownloadComplete;	// IMP=0x00000001003620a8
- (void)onQueueSelectedLocationDownloadCompleted:(const struct SelectedLocations *)arg1 forAction:(unsigned char)arg2;	// IMP=0x0000000100361ec4
- (void)changeLocationGroups:(id)arg1;	// IMP=0x0000000100361dd8
- (void)requestLocationTilesForGroup:(id)arg1 usingAvailabilityTile:(const struct AvailabilityData *)arg2 forAction:(unsigned char)arg3;	// IMP=0x0000000100361888
- (id)locationRequests:(id)arg1 usingAvailabilityTile:(const struct AvailabilityData *)arg2 forAction:(unsigned char)arg3;	// IMP=0x0000000100360928
- (id)getAvailabilityTileParserAndSetParams:(id)arg1;	// IMP=0x0000000100360610
- (void)notify:(id)arg1 failedWithReason:(id)arg2;	// IMP=0x0000000100360080
- (void)notifyProxyOfDownloadError:(id)arg1;	// IMP=0x000000010035fd74
- (void)notifyProxyOfDownloadError;	// IMP=0x000000010035fcf8
- (void)setApiKey:(id)arg1 onServer:(id)arg2;	// IMP=0x000000010035fc5c
- (void)setApiKey:(id)arg1;	// IMP=0x000000010035fbc0
- (void)onConnectionQueueShutdown;	// IMP=0x000000010035f960
- (void)onQueueInvalidate:(int)arg1;	// IMP=0x000000010035f2c4
- (void)dealloc;	// IMP=0x000000010035f0d8
- (void)onQueueNotifyLocationContext:(_Bool)arg1 withLocationContext:(int)arg2;	// IMP=0x000000010035efe4
- (void)onQueueNotify:(const struct PoseEstimate *)arg1;	// IMP=0x000000010035e934
- (struct DeferredState *)mutableDeferredState;	// IMP=0x000000010035e5d4
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010035da4c
- (id)init;	// IMP=0x000000010035d9fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

