//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHSettingsCloudCallingListController.h"

@class PHSettingsThumperProvisioningController;

@interface PHSettingsPrimaryCloudCallingController : PHSettingsCloudCallingListController
{
    PHSettingsThumperProvisioningController *_thumperProvisioningController;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000004950
@property(retain, nonatomic) PHSettingsThumperProvisioningController *thumperProvisioningController; // @synthesize thumperProvisioningController=_thumperProvisioningController;
- (_Bool)shouldShowUpgradeToThumperButton;	// IMP=0x00000000000048b8
- (void)thumperProvisioningURLChanged:(id)arg1;	// IMP=0x00000000000046e8
- (void)statusChanged:(id)arg1;	// IMP=0x00000000000045d4
- (void)addWifiCallingForOtherDevices:(id)arg1;	// IMP=0x0000000000004444
- (id)getDeviceActive:(id)arg1;	// IMP=0x00000000000043c4
- (void)setDeviceActive:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000042a0
- (id)getCallsOnOtherDevices:(id)arg1;	// IMP=0x000000000000425c
- (void)setCallsOnOtherDevices:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000003e88
- (id)mainSwitchFooterText;	// IMP=0x0000000000003de0
- (id)thumperDeviceSpecifiers;	// IMP=0x00000000000039dc
- (id)authenticateWifiSpecifiers;	// IMP=0x0000000000003744
- (id)specifiers;	// IMP=0x00000000000035c4
- (void)dealloc;	// IMP=0x000000000000354c
- (id)init;	// IMP=0x00000000000033fc

@end
