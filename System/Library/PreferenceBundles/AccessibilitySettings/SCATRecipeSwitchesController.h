//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class AXSwitchRecipe, AXSwitchRecipeMapping;

__attribute__((visibility("hidden")))
@interface SCATRecipeSwitchesController : AXUISettingsBaseListController
{
    AXSwitchRecipe *_recipe;	// 192 = 0xc0
    AXSwitchRecipeMapping *_mapping;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000010834c
@property(retain, nonatomic) AXSwitchRecipeMapping *mapping; // @synthesize mapping=_mapping;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000107f64
- (id)specifiers;	// IMP=0x0000000000107aec
- (_Bool)_isForExistingMappingWithMissingSwitch;	// IMP=0x0000000000107a48

@end

