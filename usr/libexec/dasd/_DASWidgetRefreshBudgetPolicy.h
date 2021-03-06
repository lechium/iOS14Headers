//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString, _DASBudgetManager;

@interface _DASWidgetRefreshBudgetPolicy : NSObject <_DASActivityPolicy>
{
    _DASBudgetManager *_budgetManager;	// 8 = 0x8
    NSString *_policyName;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    NSArray *_whiteListedWidgets;	// 32 = 0x20
}

+ (id)policyInstance;	// IMP=0x00000001000842c0
- (void).cxx_destruct;	// IMP=0x00000001000848dc
@property(retain, nonatomic) NSArray *whiteListedWidgets; // @synthesize whiteListedWidgets=_whiteListedWidgets;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
@property(retain, nonatomic) _DASBudgetManager *budgetManager; // @synthesize budgetManager=_budgetManager;
- (_Bool)shouldLogScoreToPowerLog;	// IMP=0x0000000100084884
- (double)baselineScoreForActivity:(id)arg1;	// IMP=0x000000010008487c
- (double)weightForActivity:(id)arg1;	// IMP=0x0000000100084870
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100084800
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x00000001000844c0
- (id)initializeTriggers;	// IMP=0x0000000100084360
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x0000000100084280
- (id)init;	// IMP=0x00000001000841ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

