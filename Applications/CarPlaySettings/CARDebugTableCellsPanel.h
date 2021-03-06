//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsPanel.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CARSettingsCellSpecifier, NSLayoutConstraint, NSString, UITableView, UITableViewHeaderFooterView, UIView;

@interface CARDebugTableCellsPanel : CARSettingsPanel <UITableViewDataSource, UITableViewDelegate>
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UITableViewHeaderFooterView *_headerView;	// 24 = 0x18
    UIView *_headerPlatter;	// 32 = 0x20
    NSLayoutConstraint *_platterLeftConstraint;	// 40 = 0x28
    NSLayoutConstraint *_platterRightConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000035fc
@property(retain, nonatomic) NSLayoutConstraint *platterRightConstraint; // @synthesize platterRightConstraint=_platterRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platterLeftConstraint; // @synthesize platterLeftConstraint=_platterLeftConstraint;
@property(retain, nonatomic) UIView *headerPlatter; // @synthesize headerPlatter=_headerPlatter;
@property(retain, nonatomic) UITableViewHeaderFooterView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000034c0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000034b8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100003478
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100003470
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100003230
- (void)viewDidLoad;	// IMP=0x0000000100002cfc
- (id)initWithPanelController:(id)arg1;	// IMP=0x0000000100002cc8
- (id)cellSpecifier;	// IMP=0x0000000100002b54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

