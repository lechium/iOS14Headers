//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CACAlwaysShowOverlayController : AXUISettingsBaseListController
{
    NSArray *_dimmingSpecifiers;	// 192 = 0xc0
    NSArray *_gridSpecifiers;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000045b68
@property(retain, nonatomic) NSArray *gridSpecifiers; // @synthesize gridSpecifiers=_gridSpecifiers;
@property(retain, nonatomic) NSArray *dimmingSpecifiers; // @synthesize dimmingSpecifiers=_dimmingSpecifiers;
- (id)gridOverlayMaxLevelSummary:(id)arg1;	// IMP=0x0000000000045ac0
- (id)gridOverlayPressOnFirstLevelEnabled:(id)arg1;	// IMP=0x0000000000045a48
- (void)setGridOverlayPressOnFirstLevel:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000459c8
- (id)gridOverlayRowsSummary:(id)arg1;	// IMP=0x00000000000458c4
- (id)gridOverlayColumnsSummary:(id)arg1;	// IMP=0x00000000000457c0
- (id)overlayFadeOpacitySummary:(id)arg1;	// IMP=0x000000000004575c
- (id)overlayFadeDelaySummary:(id)arg1;	// IMP=0x0000000000045694
- (_Bool)didAddOverlaySpecifiers;	// IMP=0x0000000000045608
- (_Bool)didAddGridSpecifiers;	// IMP=0x000000000004557c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044f4c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044dc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000044d70
- (id)specifiers;	// IMP=0x0000000000044540
- (void)dealloc;	// IMP=0x00000000000444e8
- (id)init;	// IMP=0x0000000000044424

@end

