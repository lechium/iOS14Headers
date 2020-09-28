/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libBKDM1.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libBKDM1.dylib/libBKDM1.dylib-Structs.h>
@class ADStorage, NSMutableDictionary, NSString, NSDate, BiometricKitXPCServerMesa;

@interface BiometricKitDStatistics : NSObject {

	ADStorage* _storage;
	BOOL _fingerOn;
	BOOL _unlockOperationInProgress;
	BOOL _unlockOperationStartedByCommand;
	BOOL _matchOperationInProgress;
	BOOL _haveMatchResult;
	BOOL _waitingForMatchResult;
	BOOL _haveImageToProcess;
	BOOL _matchWithDesensePauseLogged;
	BOOL _deviceWokeUpByHomeButton;
	BOOL _deviceWokeUpByLiftToWake;
	BOOL _pressureMitigationUsed;
	BOOL _prearmedApplePay;
	BOOL _lastMatchResultWakePin;
	BOOL _homeButtonPressedDuringTouch;
	int _lastBioOp;
	int _lastMatchUseCase;
	unsigned _sksLockState;
	unsigned _previousSKSLockState;
	float _modulationRatio;
	NSMutableDictionary* _templateStats;
	long long _lastStartedMatch;
	NSString* _clientName;
	unsigned long long _lastMatchResultID;
	unsigned long long _sensorOperationMode;
	NSDate* _sensorOperationStartDate;
	unsigned long long _imagesPerFingerDown;
	unsigned long long _sensorCaptureRestartsPerFingerDown;
	unsigned long long _imageCaptureRestartsPerFingerDown;
	unsigned long long _failTouchesToUnlock;
	unsigned long long _failQuickTapsToUnlock;
	unsigned long long _failTouchesToMatch;
	unsigned long long _matchRestarts;
	long long _calibrationDataState;
	BiometricKitXPCServerMesa* _server;

}

