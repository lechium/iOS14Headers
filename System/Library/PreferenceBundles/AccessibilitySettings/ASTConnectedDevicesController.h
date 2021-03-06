//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AXMouseEventObserver-Protocol.h"
#import "AXSSMotionTrackingInputManagerDelegate-Protocol.h"
#import "CBCentralManagerDelegate-Protocol.h"

@class AXMouseEventListener, AXSSMotionTrackingInputManager, CBCentralManager, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ASTConnectedDevicesController : AXUISettingsBaseListController <AXMouseEventObserver, CBCentralManagerDelegate, AXSSMotionTrackingInputManagerDelegate>
{
    AXMouseEventListener *_mouseEventListener;	// 192 = 0xc0
    AXSSMotionTrackingInputManager *_motionTrackingInputManager;	// 200 = 0xc8
    CBCentralManager *_centralManager;	// 208 = 0xd0
    NSArray *_connectedBluetoothDevices;	// 216 = 0xd8
    NSArray *_connectedPeripherals;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000005f6c0
@property(readonly, nonatomic) NSArray *connectedPeripherals; // @synthesize connectedPeripherals=_connectedPeripherals;
@property(readonly, nonatomic) NSArray *connectedBluetoothDevices; // @synthesize connectedBluetoothDevices=_connectedBluetoothDevices;
@property(readonly, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(readonly, nonatomic) AXSSMotionTrackingInputManager *motionTrackingInputManager; // @synthesize motionTrackingInputManager=_motionTrackingInputManager;
@property(readonly, nonatomic) AXMouseEventListener *mouseEventListener; // @synthesize mouseEventListener=_mouseEventListener;
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000005f624
- (void)motionTrackingInputManager:(id)arg1 updatedCompatibleInputs:(id)arg2;	// IMP=0x000000000005f618
- (void)mouseDevicesChanged:(id)arg1;	// IMP=0x000000000005f60c
- (id)_nameForCustomizableMouse:(id)arg1;	// IMP=0x000000000005f174
- (id)specifiers;	// IMP=0x000000000005e740
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005e6d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005e624
- (id)init;	// IMP=0x000000000005e3a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

