//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsListController.h>

@class AXRemoteHearingAidDevice;

__attribute__((visibility("hidden")))
@interface HearingAidAdvancedController : AXUISettingsListController
{
    AXRemoteHearingAidDevice *_device;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000bd22c
@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000bd0b8
- (id)specifiers;	// IMP=0x00000000000bcca0
- (id)specifiersForEar:(int)arg1;	// IMP=0x00000000000bc904
- (id)hardwareVersion:(id)arg1;	// IMP=0x00000000000bc814
- (id)firmwareVersion:(id)arg1;	// IMP=0x00000000000bc724
- (id)connection:(id)arg1;	// IMP=0x00000000000bc5c4
- (id)HIID:(id)arg1;	// IMP=0x00000000000bc50c
- (void)setSpecifier:(id)arg1;	// IMP=0x00000000000bc470

@end
