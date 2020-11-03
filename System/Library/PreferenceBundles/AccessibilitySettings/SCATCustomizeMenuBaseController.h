//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXReorderableCheckmarkListController.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCATCustomizeMenuBaseController : AXReorderableCheckmarkListController
{
    NSMutableDictionary *_hiddenIndexesToDictionaries;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000075b64
@property(retain, nonatomic) NSMutableDictionary *hiddenIndexesToDictionaries; // @synthesize hiddenIndexesToDictionaries=_hiddenIndexesToDictionaries;
- (long long)indexOfSectionForItems;	// IMP=0x0000000000075b38
- (id)itemAfterTogglingEnabledState:(id)arg1;	// IMP=0x00000000000759ec
- (_Bool)isItemEnabled:(id)arg1;	// IMP=0x0000000000075990
- (id)titleForItem:(id)arg1;	// IMP=0x00000000000758dc
- (void)updateElementsInTopLevelWithItems:(id)arg1;	// IMP=0x000000000007548c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000753d0
- (void)selectRowForSpecifier:(id)arg1;	// IMP=0x0000000000075374
- (void)_toggleButtonTapped:(id)arg1;	// IMP=0x000000000007521c
- (void)_updateToggleButtonName;	// IMP=0x0000000000075184
- (_Bool)_toggleShouldEnableAllMenuItems;	// IMP=0x0000000000075044
- (id)nameForHideToggle;	// IMP=0x0000000000075034
- (id)nameForShowToggle;	// IMP=0x0000000000075024
- (id)_nameForToggle;	// IMP=0x0000000000074fd4
- (id)specifiers;	// IMP=0x0000000000074f78
- (id)restorePreviouslyFilteredItemsToItems:(id)arg1;	// IMP=0x0000000000074c18
- (id)filterAndTrackMenuItemsMatchingBlock:(CDUnknownBlockType)arg1 allItems:(id)arg2;	// IMP=0x0000000000074980
- (id)menuItemSpecifiersIncludingToggleButton;	// IMP=0x000000000007477c

@end
