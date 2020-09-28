//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "WPHomeKitDelegate-Protocol.h"

@class NSString;

@interface CLHomeKitDelegate : NSObject <WPHomeKitDelegate, CBCentralManagerDelegate>
{
    struct CLHomeKitProvider *_homekitProvider;	// 8 = 0x8
    _Bool _homekitPower;	// 16 = 0x10
    _Bool _cbPower;	// 17 = 0x11
}

- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000010017097c
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000100170928
- (void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 forType:(long long)arg3;	// IMP=0x00000001001707c0
- (void)homeKitStoppedScanning:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001706bc
- (void)homeKitStartedScanning:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001705b8
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;	// IMP=0x000000010016fb74
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000010016fb70
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x000000010016fb6c
- (void)homeKitDidUpdateState:(id)arg1;	// IMP=0x000000010016fa90
@property(readonly, nonatomic) _Bool power;
- (id)initWithProvider:(struct CLHomeKitProvider *)arg1;	// IMP=0x000000010016fa24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
