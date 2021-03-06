//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDLaunchEventsDelegate-Protocol.h"

@class NSString, RDClientInterestCache, RDDefaults, RDStateCache;
@protocol OS_dispatch_queue;

@interface RDNotifier : NSObject <RDLaunchEventsDelegate>
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    RDDefaults *_defaults;	// 16 = 0x10
    RDStateCache *_stateCache;	// 24 = 0x18
    RDClientInterestCache *_clientInterestCache;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000100017ab4
- (_Bool)isReminderAlertNeededBy:(double)arg1;	// IMP=0x0000000100018350
- (id)usageMessage;	// IMP=0x0000000100017ee4
- (void)dealloc;	// IMP=0x0000000100017e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

