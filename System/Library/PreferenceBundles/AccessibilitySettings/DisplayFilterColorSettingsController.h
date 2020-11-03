//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DisplayFilterBaseSettingsController.h"

#import "DisplayFilterPageControllerDelegate-Protocol.h"

@class DisplayFilterSettingsPreviewPageViewController, NSArray, NSMutableArray, NSMutableDictionary, PSSpecifier, UIPageControl;

__attribute__((visibility("hidden")))
@interface DisplayFilterColorSettingsController : DisplayFilterBaseSettingsController <DisplayFilterPageControllerDelegate>
{
    _Bool _displayingFilterSelection;	// 192 = 0xc0
    NSArray *_currentOptionSpecifiers;	// 200 = 0xc8
    NSArray *_currentFilterSelectionSpecifiers;	// 208 = 0xd0
    PSSpecifier *_specifierBeforeFilterOptions;	// 216 = 0xd8
    PSSpecifier *_specifierBeforeSelectionTable;	// 224 = 0xe0
    NSMutableDictionary *_filterTypeToOptionSpecifiers;	// 232 = 0xe8
    NSMutableArray *_filterSelectionSpecifiers;	// 240 = 0xf0
    unsigned long long _displayingOptionsForType;	// 248 = 0xf8
    DisplayFilterSettingsPreviewPageViewController *_previewPageController;	// 256 = 0x100
    UIPageControl *_pageControl;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000057dac
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) DisplayFilterSettingsPreviewPageViewController *previewPageController; // @synthesize previewPageController=_previewPageController;
@property(nonatomic) _Bool displayingFilterSelection; // @synthesize displayingFilterSelection=_displayingFilterSelection;
@property(nonatomic) unsigned long long displayingOptionsForType; // @synthesize displayingOptionsForType=_displayingOptionsForType;
@property(retain, nonatomic) NSMutableArray *filterSelectionSpecifiers; // @synthesize filterSelectionSpecifiers=_filterSelectionSpecifiers;
@property(retain, nonatomic) NSMutableDictionary *filterTypeToOptionSpecifiers; // @synthesize filterTypeToOptionSpecifiers=_filterTypeToOptionSpecifiers;
@property(retain, nonatomic) PSSpecifier *specifierBeforeSelectionTable; // @synthesize specifierBeforeSelectionTable=_specifierBeforeSelectionTable;
@property(retain, nonatomic) PSSpecifier *specifierBeforeFilterOptions; // @synthesize specifierBeforeFilterOptions=_specifierBeforeFilterOptions;
@property(retain, nonatomic) NSArray *currentFilterSelectionSpecifiers; // @synthesize currentFilterSelectionSpecifiers=_currentFilterSelectionSpecifiers;
@property(retain, nonatomic) NSArray *currentOptionSpecifiers; // @synthesize currentOptionSpecifiers=_currentOptionSpecifiers;
- (_Bool)ax_handlesOwnScrollingInSetup;	// IMP=0x0000000000057c44
- (void)setSingleColorFilterIntensity:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000057bc8
- (id)singleColorFilterIntensity:(id)arg1;	// IMP=0x0000000000057b98
- (void)setSingleColorFilterHue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000057b1c
- (id)singleColorFilterHue:(id)arg1;	// IMP=0x0000000000057aec
- (void)setGreenCorrectionIntensity:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000057a70
- (id)greenCorrectionIntensity:(id)arg1;	// IMP=0x0000000000057a40
- (void)setRedCorrectionIntensity:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000579c4
- (id)redCorrectionIntensity:(id)arg1;	// IMP=0x0000000000057994
- (void)setBlueCorrectionIntensity:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000057918
- (id)blueCorrectionIntensity:(id)arg1;	// IMP=0x00000000000578e8
- (void)_updateFilterOptionSpecifiers;	// IMP=0x000000000005765c
- (void)_updateFilterSelectionSpecifiers;	// IMP=0x000000000005750c
- (void)_updateOptionVisibility;	// IMP=0x00000000000574d8
- (void)updateSystemFilter;	// IMP=0x0000000000057488
- (id)_optionSpecifiersForType:(unsigned long long)arg1;	// IMP=0x00000000000573f4
- (void)_addOptionSpecifier:(id)arg1 forType:(unsigned long long)arg2;	// IMP=0x0000000000057270
- (void)_addFilterSpecifier:(id)arg1;	// IMP=0x00000000000571a0
- (void)setGlobalFilterEnabled:(_Bool)arg1;	// IMP=0x0000000000057150
- (void)reloadSpecifiers;	// IMP=0x0000000000057100
- (void)accessibilitySettingsDidChange;	// IMP=0x00000000000570b0
- (id)accessibilityPreferenceForSpecifier:(id)arg1;	// IMP=0x0000000000056fdc
- (void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000056f10
- (unsigned long long)filterForCellIdentifier:(id)arg1;	// IMP=0x0000000000056e3c
- (unsigned long long)filterCategory;	// IMP=0x0000000000056e34
- (void)_setupPreviewRegion;	// IMP=0x0000000000056480
- (void)changePage:(id)arg1;	// IMP=0x0000000000056404
- (void)didSelectDisplayFilterPage:(long long)arg1;	// IMP=0x00000000000563bc
- (void)viewDidLoad;	// IMP=0x00000000000561a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000560e8
- (id)specifiers;	// IMP=0x0000000000055b9c
- (double)_headerHeight;	// IMP=0x0000000000055b00
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005591c

@end
