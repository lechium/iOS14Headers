//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class AXRemoteHearingAidDevice, NSNumberFormatter, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AXHearingAidDetailCell : PSTableCell
{
    AXRemoteHearingAidDevice *_device;	// 120 = 0x78
    UILabel *_leftLabel;	// 128 = 0x80
    UIView *_leftStatusIndicator;	// 136 = 0x88
    UILabel *_rightLabel;	// 144 = 0x90
    UIView *_rightStatusIndicator;	// 152 = 0x98
    UIActivityIndicatorView *_loadingIndicator;	// 160 = 0xa0
    NSNumberFormatter *_numberFormatter;	// 168 = 0xa8
    _Bool _bluetoothAvailable;	// 176 = 0xb0
}

+ (double)heightRequiredForDevice:(id)arg1;	// IMP=0x000000000003bf54
- (void).cxx_destruct;	// IMP=0x000000000003e55c
@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (unsigned long long)accessibilityTraits;	// IMP=0x000000000003e528
- (id)accessibilityValue;	// IMP=0x000000000003e184
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003e180
- (void)layoutSubviews;	// IMP=0x000000000003d86c
- (void)updateAvailability;	// IMP=0x000000000003cd80
- (id)imageForBatteryLevel:(double)arg1;	// IMP=0x000000000003cbb4
- (void)dealloc;	// IMP=0x000000000003cabc
- (void)bluetoothAvailabilityDidChange:(id)arg1;	// IMP=0x000000000003c7a4
- (void)updateDetails;	// IMP=0x000000000003c3fc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3;	// IMP=0x000000000003c234
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000003c190

@end
