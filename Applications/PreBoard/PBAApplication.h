//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISystemShellApplication.h>

#import "_UIApplicationInitializationContextFactory-Protocol.h"

@class NSString, NSTimer, PBAIdleSleepController;

@interface PBAApplication : UISystemShellApplication <_UIApplicationInitializationContextFactory>
{
    _Bool _eatMenuUp;	// 8 = 0x8
    NSTimer *_lockButtonTimer;	// 16 = 0x10
    PBAIdleSleepController *_idleSleepController;	// 24 = 0x18
}

+ (_Bool)registerAsSystemApp;	// IMP=0x000000010000a1f0
+ (id)_newApplicationInitializationContext;	// IMP=0x000000010000a0c0
- (void).cxx_destruct;	// IMP=0x000000010000a77c
@property(retain, nonatomic) PBAIdleSleepController *idleSleepController; // @synthesize idleSleepController=_idleSleepController;
@property(retain, nonatomic) NSTimer *lockButtonTimer; // @synthesize lockButtonTimer=_lockButtonTimer;
- (void)_lockButtonUp;	// IMP=0x000000010000a6dc
- (void)_cancelLockButtonTimer;	// IMP=0x000000010000a664
- (void)_startLockButtonTimer;	// IMP=0x000000010000a5f8
- (void)_smartCoverClosed;	// IMP=0x000000010000a5a8
- (void)_smartCoverOpen;	// IMP=0x000000010000a554
- (void)_lockButtonLongPress;	// IMP=0x000000010000a4b0
- (void)_lockButtonDown;	// IMP=0x000000010000a450
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x000000010000a400
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000a3a8
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010000a208
- (void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2;	// IMP=0x000000010000a204
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3;	// IMP=0x000000010000a200
- (_Bool)_isSpringBoard;	// IMP=0x000000010000a1f8
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x000000010000a1e8
- (_Bool)_hostsSystemStatusBar;	// IMP=0x000000010000a1e0
- (id)init;	// IMP=0x000000010000a03c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

