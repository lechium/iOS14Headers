//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSNumber, UIView;

@interface VolumeLimitController : PSListController
{
    NSNumber *_limit;	// 192 = 0xc0
    UIView *_disabledView;	// 200 = 0xc8
}

+ (_Bool)volumeLimitLocked;	// IMP=0x0000000000009890
+ (_Bool)volumeLimitLockedByEU;	// IMP=0x0000000000009808
+ (_Bool)volumeLimitLockedByRestrictions;	// IMP=0x00000000000097b4
+ (_Bool)volumeLimitLockedByPIN;	// IMP=0x0000000000009760
- (void).cxx_destruct;	// IMP=0x000000000000a3fc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000a204
- (void)toggleLock:(id)arg1;	// IMP=0x000000000000a148
- (void)disableVolumeLimitLock;	// IMP=0x000000000000a0c8
- (void)setVolumeLimitLock:(id)arg1;	// IMP=0x000000000000a048
- (void)updateLockedStateWithReload:(_Bool)arg1;	// IMP=0x0000000000009e90
- (id)specifiers;	// IMP=0x0000000000009c48
- (void)setVolumeLimitEU:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000009bb8
- (id)volumeLimitEU:(id)arg1;	// IMP=0x0000000000009b78
- (void)setVolumeLimit:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000009a0c
- (void)applyVolumeLimit;	// IMP=0x00000000000099a4
- (id)volumeLimit:(id)arg1;	// IMP=0x00000000000098f0

@end

