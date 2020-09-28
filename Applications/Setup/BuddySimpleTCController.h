//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyTableViewController.h"

#import "BFFFlowItem-Protocol.h"

@class NSString, UITableViewCell, UIWebView;
@protocol BuddyTCSubControllerDelegate;

@interface BuddySimpleTCController : BuddyTableViewController <BFFFlowItem>
{
    UITableViewCell *_blankCell;	// 8 = 0x8
    float _lastLayoutWidth;	// 16 = 0x10
    float _fullscreenCellHeight;	// 20 = 0x14
    UIWebView *_webView;	// 24 = 0x18
    NSString *_tcString;	// 32 = 0x20
    id <BuddyTCSubControllerDelegate> _delegate;	// 40 = 0x28
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000ca9c0
- (void).cxx_destruct;	// IMP=0x00000001000cb504
@property(nonatomic) __weak id <BuddyTCSubControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000cb46c
- (void)disagree:(id)arg1;	// IMP=0x00000001000cb410
- (void)agree:(id)arg1;	// IMP=0x00000001000cb3c8
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000cafa8
- (void)loadView;	// IMP=0x00000001000caf30
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000001000caf24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000caf10
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000cae9c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000cae94
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000cae8c
- (id)titleString;	// IMP=0x00000001000cae84
- (id)tcContent;	// IMP=0x00000001000cae7c
- (id)init;	// IMP=0x00000001000ca9c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
