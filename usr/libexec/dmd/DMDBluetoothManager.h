//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BluetoothManager;

@interface DMDBluetoothManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _stillNeedsUpdate;	// 9 = 0x9
    BluetoothManager *_bluetoothManager;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100027de8
- (void).cxx_destruct;	// IMP=0x0000000100028184
@property(nonatomic) _Bool stillNeedsUpdate; // @synthesize stillNeedsUpdate=_stillNeedsUpdate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) BluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
- (void)availabilityChanged:(id)arg1;	// IMP=0x0000000100027ff8
- (id)init;	// IMP=0x0000000100027e54

@end

