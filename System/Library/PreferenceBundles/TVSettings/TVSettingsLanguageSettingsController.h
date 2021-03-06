//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, TopLevelSettingsController;

@interface TVSettingsLanguageSettingsController : PSListController
{
    unsigned long long _numberOfLanguages;	// 192 = 0xc0
    PSSpecifier *_languagesGroup;	// 200 = 0xc8
    PSSpecifier *_addLanguageSpecifier;	// 208 = 0xd0
    _Bool _inSwipeToDeleteMode;	// 216 = 0xd8
    _Bool _hasLocalChange;	// 217 = 0xd9
    TopLevelSettingsController *_topLevelController;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000008010
- (void)_preferredLanguagesDidChange:(id)arg1;	// IMP=0x0000000000007fd0
- (void)_specialExitEdit;	// IMP=0x0000000000007fbc
- (void)_removeLanguageWithIdentifier:(id)arg1;	// IMP=0x0000000000007e4c
- (void)_updateEditButtonState;	// IMP=0x0000000000007d98
- (id)_specifierForLanguage:(id)arg1;	// IMP=0x0000000000007ccc
- (void)_showAddLanguagePicker:(id)arg1;	// IMP=0x0000000000007bd0
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000007a20
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000079c8
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000079a4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000078a0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007728
- (id)specifiers;	// IMP=0x0000000000007134
- (void)reloadSpecifiers;	// IMP=0x0000000000007048
- (void)viewDidLoad;	// IMP=0x0000000000006f10
- (void)dealloc;	// IMP=0x0000000000006e98
- (id)init;	// IMP=0x0000000000006cdc

@end

