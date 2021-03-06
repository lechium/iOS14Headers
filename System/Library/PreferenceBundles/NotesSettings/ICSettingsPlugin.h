//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSystemPolicyForApp;

@interface ICSettingsPlugin : PSListController
{
    PSSystemPolicyForApp *_systemPolicy;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000000ea94
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
- (id)_getShouldSavePhotosVideos:(id)arg1;	// IMP=0x000000000000e9cc
- (void)_setShouldSavePhotosVideos:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000e958
- (id)_getUseDarkBackgroundsForNoteContent:(id)arg1;	// IMP=0x000000000000e914
- (void)_setUseDarkBackgroundsForNoteContent:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000e898
- (void)_setLocalNotesEnabled:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000e22c
- (id)_getLocalNotesEnabled:(id)arg1;	// IMP=0x000000000000e140
- (id)_notePaperStyle:(id)arg1;	// IMP=0x000000000000e0c0
- (id)_getSortCheckedItems:(id)arg1;	// IMP=0x000000000000e010
- (id)_noteDefaultStyle:(id)arg1;	// IMP=0x000000000000dfcc
- (void)_setNoteDefaultStyle:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000df4c
- (void)_setOnlyDrawWithApplePencil:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000dec8
- (id)_getOnlyDrawWithApplePencil:(id)arg1;	// IMP=0x000000000000de7c
- (id)_getAccessNotesFromLockScreen:(id)arg1;	// IMP=0x000000000000ddd4
- (void)_setNoteSortType:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000dd54
- (id)_currentNoteSortType:(id)arg1;	// IMP=0x000000000000dd10
- (void)_setDefaultNotesAccountSyncId:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000000dcd0
- (id)_defaultNotesAccountSyncId:(id)arg1;	// IMP=0x000000000000da88
- (void)_showPaperStyleScreen:(id)arg1;	// IMP=0x000000000000d91c
- (void)_showPasswordScreen:(id)arg1;	// IMP=0x000000000000d68c
- (id)_getShowPasswordScreen:(id)arg1;	// IMP=0x000000000000d674
- (id)_accountTitlesForSpecifier:(id)arg1;	// IMP=0x000000000000d3b8
- (id)_accountValuesForSpecifier:(id)arg1;	// IMP=0x000000000000d130
- (id)_applePencilSpecifiers;	// IMP=0x000000000000cecc
- (id)_lockscreenSpecifiers;	// IMP=0x000000000000cc0c
- (id)_mediaSpecifiers;	// IMP=0x000000000000c988
- (id)_viewingSpecifiers;	// IMP=0x000000000000b7f4
- (id)_accountsSpecifiers;	// IMP=0x000000000000ae9c
- (id)_appPolicySpecifiers;	// IMP=0x000000000000ae40
- (id)specifiers;	// IMP=0x000000000000ab04
- (id)settingsBundle;	// IMP=0x000000000000aad0
- (void)accountsDidChange;	// IMP=0x000000000000aac4
- (id)allAccountsIncludingThoseInHTMLNoteContext:(id)arg1;	// IMP=0x000000000000a814
- (_Bool)hasMigratedLocalAccountWithNotes;	// IMP=0x000000000000a764
- (void)addLocalAccount;	// IMP=0x000000000000a5e8
- (void)deleteLocalAccount;	// IMP=0x000000000000a494
- (id)localAccount;	// IMP=0x000000000000a3f0
- (id)localAccountName;	// IMP=0x000000000000a3dc
- (_Bool)localAccountHasNotes;	// IMP=0x000000000000a2b4
- (_Bool)localAccountExists;	// IMP=0x000000000000a1cc
- (_Bool)hasSyncingAccount;	// IMP=0x000000000000a120
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000a0d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000a06c

@end

