//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ABSSyncSession.h"

@class ABSContactsShadow, ABSValidationSyncObject, NDTResultsFIFO, NSString, NSThread;

__attribute__((visibility("hidden")))
@interface ABSLasordaSession : ABSSyncSession
{
    NSThread *_producerThread;	// 8 = 0x8
    NDTResultsFIFO *_fifo;	// 16 = 0x10
    ABSContactsShadow *_shadow;	// 24 = 0x18
    struct ct_green_tea_logger_s *_gtLogger;	// 32 = 0x20
    ABSValidationSyncObject *_startCensus;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    _Bool _sessionSupportsContactAccountIDs;	// 56 = 0x38
    NSString *_favsSha;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010002f640
- (void)dealloc;	// IMP=0x000000010002f5f0
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x000000010002f458
- (void)_batchSupplier;	// IMP=0x000000010002e864
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000010002de18
- (void)lateSetupForSession:(id)arg1;	// IMP=0x000000010002db7c

@end

