/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ENExposureDetectionHistorySession, ENExposureDetectionDaemonSessionStatistics, ENExposureCalculationSession, ENAdvertisementDatabaseQuerySession, ENXPCClient, ENExposureConfiguration, ENExposureDatabase, ENExposureClassification, ENRegionConfiguration, ENRegionServerConfiguration, ENRegionServerExposureConfiguration, NSDate;

@interface ENExposureDetectionDaemonSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ENExposureDetectionHistorySession* _historySession;
	BOOL _finished;
	BOOL _prepared;
	BOOL _useCache;
	BOOL _skipFileSigningVerification;
	ENExposureDetectionDaemonSessionStatistics* _statistics;
	ENExposureCalculationSession* _exposureCalculationSession;
	ENAdvertisementDatabaseQuerySession* _advertisementDatabaseQuerySession;
	ENXPCClient* _client;
	ENExposureConfiguration* _clientExposureConfiguration;
	ENExposureDatabase* _exposureDatabase;
	ENExposureClassification* _previousExposureClassification;
	ENRegionConfiguration* _regionConfiguration;
	ENRegionServerConfiguration* _regionServerConfiguration;
	ENRegionServerExposureConfiguration* _serverExposureConfiguration;
	NSDate* _sessionDate;
	ENExposureConfiguration* _sessionExposureConfiguration;

}

@property (nonatomic,retain) ENAdvertisementDatabaseQuerySession * advertisementDatabaseQuerySession;              //@synthesize advertisementDatabaseQuerySession=_advertisementDatabaseQuerySession - In the implementation block
@property (nonatomic,retain) ENXPCClient * client;                                                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) ENExposureConfiguration * clientExposureConfiguration;                                //@synthesize clientExposureConfiguration=_clientExposureConfiguration - In the implementation block
@property (nonatomic,retain) ENExposureDatabase * exposureDatabase;                                                //@synthesize exposureDatabase=_exposureDatabase - In the implementation block
@property (nonatomic,retain) ENExposureClassification * previousExposureClassification;                            //@synthesize previousExposureClassification=_previousExposureClassification - In the implementation block
@property (nonatomic,copy) ENRegionConfiguration * regionConfiguration;                                            //@synthesize regionConfiguration=_regionConfiguration - In the implementation block
@property (nonatomic,copy) ENRegionServerConfiguration * regionServerConfiguration;                                //@synthesize regionServerConfiguration=_regionServerConfiguration - In the implementation block
@property (nonatomic,copy) ENRegionServerExposureConfiguration * serverExposureConfiguration;                      //@synthesize serverExposureConfiguration=_serverExposureConfiguration - In the implementation block
@property (nonatomic,copy) NSDate * sessionDate;                                                                   //@synthesize sessionDate=_sessionDate - In the implementation block
@property (nonatomic,copy,readonly) ENExposureConfiguration * sessionExposureConfiguration;                        //@synthesize sessionExposureConfiguration=_sessionExposureConfiguration - In the implementation block
@property (nonatomic,copy,readonly) ENExposureDetectionDaemonSessionStatistics * statistics;                       //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) BOOL skipFileSigningVerification;                                                     //@synthesize skipFileSigningVerification=_skipFileSigningVerification - In the implementation block
@property (nonatomic,readonly) ENExposureCalculationSession * exposureCalculationSession;                          //@synthesize exposureCalculationSession=_exposureCalculationSession - In the implementation block
-(ENExposureDetectionDaemonSessionStatistics *)statistics;
-(void)invalidate;
-(void)setClient:(ENXPCClient *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(ENXPCClient *)client;
-(id)finishAndReturnError:(id*)arg1 ;
-(id)description;
-(BOOL)prepareConfiguration:(id)arg1 bundleIdentifier:(id)arg2 nowDate:(id)arg3 expiryInterval:(double)arg4 error:(id*)arg5 ;
-(BOOL)_checkPreparedAndReturnError:(id*)arg1 ;
-(BOOL)_verifySignature:(id)arg1 forFile:(id)arg2 publicKey:(id)arg3 error:(id*)arg4 ;
-(void)_updateStatisticsWithHandler:(/*^block*/id)arg1 ;
-(id)_prepareExposureCalculationSessionWithError:(id*)arg1 ;
-(void)_addFileToHistory:(id)arg1 endpoint:(id)arg2 keyCount:(id)arg3 matchCount:(id)arg4 ;
-(BOOL)_shouldMatchPersistenKey:(id)arg1 ;
-(id)getSummaryAndReturnError:(id*)arg1 ;
-(BOOL)classifyExposureWithResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)_checkFinishedAndReturnError:(id*)arg1 ;
-(id)getAnalysisSessionAndReturnError:(id*)arg1 ;
-(BOOL)prepareAndReturnError:(id*)arg1 ;
-(BOOL)addMatchesFromKeyFile:(id)arg1 signature:(id)arg2 publicKey:(id)arg3 endpoint:(id)arg4 error:(id*)arg5 ;
-(BOOL)skipFileSigningVerification;
-(void)setSkipFileSigningVerification:(BOOL)arg1 ;
-(ENExposureCalculationSession *)exposureCalculationSession;
-(ENAdvertisementDatabaseQuerySession *)advertisementDatabaseQuerySession;
-(void)setAdvertisementDatabaseQuerySession:(ENAdvertisementDatabaseQuerySession *)arg1 ;
-(ENExposureConfiguration *)clientExposureConfiguration;
-(void)setClientExposureConfiguration:(ENExposureConfiguration *)arg1 ;
-(ENExposureDatabase *)exposureDatabase;
-(void)setExposureDatabase:(ENExposureDatabase *)arg1 ;
-(ENExposureClassification *)previousExposureClassification;
-(void)setPreviousExposureClassification:(ENExposureClassification *)arg1 ;
-(ENRegionConfiguration *)regionConfiguration;
-(void)setRegionConfiguration:(ENRegionConfiguration *)arg1 ;
-(ENRegionServerConfiguration *)regionServerConfiguration;
-(void)setRegionServerConfiguration:(ENRegionServerConfiguration *)arg1 ;
-(ENRegionServerExposureConfiguration *)serverExposureConfiguration;
-(void)setServerExposureConfiguration:(ENRegionServerExposureConfiguration *)arg1 ;
-(NSDate *)sessionDate;
-(void)setSessionDate:(NSDate *)arg1 ;
-(ENExposureConfiguration *)sessionExposureConfiguration;
@end
