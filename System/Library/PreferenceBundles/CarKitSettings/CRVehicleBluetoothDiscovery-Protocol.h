//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CRVehicleBluetoothDevice, CRVehicleBluetoothDiscoverer, UIViewController;

@protocol CRVehicleBluetoothDiscovery <NSObject>
- (UIViewController *)viewControllerPresentingPairingForBluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1;

@optional
- (void)bluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 didRemoveDevice:(CRVehicleBluetoothDevice *)arg2;
- (void)bluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 didUpdateDevice:(CRVehicleBluetoothDevice *)arg2;
- (void)bluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 didDiscoverDevice:(CRVehicleBluetoothDevice *)arg2;
- (void)bluetoothDiscoverer:(CRVehicleBluetoothDiscoverer *)arg1 changedDiscoveryState:(_Bool)arg2;
@end
