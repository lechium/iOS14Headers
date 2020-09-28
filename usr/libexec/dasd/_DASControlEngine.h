//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, NSUserDefaults, TRIClient, TRITrackingId;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _CDContext, _DKKnowledgeSaving;

@interface _DASControlEngine : NSObject
{
    _Bool _initialMitigationInitiated;	// 8 = 0x8
    _Bool _dutyCyclingInitiated;	// 9 = 0x9
    _Bool _encounteredTLC;	// 10 = 0xa
    _Bool _trialInitialActionAlways;	// 11 = 0xb
    _Bool _trialdisableSFI;	// 12 = 0xc
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    int _startToken;	// 20 = 0x14
    int _timeToken;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_executionQueue;	// 32 = 0x20
    NSMutableDictionary *_actionToAnalyzers;	// 40 = 0x28
    NSMutableDictionary *_actionToTimers;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
    NSDate *_encounteredTLCDate;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_analyzerTimer;	// 72 = 0x48
    unsigned long long _dutyCyclingMethod;	// 80 = 0x50
    id <_CDContext> _context;	// 88 = 0x58
    NSDate *_currentDutyCycleStartTime;	// 96 = 0x60
    double _dutyCycleDuration;	// 104 = 0x68
    TRIClient *_trialClient;	// 112 = 0x70
    TRITrackingId *_trialTrackingID;	// 120 = 0x78
    NSString *_trialTreatmentID;	// 128 = 0x80
    NSString *_trialExperimentID;	// 136 = 0x88
    long long _trialSFIWindow;	// 144 = 0x90
    double _trialSFIIdleWindowParameter;	// 152 = 0x98
    id <_DKKnowledgeSaving> _store;	// 160 = 0xa0
    NSUserDefaults *_defaults;	// 168 = 0xa8
    NSMutableDictionary *_controlEffortHistory;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000001000121d4
@property(retain, nonatomic) NSMutableDictionary *controlEffortHistory; // @synthesize controlEffortHistory=_controlEffortHistory;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) id <_DKKnowledgeSaving> store; // @synthesize store=_store;
@property double trialSFIIdleWindowParameter; // @synthesize trialSFIIdleWindowParameter=_trialSFIIdleWindowParameter;
@property long long trialSFIWindow; // @synthesize trialSFIWindow=_trialSFIWindow;
@property _Bool trialdisableSFI; // @synthesize trialdisableSFI=_trialdisableSFI;
@property _Bool trialInitialActionAlways; // @synthesize trialInitialActionAlways=_trialInitialActionAlways;
@property(retain) NSString *trialExperimentID; // @synthesize trialExperimentID=_trialExperimentID;
@property(retain) NSString *trialTreatmentID; // @synthesize trialTreatmentID=_trialTreatmentID;
@property(retain) TRITrackingId *trialTrackingID; // @synthesize trialTrackingID=_trialTrackingID;
@property(retain, nonatomic) TRIClient *trialClient; // @synthesize trialClient=_trialClient;
@property(nonatomic) double dutyCycleDuration; // @synthesize dutyCycleDuration=_dutyCycleDuration;
@property(retain, nonatomic) NSDate *currentDutyCycleStartTime; // @synthesize currentDutyCycleStartTime=_currentDutyCycleStartTime;
@property(retain, nonatomic) id <_CDContext> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long dutyCyclingMethod; // @synthesize dutyCyclingMethod=_dutyCyclingMethod;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *analyzerTimer; // @synthesize analyzerTimer=_analyzerTimer;
@property(retain, nonatomic) NSDate *encounteredTLCDate; // @synthesize encounteredTLCDate=_encounteredTLCDate;
@property(nonatomic) _Bool encounteredTLC; // @synthesize encounteredTLC=_encounteredTLC;
@property(nonatomic) _Bool dutyCyclingInitiated; // @synthesize dutyCyclingInitiated=_dutyCyclingInitiated;
@property(nonatomic) _Bool initialMitigationInitiated; // @synthesize initialMitigationInitiated=_initialMitigationInitiated;
@property(nonatomic) int timeToken; // @synthesize timeToken=_timeToken;
@property(nonatomic) int startToken; // @synthesize startToken=_startToken;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *actionToTimers; // @synthesize actionToTimers=_actionToTimers;
@property(retain, nonatomic) NSMutableDictionary *actionToAnalyzers; // @synthesize actionToAnalyzers=_actionToAnalyzers;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
- (id)startChargeRateLoop;	// IMP=0x0000000100011f20
- (void)recordSessionAnalytics;	// IMP=0x0000000100011d50
- (id)currentStatus;	// IMP=0x0000000100011bfc
- (void)resetAnalyticsState;	// IMP=0x0000000100011ba4
- (void)resetState;	// IMP=0x0000000100011b44
- (id)startBatteryTemperatureLoop;	// IMP=0x0000000100011a84
- (void)resetDutyCyclingEffort;	// IMP=0x00000001000119cc
- (void)executeDutyCyclingWithEffort:(unsigned long long)arg1;	// IMP=0x00000001000118cc
- (unsigned long long)dutyCycleTimeFromEffort:(unsigned long long)arg1;	// IMP=0x00000001000118c0
- (void)resetSFIEffort;	// IMP=0x0000000100011840
- (void)executeSFIWithEffort:(unsigned long long)arg1;	// IMP=0x0000000100011638
- (unsigned long long)SFITimeFromEffort:(unsigned long long)arg1;	// IMP=0x0000000100011610
- (void)resetInitialAction;	// IMP=0x0000000100011550
- (void)executeInitialAction;	// IMP=0x0000000100011490
- (void)updateControlAction:(id)arg1 withEffort:(long long)arg2;	// IMP=0x00000001000112b8
- (void)checkControlAction:(id)arg1;	// IMP=0x0000000100010cbc
- (void)saveControlEffort:(long long)arg1;	// IMP=0x0000000100010b38
- (void)saveTLCState:(_Bool)arg1;	// IMP=0x00000001000108f8
- (id)intializeAnalyzerTimerWithCadence:(double)arg1 forAction:(id)arg2;	// IMP=0x0000000100010760
- (void)registerTriggers;	// IMP=0x0000000100010430
- (id)status;	// IMP=0x00000001000103e0
- (void)intializeAnalyzers;	// IMP=0x000000010000ff4c
- (void)loadTrialParameters;	// IMP=0x000000010000faa4
- (id)init;	// IMP=0x000000010000f760

@end
