//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAdminSession-Protocol.h"

@class NFRemoteAdminRedirectState, NFSecureElementManagerSession, NSArray, NSNumber, NSString;
@protocol NFRemoteAdminConnection;

@interface NFRemoteAdminRedirectSession : NSObject <NFAdminSession>
{
    NSArray *_seStateInfos;	// 8 = 0x8
    NFSecureElementManagerSession *_seSession;	// 16 = 0x10
    long long _abort;	// 24 = 0x18
    _Bool _allocateSESession;	// 32 = 0x20
    _Bool _oneTimeConnection;	// 33 = 0x21
    _Bool _performInitialAIDSelectFromWhitelist;	// 34 = 0x22
    _Bool _hasSuccessfullyStarted;	// 35 = 0x23
    unsigned int _redirectStepError;	// 36 = 0x24
    NFRemoteAdminRedirectState *_redirectState;	// 40 = 0x28
    NSString *_targetSEID;	// 48 = 0x30
    id <NFRemoteAdminConnection> _connection;	// 56 = 0x38
    NSNumber *_spTsmSessionStatus;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100010df8
@property(nonatomic) unsigned int redirectStepError; // @synthesize redirectStepError=_redirectStepError;
@property(nonatomic) _Bool hasSuccessfullyStarted; // @synthesize hasSuccessfullyStarted=_hasSuccessfullyStarted;
@property(retain, nonatomic) NSNumber *spTsmSessionStatus; // @synthesize spTsmSessionStatus=_spTsmSessionStatus;
@property(retain, nonatomic) id <NFRemoteAdminConnection> connection; // @synthesize connection=_connection;
@property(readonly, retain, nonatomic) NSString *targetSEID; // @synthesize targetSEID=_targetSEID;
@property(readonly, retain, nonatomic) NFRemoteAdminRedirectState *redirectState; // @synthesize redirectState=_redirectState;
- (void)closeConnection;	// IMP=0x0000000100010d0c
- (_Bool)openConnection:(id)arg1;	// IMP=0x0000000100010924
- (_Bool)closeSession;	// IMP=0x00000001000108e4
- (_Bool)openSession;	// IMP=0x00000001000105c8
- (_Bool)startNewSession;	// IMP=0x00000001000105c0
- (unsigned long long)run;	// IMP=0x00000001000101d8
- (unsigned long long)_redirectCheckIn;	// IMP=0x000000010000fd58
- (unsigned long long)_processRedirectCheckInResult:(unsigned long long)arg1;	// IMP=0x000000010000f9a8
- (unsigned long long)_redirectInProgress;	// IMP=0x000000010000f320
- (void)_processRedirectInProgressResult:(unsigned long long)arg1;	// IMP=0x000000010000ef00
- (unsigned long long)_redirectStart;	// IMP=0x000000010000eb1c
- (unsigned long long)performCheckIn;	// IMP=0x000000010000e6d4
- (unsigned long long)performRedirect;	// IMP=0x000000010000e2f0
- (unsigned long long)_processRedirectRequest:(id)arg1;	// IMP=0x000000010000dd58
- (void)collectPerformanceMetricsForTSM:(double)arg1 withBody:(_Bool)arg2;	// IMP=0x000000010000daf4
- (unsigned long long)executeHttpRequest:(id)arg1 httpHeader:(id)arg2 response:(id)arg3 responseHeader:(id)arg4 duration:(double *)arg5 sessionError:(id *)arg6;	// IMP=0x000000010000d55c
- (unsigned long long)executeScript:(id)arg1;	// IMP=0x000000010000cfc8
- (id)getNextRequest;	// IMP=0x000000010000ca90
- (id)_generateRequestForSEState:(id)arg1;	// IMP=0x000000010000c4e0
- (void)processNotification:(id)arg1;	// IMP=0x000000010000c474
@property(readonly) long long abortedReason;
@property(readonly) _Bool aborted;
- (void)abort:(long long)arg1;	// IMP=0x000000010000c180
- (id)initWithState:(id)arg1 oneTimeConnection:(_Bool)arg2 secureElementManagerSession:(id)arg3;	// IMP=0x000000010000c0a0
- (id)init;	// IMP=0x000000010000c06c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

