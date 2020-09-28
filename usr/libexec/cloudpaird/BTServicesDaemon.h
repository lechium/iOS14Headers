//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class BTShareAudioSessionDaemon, CUBluetoothClient, CUUserNotificationSession, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface BTServicesDaemon : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _prefsChangedNotifyToken;	// 16 = 0x10
    _Bool _prefShareAudioTV;	// 20 = 0x14
    SFDeviceDiscovery *_shareAudioActionScanner;	// 24 = 0x18
    NSMutableDictionary *_shareAudioActionTriggeredDevices;	// 32 = 0x20
    NSMutableDictionary *_shareAudioConnectedDeviceMap;	// 40 = 0x28
    CUBluetoothClient *_shareAudioConnectedDeviceMonitor;	// 48 = 0x30
    CUUserNotificationSession *_shareAudioActionUINoteSession;	// 56 = 0x38
    BTShareAudioSessionDaemon *_shareAudioSession;	// 64 = 0x40
    unsigned long long _stateHandle;	// 72 = 0x48
    _Bool _updatePending;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
}

+ (id)sharedBTServicesDaemon;	// IMP=0x0000000100053db8
- (void).cxx_destruct;	// IMP=0x0000000100056960
- (void)_shareAudioSessionProgressEvent:(int)arg1 info:(id)arg2;	// IMP=0x00000001000566cc
- (void)_shareAudioSessionEnded:(id)arg1;	// IMP=0x0000000100056628
- (void)_shareAudioSessionStartWithDarwinDevice:(id)arg1 wxDevice:(id)arg2;	// IMP=0x0000000100056414
- (void)_shareAudioShowConnectBanner:(id)arg1;	// IMP=0x0000000100055e64
- (void)_shareAudioConnectedDeviceLost:(id)arg1;	// IMP=0x0000000100055d50
- (void)_shareAudioConnectedDeviceFound:(id)arg1;	// IMP=0x0000000100055c2c
- (void)_shareAudioConnectedMonitorEnsureStopped;	// IMP=0x0000000100055b94
- (void)_shareAudioConnectedMonitorEnsureStarted;	// IMP=0x00000001000559d4
- (void)_shareAudioActionScannerDeviceLost:(id)arg1;	// IMP=0x00000001000557c8
- (void)_shareAudioActionScannerDeviceFound:(id)arg1;	// IMP=0x0000000100055464
- (void)_shareAudioActionScannerEnsureStopped;	// IMP=0x00000001000553cc
- (void)_shareAudioActionScannerEnsureStarted;	// IMP=0x000000010005507c
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0000000100054f98
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100054c44
- (void)_update;	// IMP=0x0000000100054bdc
- (void)_scheduleUpdate;	// IMP=0x0000000100054b64
- (void)_prefsChanged;	// IMP=0x0000000100054a6c
- (void)invalidate;	// IMP=0x0000000100054930
- (void)_activate;	// IMP=0x0000000100054724
- (void)activate;	// IMP=0x0000000100054654
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100053ec4
- (id)init;	// IMP=0x0000000100053e24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
