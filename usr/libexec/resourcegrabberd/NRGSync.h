//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRDevicePropertyObserver-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class NRDevice, NSString, PSYSyncCoordinator;
@protocol NRGSyncDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface NRGSync : NSObject <PSYSyncCoordinatorDelegate, NRDevicePropertyObserver>
{
    NSObject<OS_dispatch_queue> *_syncQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_iconQueue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_startupSemaphore;	// 24 = 0x18
    id <NRGSyncDelegate> _delegate;	// 32 = 0x20
    NSString *_gizmoBuild;	// 40 = 0x28
    NRDevice *_pairedDevice;	// 48 = 0x30
    PSYSyncCoordinator *_pairedSyncCoordinator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000b834
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) NSString *gizmoBuild; // @synthesize gizmoBuild=_gizmoBuild;
@property(nonatomic) __weak id <NRGSyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void)supportsMigrationSync;	// IMP=0x000000010000b7d0
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x000000010000b6f8
- (void)performIconSync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b26c
- (void)syncIcons:(id)arg1;	// IMP=0x000000010000ab0c
- (void)loadGizmoBuild:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a7d0
- (void)saveGizmoBuild;	// IMP=0x000000010000a500
- (void)gizmoBuildPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a40c
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x000000010000a008
- (void)registerNotifyGizmoBuildChange;	// IMP=0x0000000100009d54
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100009ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
