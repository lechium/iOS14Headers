//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationSubscriptionVisibilityAssertion-Protocol.h"

@class NSString, SBSStatusBarStyleOverridesAssertion;
@protocol OS_dispatch_queue;

@interface CLLocationSubscriptionStatusBarAssertion : NSObject <CLLocationSubscriptionVisibilityAssertion>
{
    SBSStatusBarStyleOverridesAssertion *_assertion;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
    _Bool _startedInBackground;	// 48 = 0x30
    _Bool _everBackgrounded;	// 49 = 0x31
    _Bool _backgrounded;	// 50 = 0x32
    int _registration;	// 52 = 0x34
    _Bool _metricValid;	// 56 = 0x38
}

+ (_Bool)isStatusBarAssertionAvailable;	// IMP=0x00000001009d1394
@property(readonly, nonatomic, getter=isMetricValid) _Bool metricValid; // @synthesize metricValid=_metricValid;
- (void)submit:(int)arg1;	// IMP=0x00000001009d1a44
- (void)checkAssertion;	// IMP=0x00000001009d19e4
- (void)setBackgrounded:(_Bool)arg1;	// IMP=0x00000001009d19d0
- (_Bool)isEnabled;	// IMP=0x00000001009d19c0
- (void)setDesiredEnablementState:(_Bool)arg1;	// IMP=0x00000001009d15e0
- (void)invalidate:(int)arg1;	// IMP=0x00000001009d14ec
- (void)dealloc;	// IMP=0x00000001009d1490
- (id)initWithPid:(int)arg1 name:(id)arg2 queue:(id)arg3 backgrounded:(_Bool)arg4 registration:(int)arg5;	// IMP=0x00000001009d13b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

