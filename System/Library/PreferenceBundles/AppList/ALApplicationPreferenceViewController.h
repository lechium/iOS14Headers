//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class ALApplicationTableDataSource, ALPreferencesTableDataSource, NSArray, NSMutableDictionary, NSString, UITableView;

@interface ALApplicationPreferenceViewController : PSListController
{
    ALPreferencesTableDataSource *_dataSource;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSString *_navigationTitle;	// 24 = 0x18
    NSArray *descriptors;	// 32 = 0x20
    id settingsDefaultValue;	// 40 = 0x28
    NSString *settingsPath;	// 48 = 0x30
    NSString *preferencesKey;	// 56 = 0x38
    NSMutableDictionary *settings;	// 64 = 0x40
    NSString *settingsKeyPrefix;	// 72 = 0x48
    NSString *settingsChangeNotification;	// 80 = 0x50
    _Bool singleEnabledMode;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(readonly, nonatomic) ALApplicationTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)specifierForID:(id)arg1;	// IMP=0x0000000000009994
- (void)launchURLFromCellDescriptor:(id)arg1 sectionDescriptor:(id)arg2;	// IMP=0x0000000000009914
- (void)showPreferencesFromCellDescriptor:(id)arg1 sectionDescriptor:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000098b0
- (id)specifierForIndexPath:(id)arg1;	// IMP=0x0000000000009644
- (id)appliedValueForKey:(id)arg1 inCellDescriptor:(id)arg2 sectionDescriptor:(id)arg3;	// IMP=0x00000000000091a0
- (void)pushController:(id)arg1;	// IMP=0x0000000000009148
- (id)valueTitleForCellAtIndexPath:(id)arg1;	// IMP=0x0000000000008e00
- (id)valueForCellAtIndexPath:(id)arg1;	// IMP=0x0000000000008c80
- (void)cellAtIndexPath:(id)arg1 didChangeToValue:(id)arg2;	// IMP=0x0000000000008878
- (struct CGSize)contentSize;	// IMP=0x0000000000008848
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000008780
- (id)view;	// IMP=0x0000000000008638
- (void)setTitle:(id)arg1;	// IMP=0x00000000000085e8
- (void)viewWillBecomeVisible:(void *)arg1;	// IMP=0x0000000000008588
- (void)setSpecifier:(id)arg1;	// IMP=0x0000000000008534
- (void)loadFromSpecifier:(id)arg1;	// IMP=0x0000000000007fb0
- (void)settingsChanged;	// IMP=0x0000000000007e6c
- (void)_updateSections;	// IMP=0x0000000000007c34
- (void)dealloc;	// IMP=0x0000000000007a50
- (id)initForContentSize:(struct CGSize)arg1;	// IMP=0x00000000000078cc

@end
