//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "CNContactPickerDelegate-Protocol.h"

@class CNContactPickerViewController, CNContactStore, NSString, PSSpecifier, TUContactsDataProvider;

@interface PHSettingsBlacklistController : PSListController <CNContactPickerDelegate>
{
    _Bool _editing;	// 192 = 0xc0
    CNContactStore *_contactStore;	// 200 = 0xc8
    TUContactsDataProvider *_contactsDataProvider;	// 208 = 0xd0
    CNContactPickerViewController *_contactPickerViewController;	// 216 = 0xd8
    PSSpecifier *_addNewSpecifier;	// 224 = 0xe0
    long long _specifierStartIndex;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000006590
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) long long specifierStartIndex; // @synthesize specifierStartIndex=_specifierStartIndex;
@property(retain, nonatomic) PSSpecifier *addNewSpecifier; // @synthesize addNewSpecifier=_addNewSpecifier;
@property(retain, nonatomic) CNContactPickerViewController *contactPickerViewController; // @synthesize contactPickerViewController=_contactPickerViewController;
@property(retain, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000006448
- (void)blockContact:(id)arg1;	// IMP=0x000000000000610c
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000006104
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000006084
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000005f80
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005f1c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005eb8
- (id)_specifierForRowIndex:(long long)arg1;	// IMP=0x0000000000005e3c
- (void)_showContactPickerViewController:(id)arg1;	// IMP=0x0000000000005b40
- (void)_editDoneButtonTapped:(id)arg1;	// IMP=0x0000000000005b20
- (void)_updateForEditingState;	// IMP=0x0000000000005a04
- (void)_updateEditDoneButton;	// IMP=0x0000000000005850
- (void)_ruleTapped:(id)arg1;	// IMP=0x00000000000051ec
- (id)specifiers;	// IMP=0x0000000000004a38
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000049e4
- (void)loadView;	// IMP=0x0000000000004968
- (void)_rulesChanged:(id)arg1;	// IMP=0x00000000000048c4
- (void)dealloc;	// IMP=0x000000000000484c
- (id)init;	// IMP=0x000000000000478c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
