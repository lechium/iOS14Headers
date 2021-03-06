//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "ASTCursorColorSelectionControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SCATController : AXUISettingsBaseListController <ASTCursorColorSelectionControllerDelegate>
{
    NSArray *_cachedAutoScanningOptionsSpecifiers;	// 192 = 0xc0
    NSArray *_cachedManualScanningOptionsSpecifiers;	// 200 = 0xc8
    NSArray *_cachedDwellScanningOptionsSpecifiers;	// 208 = 0xd0
    NSArray *_cachedSpeechOptionsSpecifiers;	// 216 = 0xd8
    NSMutableArray *_cachedPointPickerOptionsSpecifiers;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000f1400
@property(retain, nonatomic) NSMutableArray *cachedPointPickerOptionsSpecifiers; // @synthesize cachedPointPickerOptionsSpecifiers=_cachedPointPickerOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedSpeechOptionsSpecifiers; // @synthesize cachedSpeechOptionsSpecifiers=_cachedSpeechOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedDwellScanningOptionsSpecifiers; // @synthesize cachedDwellScanningOptionsSpecifiers=_cachedDwellScanningOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedManualScanningOptionsSpecifiers; // @synthesize cachedManualScanningOptionsSpecifiers=_cachedManualScanningOptionsSpecifiers;
@property(retain, nonatomic) NSArray *cachedAutoScanningOptionsSpecifiers; // @synthesize cachedAutoScanningOptionsSpecifiers=_cachedAutoScanningOptionsSpecifiers;
- (_Bool)cursorColorSelectionController:(id)arg1 allowsCursorColor:(long long)arg2;	// IMP=0x00000000000f1334
- (long long)selectedColorForSelectionController:(id)arg1;	// IMP=0x00000000000f12e0
- (void)cursorColorSelectionController:(id)arg1 selectedCursorColor:(long long)arg2;	// IMP=0x00000000000f1290
- (id)pointPickerSelectionStyleSummary:(id)arg1;	// IMP=0x00000000000f11f4
- (id)useExtendedKeyboardPredictions:(id)arg1;	// IMP=0x00000000000f117c
- (void)setUseExtendedKeyboardPredictions:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f110c
- (id)restartScanningAtCurrentKey:(id)arg1;	// IMP=0x00000000000f1094
- (void)setRestartScanningAtCurrentKey:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f1024
- (id)alwaysTapKeyboardKeysEnabled:(id)arg1;	// IMP=0x00000000000f0fac
- (void)setAlwaysTapKeyboardKeysEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f0f3c
- (id)recipesSummary:(id)arg1;	// IMP=0x00000000000f0eac
- (id)speechEnabled:(id)arg1;	// IMP=0x00000000000f0e30
- (void)setSoundEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f0dc0
- (id)soundEnabled:(id)arg1;	// IMP=0x00000000000f0d48
- (id)scanCyclesSummary:(id)arg1;	// IMP=0x00000000000f0ce8
- (void)setCompactMenuEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f0c78
- (id)compactMenuEnabled:(id)arg1;	// IMP=0x00000000000f0c00
- (void)setItemGroupingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f0b90
- (id)itemGroupingEnabled:(id)arg1;	// IMP=0x00000000000f0b18
- (void)setScanByElements:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000f0a98
- (id)scanByElements:(id)arg1;	// IMP=0x00000000000f0a1c
- (id)scanningStyle:(id)arg1;	// IMP=0x00000000000f097c
- (id)customGesturesSummary:(id)arg1;	// IMP=0x00000000000f08ec
- (id)_summaryForListOfItems:(id)arg1;	// IMP=0x00000000000f08a8
- (id)dwellTimeSummary:(id)arg1;	// IMP=0x00000000000f0838
- (id)scanTimeoutSummary:(id)arg1;	// IMP=0x00000000000f07a0
- (id)headScanningSummary:(id)arg1;	// IMP=0x00000000000f0728
- (id)delayAfterInputSummary:(id)arg1;	// IMP=0x00000000000f0690
- (id)scanLocationAfterTapSummary:(id)arg1;	// IMP=0x00000000000f0610
- (id)tapBehaviorSummary:(id)arg1;	// IMP=0x00000000000f057c
- (id)longPressSummary:(id)arg1;	// IMP=0x00000000000f04e4
- (id)actionRepeatSummary:(id)arg1;	// IMP=0x00000000000f044c
- (id)headMovementSummary:(id)arg1;	// IMP=0x00000000000f03ec
- (id)inputCoalescingSummary:(id)arg1;	// IMP=0x00000000000f0354
- (id)autoscanDelaySummary:(id)arg1;	// IMP=0x00000000000f02e4
- (id)holdDurationSummary:(id)arg1;	// IMP=0x00000000000f024c
- (id)selectActionDelaySummary:(id)arg1;	// IMP=0x00000000000f017c
- (id)_localizedSummaryForDelay:(double)arg1;	// IMP=0x00000000000f0174
- (id)switchesSummary:(id)arg1;	// IMP=0x00000000000f00ec
- (void)setSwitchScanningEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000efbf0
- (id)switchScanningEnabled:(id)arg1;	// IMP=0x00000000000efbb8
- (id)cursorColorDescription:(id)arg1;	// IMP=0x00000000000efb58
- (void)setCursorHighVisibility:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000efae8
- (id)cursorHighVisibility:(id)arg1;	// IMP=0x00000000000efa70
- (id)_pointPickerSpecifiers;	// IMP=0x00000000000ef8b4
- (_Bool)_isUsingHeadSwitch;	// IMP=0x00000000000ef860
- (id)_dwellScanningOptionsSpecifiers;	// IMP=0x00000000000ef6f8
- (id)_manualScanningOptionsSpecifiers;	// IMP=0x00000000000ef66c
- (id)_autoScanningOptionsSpecifiers;	// IMP=0x00000000000ef388
- (id)_scanTimeoutSpecifier;	// IMP=0x00000000000ef2e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ef290
- (id)specifiers;	// IMP=0x00000000000edfbc
- (id)selectSpecifier:(id)arg1;	// IMP=0x00000000000edf3c
- (void)_preferencesDidChange:(id)arg1;	// IMP=0x00000000000ede84
- (_Bool)_shouldDisableSwitch;	// IMP=0x00000000000ede50
- (id)init;	// IMP=0x00000000000ed54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

