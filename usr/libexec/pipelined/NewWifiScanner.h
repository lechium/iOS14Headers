//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WifiScannerBackendDelegateProtocol-Protocol.h"

@class WifiScannerSettings;
@protocol MonotonicTimerProtocol, OS_dispatch_queue, WifiScannerBackendProtocol, WifiScannerDelegateProtocol;

@interface NewWifiScanner : NSObject <WifiScannerBackendDelegateProtocol>
{
    id <WifiScannerBackendProtocol> _platform;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_wifiScanQueue;	// 16 = 0x10
    id <MonotonicTimerProtocol> _scanTimer;	// 24 = 0x18
    WifiScannerSettings *_scanSettings;	// 32 = 0x20
    int _scansInProgress;	// 40 = 0x28
    _Bool _scanning;	// 44 = 0x2c
    id <WifiScannerDelegateProtocol> _delegate;	// 48 = 0x30
}

+ (duration_673274cf)expectedScanDuration:(id)arg1;	// IMP=0x00000001002b549c
- (void).cxx_destruct;	// IMP=0x00000001002b7f74
@property(nonatomic) _Bool scanning; // @synthesize scanning=_scanning;
@property(retain, nonatomic) id <MonotonicTimerProtocol> scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wifiScanQueue; // @synthesize wifiScanQueue=_wifiScanQueue;
@property(readonly, nonatomic) __weak id <WifiScannerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onQueueStopScanning;	// IMP=0x00000001002b7d50
- (void)onQueueStartScanning;	// IMP=0x00000001002b7ad8
- (void)onQueueHandleScanFailed:(id)arg1 forSettings:(id)arg2;	// IMP=0x00000001002b7590
- (void)onQueueHandleScan:(id)arg1 forSettings:(id)arg2;	// IMP=0x00000001002b71c4
- (void)onQueueScanAfter:(duration_673274cf)arg1;	// IMP=0x00000001002b6fe0
- (void)onQueueScheduleScanFromSettingsWithFailure:(_Bool)arg1;	// IMP=0x00000001002b6d48
- (void)wifiScanFailed:(id)arg1 withSettings:(id)arg2;	// IMP=0x00000001002b6ae8
- (void)wifiCachedScanResult:(id)arg1 withSettings:(id)arg2;	// IMP=0x00000001002b69ec
- (void)wifiScanResult:(id)arg1 withSettings:(id)arg2;	// IMP=0x00000001002b68c0
- (void)onQueueHandleScanTimer;	// IMP=0x00000001002b6330
- (void)stopScanning;	// IMP=0x00000001002b62a0
- (void)startScanning;	// IMP=0x00000001002b6210
- (void)stopListeningCachedScans;	// IMP=0x00000001002b6104
- (void)startListeningCachedScans;	// IMP=0x00000001002b5ff8
- (_Bool)sensorPresent;	// IMP=0x00000001002b5ecc
- (void)onQueueInvalidate;	// IMP=0x00000001002b5cdc
- (void)invalidate;	// IMP=0x00000001002b5b04
- (void)dealloc;	// IMP=0x00000001002b59d4
- (id)initWithPlatform:(id)arg1 andTimer:(id)arg2 andDelegate:(id)arg3;	// IMP=0x00000001002b55f0
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001002b5550

@end

