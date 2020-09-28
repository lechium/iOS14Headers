//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnlockSessionManager.h"

#import "SDUnlockIDSControllerDelegate-Protocol.h"

@class NSData, NSDate, NSObject, NSString, NSTimer, SDUnlockMotionDetector, SDUnlockWakeGestureRecord;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDUnlockLockManager : SDUnlockSessionManager <SDUnlockIDSControllerDelegate>
{
    _Bool _inPosition;	// 8 = 0x8
    _Bool _canRetrySetup;	// 9 = 0x9
    _Bool _sentLockedState;	// 10 = 0xa
    _Bool _checkingWristState;	// 11 = 0xb
    _Bool _waitingForAuthToken;	// 12 = 0xc
    _Bool _preventingExitForSetup;	// 13 = 0xd
    _Bool _onWristForCurrentSession;	// 14 = 0xe
    _Bool _checkingWristAndMotionState;	// 15 = 0xf
    NSString *_requestID;	// 16 = 0x10
    NSDate *_wristOnDate;	// 24 = 0x18
    NSTimer *_enableTimer;	// 32 = 0x20
    NSData *_tempLongTermKey;	// 40 = 0x28
    NSDate *_sessionStartDate;	// 48 = 0x30
    NSString *_passcode;	// 56 = 0x38
    long long _unlockSessionID;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_longTermKeyTimer;	// 72 = 0x48
    long long _deviceOffWristForSessionID;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_wristAndMotionTimer;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_positionSemaphore;	// 96 = 0x60
    SDUnlockMotionDetector *_motionDetector;	// 104 = 0x68
    SDUnlockWakeGestureRecord *_lastWakeGestureRecord;	// 112 = 0x70
    CDUnknownBlockType _enableHandler;	// 120 = 0x78
    CDUnknownBlockType _wristAndMotionStateHandler;	// 128 = 0x80
}

