//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VoiceOverBluetoothDevicesController.h"

@class AXMouseEventListener;

__attribute__((visibility("hidden")))
@interface ASTBluetoothDevicesController : VoiceOverBluetoothDevicesController
{
    AXMouseEventListener *_mouseEventListener;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000074768
- (void)deviceConnected:(id)arg1;	// IMP=0x0000000000074764
- (_Bool)shouldAddClassicDevice:(id)arg1;	// IMP=0x0000000000074544
- (id)_customizableMouseForDevice:(id)arg1;	// IMP=0x0000000000073e94
- (id)detailSpecifiersForDevice:(id)arg1 withTarget:(id)arg2;	// IMP=0x0000000000073c8c
- (id)allowedServices;	// IMP=0x0000000000073bdc
- (id)devicesGroupName;	// IMP=0x0000000000073bc8
- (id)bluetoothPowerAlertMessage;	// IMP=0x0000000000073bb4
- (void)powerAlertCancelled;	// IMP=0x0000000000073b68
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000073b00
@property(readonly, nonatomic) AXMouseEventListener *mouseEventListener; // @synthesize mouseEventListener=_mouseEventListener;
- (id)init;	// IMP=0x0000000000073a2c

@end

