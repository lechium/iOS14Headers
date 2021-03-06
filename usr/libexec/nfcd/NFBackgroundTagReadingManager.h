//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFCameraStateMonitorDelegate-Protocol.h"
#import "NFScreenStateMonitorDelegate-Protocol.h"
#import "NFTouchSensorMonitorDelegate-Protocol.h"

@class NFDriverWrapper, NFTagAppLauncher, NFTimer, NFTouchSensorMonitor, NSString;
@protocol NFTag, OS_dispatch_queue, OS_os_transaction;

@interface NFBackgroundTagReadingManager : NSObject <NFTouchSensorMonitorDelegate, NFScreenStateMonitorDelegate, NFCameraStateMonitorDelegate>
{
    unsigned long long _backgroundTagDetectState;	// 8 = 0x8
    long long _suspend;	// 16 = 0x10
    NFTagAppLauncher *_appLauncher;	// 24 = 0x18
    id <NFTag> _backgroundNDEFTag;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_eventProcessingQueue;	// 48 = 0x30
    NFDriverWrapper *_driverWrapper;	// 56 = 0x38
    unsigned long long _userDefaultsOverride;	// 64 = 0x40
    NFTouchSensorMonitor *_touchSensorMonitor;	// 72 = 0x48
    NFTimer *_touchSensorEventTimer;	// 80 = 0x50
    _Bool _touchSystemReady;	// 88 = 0x58
    NSObject<OS_os_transaction> *_activityAssertion;	// 96 = 0x60
    struct __SCPreferences *_radiosPreferences;	// 104 = 0x68
    _Bool _airplaneMode;	// 112 = 0x70
    NSObject<OS_os_transaction> *_keepAliveAssertion;	// 120 = 0x78
    unsigned int _tagTypeReadCount[5];	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000cf294
- (void)touchSystemReady;	// IMP=0x00000001000cf150
- (void)didCameraStateChange:(_Bool)arg1;	// IMP=0x00000001000cf0f8
- (void)didScreenStateChange:(_Bool)arg1;	// IMP=0x00000001000cef78
- (_Bool)_touchSystemReady;	// IMP=0x00000001000cef58
- (void)_setTouchSystemReady:(_Bool)arg1;	// IMP=0x00000001000cef48
- (void)_updateTagReadStatistic;	// IMP=0x00000001000ced54
- (id)_readNDEFFromTag:(id)arg1;	// IMP=0x00000001000ce7ac
- (void)refreshUserDefaultsOverride;	// IMP=0x00000001000ce6f4
- (void)stop;	// IMP=0x00000001000ce6a0
- (void)start;	// IMP=0x00000001000ce4d4
- (void)handleDetectedTags:(id)arg1;	// IMP=0x00000001000ce0f8
- (void)_updateLastNFCTag:(id)arg1;	// IMP=0x00000001000cddac
- (void)resume;	// IMP=0x00000001000cdc1c
- (void)suspend;	// IMP=0x00000001000cdba8
- (_Bool)isSuspended;	// IMP=0x00000001000cdb98
- (_Bool)isActive;	// IMP=0x00000001000cda8c
- (_Bool)updateAirplaneMode;	// IMP=0x00000001000cd8ac
- (void)unlistenForAirplaneMode;	// IMP=0x00000001000cd880
- (void)listenForAirplaneMode;	// IMP=0x00000001000cd684
- (void)airplaneModeChanged;	// IMP=0x00000001000cd528
- (void)releaseTransaction;	// IMP=0x00000001000cd518
- (void)assertTransaction;	// IMP=0x00000001000cd4d0
- (void)dealloc;	// IMP=0x00000001000cd3e8
- (id)initWithQueue:(id)arg1 driverWrapper:(id)arg2 lpcdHWSupport:(_Bool)arg3;	// IMP=0x00000001000ccb48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

