//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAlertController, UIViewController;

@interface CRRadiosAvailabilityPrompt : NSObject
{
    struct __WiFiManagerClient *_wifiManager;	// 8 = 0x8
    _Bool _needsPresentationConsideration;	// 16 = 0x10
    UIViewController *_presentingController;	// 24 = 0x18
    UIAlertController *_presentedAlertController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a314
@property(nonatomic) __weak UIAlertController *presentedAlertController; // @synthesize presentedAlertController=_presentedAlertController;
@property(nonatomic) _Bool needsPresentationConsideration; // @synthesize needsPresentationConsideration=_needsPresentationConsideration;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void)handleWifiPowerChanged;	// IMP=0x000000000000a234
- (void)handleBluetoothPowerChanged:(id)arg1;	// IMP=0x000000000000a1a0
- (_Bool)updateRadiosAvailabilityAlertPresentation;	// IMP=0x0000000000009aa4
- (void)setWiFiPowered:(_Bool)arg1;	// IMP=0x0000000000009a90
- (_Bool)shouldPromptWiFiPower;	// IMP=0x0000000000009a6c
- (void)setBluetoothPowered:(_Bool)arg1;	// IMP=0x0000000000009a1c
- (_Bool)shouldPromptBluetoothPower;	// IMP=0x000000000000997c
- (void)dealloc;	// IMP=0x0000000000009898
- (void)_teardownWiFi;	// IMP=0x00000000000097bc
- (void)_setupWiFi;	// IMP=0x00000000000096bc
- (id)init;	// IMP=0x00000000000095e4

@end