+ (id)sharedLockManager;	// IMP=0x00000001002249c4
- (void).cxx_destruct;	// IMP=0x000000010022a19c
@property(copy) CDUnknownBlockType wristAndMotionStateHandler; // @synthesize wristAndMotionStateHandler=_wristAndMotionStateHandler;
@property(copy) CDUnknownBlockType enableHandler; // @synthesize enableHandler=_enableHandler;
@property(retain) SDUnlockWakeGestureRecord *lastWakeGestureRecord; // @synthesize lastWakeGestureRecord=_lastWakeGestureRecord;
@property(retain) SDUnlockMotionDetector *motionDetector; // @synthesize motionDetector=_motionDetector;
@property(retain) NSObject<OS_dispatch_semaphore> *positionSemaphore; // @synthesize positionSemaphore=_positionSemaphore;
@property(retain) NSObject<OS_dispatch_source> *wristAndMotionTimer; // @synthesize wristAndMotionTimer=_wristAndMotionTimer;
@property long long deviceOffWristForSessionID; // @synthesize deviceOffWristForSessionID=_deviceOffWristForSessionID;
@property(retain) NSObject<OS_dispatch_source> *longTermKeyTimer; // @synthesize longTermKeyTimer=_longTermKeyTimer;
@property _Bool checkingWristAndMotionState; // @synthesize checkingWristAndMotionState=_checkingWristAndMotionState;
@property _Bool onWristForCurrentSession; // @synthesize onWristForCurrentSession=_onWristForCurrentSession;
@property _Bool preventingExitForSetup; // @synthesize preventingExitForSetup=_preventingExitForSetup;
@property long long unlockSessionID; // @synthesize unlockSessionID=_unlockSessionID;
@property(copy) NSString *passcode; // @synthesize passcode=_passcode;
@property(retain) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property _Bool waitingForAuthToken; // @synthesize waitingForAuthToken=_waitingForAuthToken;
@property _Bool checkingWristState; // @synthesize checkingWristState=_checkingWristState;
@property(retain) NSData *tempLongTermKey; // @synthesize tempLongTermKey=_tempLongTermKey;
@property(retain) NSTimer *enableTimer; // @synthesize enableTimer=_enableTimer;
@property _Bool sentLockedState; // @synthesize sentLockedState=_sentLockedState;
@property(retain) NSDate *wristOnDate; // @synthesize wristOnDate=_wristOnDate;
@property(retain) NSString *requestID; // @synthesize requestID=_requestID;
@property _Bool canRetrySetup; // @synthesize canRetrySetup=_canRetrySetup;
@property(nonatomic) _Bool inPosition; // @synthesize inPosition=_inPosition;
- (void)sendStateResponseWithUnlockEnabled:(_Bool)arg1 passcodeEnabled:(_Bool)arg2;	// IMP=0x0000000100229d54
- (void)sendStashConfirmation:(_Bool)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000100229bd4
- (void)sendStashKeyExchangeResponse:(id)arg1 sessionID:(unsigned int)arg2 errorCode:(long long)arg3;	// IMP=0x0000000100229a24
- (void)sendSessionUnlockConfirmation:(_Bool)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001002298a4
- (void)sendKeyExchangeResponse:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001002296c0
- (void)sendCreateEscrowSecretWithStepData:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x00000001002293cc
- (void)sendSetupRequest:(id)arg1 withSessionID:(unsigned int)arg2;	// IMP=0x00000001002290d8
- (void)sendClassALongTermKeyRequest:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x0000000100228dd0
- (void)sendLongTermKeyRequest:(id)arg1 requestID:(id)arg2;	// IMP=0x0000000100228bbc
- (void)sendDeviceLockStateChanged:(_Bool)arg1;	// IMP=0x0000000100228a70
- (void)handleUnlockStateRequest:(id)arg1;	// IMP=0x0000000100228990
- (void)handleStashToken:(id)arg1;	// IMP=0x000000010022882c
- (void)handleStashKeyExchangeRequest:(id)arg1;	// IMP=0x0000000100228618
- (void)handleSessionAuthToken:(id)arg1;	// IMP=0x0000000100228280
- (void)handleSessionKeyExchangeRequest:(id)arg1;	// IMP=0x0000000100227bd8
- (void)handleSetupCreateRecord:(id)arg1;	// IMP=0x00000001002276cc
- (void)handleEscrowSessionRequest:(id)arg1;	// IMP=0x000000010022720c
- (void)handleSetupSessionCreated:(id)arg1;	// IMP=0x0000000100226e9c
- (_Bool)updateLongTermKeys:(id)arg1;	// IMP=0x0000000100226da8
- (void)handleClassALongTermKeyResponse:(id)arg1;	// IMP=0x0000000100226b1c
- (void)handleLongTermKeyResponse:(id)arg1;	// IMP=0x00000001002268ec
- (void)handleStartLTK:(id)arg1;	// IMP=0x0000000100226808
- (void)idsControllerSpaceDidBecomeAvailable:(id)arg1;	// IMP=0x000000010022678c
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3;	// IMP=0x00000001002265b8
- (void)allowExiting;	// IMP=0x0000000100226568
- (void)preventExiting;	// IMP=0x0000000100226518
- (void)getWristAndMotionStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001002264fc
- (_Bool)lostModeEnabled;	// IMP=0x00000001002263fc
- (_Bool)localDeviceLocked;	// IMP=0x00000001002263a0
- (void)resetLongTermKeyRequest;	// IMP=0x0000000100226350
- (void)resetState;	// IMP=0x00000001002262c0
- (void)disableUnlockPairing;	// IMP=0x0000000100226240
- (void)forceOnWristCheck;	// IMP=0x000000010022623c
- (void)wristDetectionDisabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226220
- (_Bool)deviceOnWrist;	// IMP=0x0000000100226214
- (_Bool)unlockEnabled;	// IMP=0x0000000100226140
- (void)notifyEnableStateWithError:(id)arg1;	// IMP=0x0000000100225f3c
- (void)enableUnlockForcingLTKTransfer:(_Bool)arg1;	// IMP=0x0000000100225c04
- (void)enableUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100225730
- (void)invalidateLongTermKeyTimer;	// IMP=0x00000001002256a0
- (void)restartLongTermKeyTimer;	// IMP=0x0000000100225510
- (void)invalidateEnableTimer;	// IMP=0x00000001002254c4
- (void)enableTimerFired:(id)arg1;	// IMP=0x00000001002253b4
- (void)restartEnableTimerWithTimeout:(double)arg1;	// IMP=0x0000000100225330
- (void)checkKeyBagState;	// IMP=0x00000001002251d8
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x000000010022516c
- (void)handleDevicesDidFailToPair;	// IMP=0x0000000100225110
- (void)handleConfigurationState;	// IMP=0x0000000100224fe4
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x0000000100224d90
- (id)generateDebugInfo;	// IMP=0x0000000100224c98
- (void)debugInfoRequested:(id)arg1;	// IMP=0x0000000100224c34
- (void)addObservers;	// IMP=0x0000000100224c00
- (id)init;	// IMP=0x0000000100224a30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
