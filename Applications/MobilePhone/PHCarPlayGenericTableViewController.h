//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHCarPlayGenericViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVExternalDevice, NSString, PHCarPlayNoContentBannerView, UITableView, _UIFilteredDataSource;

@interface PHCarPlayGenericTableViewController : PHCarPlayGenericViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _tableViewReloadIsRequiredOnViewWillAppear;	// 8 = 0x8
    UITableView *_mainTableView;	// 16 = 0x10
    _UIFilteredDataSource *_mainTableViewDataSource;	// 24 = 0x18
    PHCarPlayNoContentBannerView *_noContentBannerView;	// 32 = 0x20
    AVExternalDevice *_carPlayExternalDevice;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000af530
@property(retain) AVExternalDevice *carPlayExternalDevice; // @synthesize carPlayExternalDevice=_carPlayExternalDevice;
@property(retain) PHCarPlayNoContentBannerView *noContentBannerView; // @synthesize noContentBannerView=_noContentBannerView;
@property _Bool tableViewReloadIsRequiredOnViewWillAppear; // @synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear;
@property(retain) _UIFilteredDataSource *mainTableViewDataSource; // @synthesize mainTableViewDataSource=_mainTableViewDataSource;
@property(retain) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (id)preferredFocusEnvironments;	// IMP=0x00000001000af3a4
- (_Bool)_viewControllerWasSelected;	// IMP=0x00000001000af2fc
- (void)limitedUIChanged:(id)arg1;	// IMP=0x00000001000af21c
- (long long)filterType;	// IMP=0x00000001000af1c8
- (void)carPlayInCallViewControllerAppearedNotification:(id)arg1;	// IMP=0x00000001000af12c
- (void)updateBadgeString;	// IMP=0x00000001000aeff8
@property(readonly) NSString *badgeString;
- (id)subtitleForNoContentBanner;	// IMP=0x00000001000aefe8
- (id)titleForNoContentBanner;	// IMP=0x00000001000aefdc
- (void)setNoContentBannerShown:(_Bool)arg1;	// IMP=0x00000001000aea58
- (void)hardwareControlEventNotification:(id)arg1;	// IMP=0x00000001000ae828
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000ae74c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000ae744
- (void)programmaticallySelectRowAtIndexPath:(id)arg1;	// IMP=0x00000001000ae68c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000ae570
- (double)defaultRowHeight;	// IMP=0x00000001000ae564
- (void)loadView;	// IMP=0x00000001000ae444
- (void)applicationBadgeChangedNotification:(id)arg1;	// IMP=0x00000001000ae38c
- (void)dealloc;	// IMP=0x00000001000ae2c8
- (id)init;	// IMP=0x00000001000ae12c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

