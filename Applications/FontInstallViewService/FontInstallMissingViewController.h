//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FontInstallMissingController, NSArray, NSMutableArray, NSString;

@interface FontInstallMissingViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *installable;	// 8 = 0x8
    NSMutableArray *notInstallable;	// 16 = 0x10
    NSArray *output;	// 24 = 0x18
    FontInstallMissingController *remoteController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100008d2c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000100008c30
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100008748
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100008584
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100008500
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100008490
- (void)unwindSegue:(id)arg1;	// IMP=0x0000000100008450
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x000000010000834c
- (void)doNotInstall:(id)arg1;	// IMP=0x00000001000082fc
- (void)doInstall:(id)arg1;	// IMP=0x00000001000080d0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100008004
- (void)dismissViewWithMissingFonts:(id)arg1;	// IMP=0x0000000100007fa8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007728
- (void)viewDidLoad;	// IMP=0x00000001000076a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
