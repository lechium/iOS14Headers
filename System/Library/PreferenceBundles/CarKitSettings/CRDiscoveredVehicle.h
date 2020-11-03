//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRVehicleAccessory, CRVehicleBluetoothDevice, NSString;

@interface CRDiscoveredVehicle : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    CRVehicleAccessory *_accessory;	// 16 = 0x10
    CRVehicleBluetoothDevice *_bluetoothDevice;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000012910
@property(nonatomic) __weak CRVehicleBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(nonatomic) __weak CRVehicleAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000012800
@property(readonly, copy, nonatomic) NSString *bluetoothAddress;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, copy, nonatomic) NSString *debugConnectionStatusDescription;
@property(readonly, copy, nonatomic) NSString *connectionStatusDescription;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;	// IMP=0x0000000000012328

@end