@property (retain) NSMutableDictionary * templateStats;                                //@synthesize templateStats=_templateStats - In the implementation block
@property (assign) BOOL fingerOn;                                                      //@synthesize fingerOn=_fingerOn - In the implementation block
@property (assign) BOOL unlockOperationInProgress;                                     //@synthesize unlockOperationInProgress=_unlockOperationInProgress - In the implementation block
@property (assign) BOOL unlockOperationStartedByCommand;                               //@synthesize unlockOperationStartedByCommand=_unlockOperationStartedByCommand - In the implementation block
@property (assign) BOOL matchOperationInProgress;                                      //@synthesize matchOperationInProgress=_matchOperationInProgress - In the implementation block
@property (assign) BOOL haveMatchResult;                                               //@synthesize haveMatchResult=_haveMatchResult - In the implementation block
@property (assign) BOOL waitingForMatchResult;                                         //@synthesize waitingForMatchResult=_waitingForMatchResult - In the implementation block
@property (assign) BOOL haveImageToProcess;                                            //@synthesize haveImageToProcess=_haveImageToProcess - In the implementation block
@property (assign) BOOL matchWithDesensePauseLogged;                                   //@synthesize matchWithDesensePauseLogged=_matchWithDesensePauseLogged - In the implementation block
@property (assign) BOOL deviceWokeUpByHomeButton;                                      //@synthesize deviceWokeUpByHomeButton=_deviceWokeUpByHomeButton - In the implementation block
@property (assign) BOOL deviceWokeUpByLiftToWake;                                      //@synthesize deviceWokeUpByLiftToWake=_deviceWokeUpByLiftToWake - In the implementation block
@property (assign) BOOL pressureMitigationUsed;                                        //@synthesize pressureMitigationUsed=_pressureMitigationUsed - In the implementation block
@property (assign) BOOL prearmedApplePay;                                              //@synthesize prearmedApplePay=_prearmedApplePay - In the implementation block
@property (assign) BOOL lastMatchResultWakePin;                                        //@synthesize lastMatchResultWakePin=_lastMatchResultWakePin - In the implementation block
@property (assign) BOOL homeButtonPressedDuringTouch;                                  //@synthesize homeButtonPressedDuringTouch=_homeButtonPressedDuringTouch - In the implementation block
@property (assign) int lastBioOp;                                                      //@synthesize lastBioOp=_lastBioOp - In the implementation block
@property (assign) long long lastStartedMatch;                                         //@synthesize lastStartedMatch=_lastStartedMatch - In the implementation block
@property (assign) int lastMatchUseCase;                                               //@synthesize lastMatchUseCase=_lastMatchUseCase - In the implementation block
@property (retain) NSString * clientName;                                              //@synthesize clientName=_clientName - In the implementation block
@property (assign) unsigned long long lastMatchResultID;                               //@synthesize lastMatchResultID=_lastMatchResultID - In the implementation block
@property (assign) unsigned sksLockState;                                              //@synthesize sksLockState=_sksLockState - In the implementation block
@property (assign) unsigned previousSKSLockState;                                      //@synthesize previousSKSLockState=_previousSKSLockState - In the implementation block
@property (assign) unsigned long long sensorOperationMode;                             //@synthesize sensorOperationMode=_sensorOperationMode - In the implementation block
@property (retain) NSDate * sensorOperationStartDate;                                  //@synthesize sensorOperationStartDate=_sensorOperationStartDate - In the implementation block
@property (assign) unsigned long long imagesPerFingerDown;                             //@synthesize imagesPerFingerDown=_imagesPerFingerDown - In the implementation block
@property (assign) unsigned long long sensorCaptureRestartsPerFingerDown;              //@synthesize sensorCaptureRestartsPerFingerDown=_sensorCaptureRestartsPerFingerDown - In the implementation block
@property (assign) unsigned long long imageCaptureRestartsPerFingerDown;               //@synthesize imageCaptureRestartsPerFingerDown=_imageCaptureRestartsPerFingerDown - In the implementation block
@property (assign) unsigned long long failTouchesToUnlock;                             //@synthesize failTouchesToUnlock=_failTouchesToUnlock - In the implementation block
@property (assign) unsigned long long failQuickTapsToUnlock;                           //@synthesize failQuickTapsToUnlock=_failQuickTapsToUnlock - In the implementation block
@property (assign) unsigned long long failTouchesToMatch;                              //@synthesize failTouchesToMatch=_failTouchesToMatch - In the implementation block
@property (assign) unsigned long long matchRestarts;                                   //@synthesize matchRestarts=_matchRestarts - In the implementation block
@property (assign) long long calibrationDataState;                                     //@synthesize calibrationDataState=_calibrationDataState - In the implementation block
@property (assign) float modulationRatio;                                              //@synthesize modulationRatio=_modulationRatio - In the implementation block
@property (assign) BiometricKitXPCServerMesa * server;                                 //@synthesize server=_server - In the implementation block
+(id)statistics;
+(unsigned)clusterCount:(const SCD_Struct_Bi7*)arg1 ;
-(BOOL)isMesaEnabled;
-(void)setMatchRestarts:(unsigned long long)arg1 ;
-(void)setModulationRatio:(float)arg1 ;
-(void)templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(void)setServer:(BiometricKitXPCServerMesa *)arg1 ;
-(void)setFailQuickTapsToUnlock:(unsigned long long)arg1 ;
-(void)cancel;
-(BOOL)deviceWokeUpByLiftToWake;
-(BOOL)matchWithDesensePauseLogged;
-(void)updateDailyValues;
-(void)unlockAttemptCanceled:(BOOL)arg1 ;
-(void)setHaveImageToProcess:(BOOL)arg1 ;
-(void)startMatchOperation:(id)arg1 ;
-(BOOL)homeButtonPressedDuringTouch;
-(void)setHomeButtonPressedDuringTouch:(BOOL)arg1 ;
-(unsigned long long)matchRestarts;
-(BOOL)unlockOperationInProgress;
-(int)lastBioOp;
-(unsigned long long)totalPrimaryClusterNodeCount;
-(NSMutableDictionary *)templateStats;
-(void)setLastBioOp:(int)arg1 ;
-(id)getSensorSelfTestResult;
-(unsigned long long)failTouchesToMatch;
-(void)matchAttemptFinished:(BOOL)arg1 ;
-(void)setLastStartedMatch:(long long)arg1 ;
-(void)setSensorOperationStartDate:(NSDate *)arg1 ;
-(void)setMatchWithDesensePauseLogged:(BOOL)arg1 ;
-(unsigned long long)imagesPerFingerDown;
-(void)setFailTouchesToMatch:(unsigned long long)arg1 ;
-(void)setDeviceWokeUpByHomeButton:(BOOL)arg1 ;
-(BOOL)waitingForMatchResult;
-(BOOL)lastMatchResultWakePin;
-(void)postEvent:(id)arg1 ;
-(void)catacombCorrupted:(long long)arg1 ;
-(void)setWaitingForMatchResult:(BOOL)arg1 ;
-(unsigned long long)failQuickTapsToUnlock;
-(void)lockStateUpdated:(unsigned)arg1 ;
-(void)setUnlockOperationInProgress:(BOOL)arg1 ;
-(void)setPrearmedApplePay:(BOOL)arg1 ;
-(unsigned long long)totalNodeCount;
-(void)setFingerOn:(BOOL)arg1 ;
-(unsigned long long)imageCaptureRestartsPerFingerDown;
-(void)setUnlockOperationStartedByCommand:(BOOL)arg1 ;
-(long long)calibrationDataState;
-(BOOL)haveImageToProcess;
-(unsigned long long)failTouchesToUnlock;
-(unsigned long long)lastMatchResultID;
-(void)startBioOperation:(id)arg1 ;
-(void)setLastMatchResultWakePin:(BOOL)arg1 ;
-(long long)lastStartedMatch;
-(int)lastMatchUseCase;
-(void)setTemplateStats:(NSMutableDictionary *)arg1 ;
-(BOOL)fingerOn;
-(void)setDeviceWokeUpByLiftToWake:(BOOL)arg1 ;
-(void)statisticsMessage:(SCD_Struct_Bi11*)arg1 ;
-(void)matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(void)setSensorOperationMode:(unsigned long long)arg1 ;
-(void)logTemplateCountPerUser:(BOOL)arg1 ;
-(void)displayStatusChanged:(BOOL)arg1 ;
-(void)setFailTouchesToUnlock:(unsigned long long)arg1 ;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(double)totalPrimaryClusterArea;
-(NSDate *)sensorOperationStartDate;
-(void)handleSensorOperationStatusMessage:(unsigned)arg1 ;
-(void)wakeGestureUpdate:(long long)arg1 ;
-(BOOL)passcodeNedded:(long long)arg1 ;
-(BOOL)pressureMitigationUsed;
-(BOOL)isPasscodeNeeded;
-(void)setLastMatchResultID:(unsigned long long)arg1 ;
-(double)totalArea;
-(NSString *)clientName;
-(void)statusMessage:(unsigned)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(void)setPreviousSKSLockState:(unsigned)arg1 ;
-(void)unlockedByMesa;
-(void)addIdentitity:(id)arg1 ;
-(unsigned long long)sensorCaptureRestartsPerFingerDown;
-(BOOL)prearmedApplePay;
-(void)setCalibrationDataState:(long long)arg1 ;
-(void)setImageCaptureRestartsPerFingerDown:(unsigned long long)arg1 ;
-(void)homeButtonStateChanged:(BOOL)arg1 ;
-(void)removeIdentity:(id)arg1 ;
-(void)setLastMatchUseCase:(int)arg1 ;
-(void)logFingerOff;
-(void)setSensorCaptureRestartsPerFingerDown:(unsigned long long)arg1 ;
-(void)serviceMatch;
-(void)unlockAttemptFinished;
-(void)removeAllIdentities;
-(BOOL)deviceWokeUpByHomeButton;
-(void)matchOperationStarted;
-(void)logTemplateAttributes:(BOOL)arg1 ;
-(void)setPressureMitigationUsed:(BOOL)arg1 ;
-(unsigned)sksLockState;
-(void)setImagesPerFingerDown:(unsigned long long)arg1 ;
-(float)modulationRatio;
-(BOOL)haveMatchResult;
-(unsigned long long)sensorOperationMode;
-(void)unlockedByPasscode;
-(void)setHaveMatchResult:(BOOL)arg1 ;
-(BOOL)unlockOperationStartedByCommand;
-(void)matchOperationFinished:(BOOL)arg1 ;
-(void)logSensorSelfTestInfo;
-(BOOL)matchOperationInProgress;
-(void)logTemplateMatchCounts;
-(unsigned long long)totalClusterCount;
-(BOOL)wasPasscodeNeeded;
-(unsigned)previousSKSLockState;
-(void)setMatchOperationInProgress:(BOOL)arg1 ;
-(BOOL)wasDeviceHibernated:(SCD_Struct_Bi14*)arg1 ;
-(void)setSksLockState:(unsigned)arg1 ;
-(void)unlockAttemptStarted:(BOOL)arg1 ;
-(void)resetMatchCounts;
-(void)lastImageIsProcessed;
-(id)init;
-(BiometricKitXPCServerMesa *)server;
@end
