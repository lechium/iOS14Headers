//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSString;
@protocol ADClientStateDelegate, OS_dispatch_queue;

@interface ADClientState : NSObject
{
    NSObject<OS_dispatch_queue> *_instanceQueue;	// 8 = 0x8
    int _PID;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    BKSApplicationStateMonitor *_stateMonitor;	// 32 = 0x20
    id <ADClientStateDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002d438
@property(readonly, nonatomic) __weak id <ADClientStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(readonly, nonatomic) int PID; // @synthesize PID=_PID;
@property(readonly, copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (void)_notifyDelegateOfStateChange;	// IMP=0x000000010002d3b0
@property(readonly, nonatomic) unsigned int clientApplicationState;
- (id)clientStateTags:(unsigned int)arg1;	// IMP=0x000000010002d1bc
- (void)close;	// IMP=0x000000010002d104
- (void)globalStateDidChange:(id)arg1;	// IMP=0x000000010002d0f8
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 andPID:(int)arg3;	// IMP=0x000000010002ce88

@end
