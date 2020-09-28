//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BackgroundTaskAgentJobDelegate, OS_xpc_object;

@interface BackgroundTaskAgentJob : NSObject
{
    _Bool _isSatisfied;	// 8 = 0x8
    _Bool _isScheduled;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSObject<OS_xpc_object> *_requirements;	// 24 = 0x18
    double _startDelay;	// 32 = 0x20
    NSObject<OS_xpc_object> *_activity;	// 40 = 0x28
    id <BackgroundTaskAgentJobDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000ad64
@property(nonatomic) __weak id <BackgroundTaskAgentJobDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double startDelay; // @synthesize startDelay=_startDelay;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *requirements; // @synthesize requirements=_requirements;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
@property(readonly, nonatomic) _Bool isSatisfied; // @synthesize isSatisfied=_isSatisfied;
- (void)unschedule;	// IMP=0x000000010000ac40
- (void)backgroundActivity:(id)arg1 didBecomeSatisfied:(_Bool)arg2;	// IMP=0x000000010000abb4
- (void)schedule;	// IMP=0x000000010000a5d4
- (void)dealloc;	// IMP=0x000000010000a588
- (id)initWithName:(id)arg1 startDelay:(double)arg2;	// IMP=0x000000010000a4c4

@end
