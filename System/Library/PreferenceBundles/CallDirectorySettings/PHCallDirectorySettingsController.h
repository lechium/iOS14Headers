//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "CXCallDirectoryExtensionManagerDelegate-Protocol.h"

@class CXCallDirectoryExtensionManager, NSMutableArray, NSString;

@interface PHCallDirectorySettingsController : PSListController <CXCallDirectoryExtensionManagerDelegate>
{
    _Bool _specifiersNeedReload;	// 192 = 0xc0
    CXCallDirectoryExtensionManager *_extensionManager;	// 200 = 0xc8
    NSMutableArray *_extensions;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000000606c
@property(retain, nonatomic) NSMutableArray *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) CXCallDirectoryExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
@property(nonatomic) _Bool specifiersNeedReload; // @synthesize specifiersNeedReload=_specifiersNeedReload;
- (void)presentError:(id)arg1 fromSettingEnabled:(_Bool)arg2 forExtension:(id)arg3;	// IMP=0x0000000000005c98
- (void)setNavigationItemsForEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000005b80
- (void)refreshView;	// IMP=0x0000000000005aec
- (_Bool)canEditExtensions;	// IMP=0x0000000000005a9c
- (id)_localizedExtensionTitleForExtension:(id)arg1;	// IMP=0x000000000000593c
- (id)createExtensionsGroupSpecifiers;	// IMP=0x000000000000549c
- (void)_updateExtensions;	// IMP=0x0000000000005038
- (void)extensionsChangedForCallDirectoryExtensionManager:(id)arg1;	// IMP=0x0000000000004fb8
- (id)callDirectoryExtensionForSpecifier:(id)arg1;	// IMP=0x0000000000004f04
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000004e34
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000489c
- (id)readPreferenceValue:(id)arg1;	// IMP=0x000000000000475c
- (id)specifiers;	// IMP=0x0000000000004658
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00000000000045bc
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000045b4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000045ac
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000000041e0
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000000000419c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000040cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
