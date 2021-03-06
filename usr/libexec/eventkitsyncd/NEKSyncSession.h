//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYSessionDelegate-Protocol.h"

@class NDTPerf, NEKEnvironment, NEKProgressLiar, NEKResultsPipe, NEKStatTracker, NEKValidationWrapper, NSMutableArray, NSString;

@interface NEKSyncSession : NSObject <SYSessionDelegate>
{
    _Bool _isFirst;	// 8 = 0x8
    NSMutableArray *_changeQueue;	// 16 = 0x10
    struct ct_green_tea_logger_s *_ct_logger;	// 24 = 0x18
    NEKValidationWrapper *_preSyncCensus;	// 32 = 0x20
    NEKResultsPipe *_changeSupplier;	// 40 = 0x28
    NEKProgressLiar *_progressLiar;	// 48 = 0x30
    long long _changeCount;	// 56 = 0x38
    double _start;	// 64 = 0x40
    NSString *_syncKind;	// 72 = 0x48
    NEKEnvironment *_environment;	// 80 = 0x50
    NEKStatTracker *_statsTracker;	// 88 = 0x58
    NDTPerf *_perfomanceTracker;	// 96 = 0x60
    NEKValidationWrapper *_validationObject;	// 104 = 0x68
    unsigned long long _storeUpdateTimeNs;	// 112 = 0x70
    unsigned long long _calendarUpdateTimeNs;	// 120 = 0x78
    unsigned long long _eventUpdateTimeNs;	// 128 = 0x80
    unsigned long long _reminderUpdateTimeNs;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100053168
@property(nonatomic) unsigned long long reminderUpdateTimeNs; // @synthesize reminderUpdateTimeNs=_reminderUpdateTimeNs;
@property(nonatomic) unsigned long long eventUpdateTimeNs; // @synthesize eventUpdateTimeNs=_eventUpdateTimeNs;
@property(nonatomic) unsigned long long calendarUpdateTimeNs; // @synthesize calendarUpdateTimeNs=_calendarUpdateTimeNs;
@property(nonatomic) unsigned long long storeUpdateTimeNs; // @synthesize storeUpdateTimeNs=_storeUpdateTimeNs;
@property(retain, nonatomic) NEKValidationWrapper *validationObject; // @synthesize validationObject=_validationObject;
@property(retain, nonatomic) NDTPerf *perfomanceTracker; // @synthesize perfomanceTracker=_perfomanceTracker;
@property(retain, nonatomic) NEKStatTracker *statsTracker; // @synthesize statsTracker=_statsTracker;
@property(retain, nonatomic) NEKEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *syncKind; // @synthesize syncKind=_syncKind;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NEKProgressLiar *progressLiar; // @synthesize progressLiar=_progressLiar;
@property(retain, nonatomic) NEKResultsPipe *changeSupplier; // @synthesize changeSupplier=_changeSupplier;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x0000000100052fa0
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x0000000100052ea4
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000523ac
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000100051e74
- (void)dealloc;	// IMP=0x0000000100051e2c
- (id)init;	// IMP=0x0000000100051d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

