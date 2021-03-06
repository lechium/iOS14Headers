//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "HUUserListManagerTableDelegate-Protocol.h"
#import "HUUserManagementDelegate-Protocol.h"

@class HMHome, HUUserListTableManager, NSString;
@protocol HSUserListViewControllerDelegate;

@interface HSUserListViewController : UITableViewController <HUUserListManagerTableDelegate, HUUserManagementDelegate>
{
    id <HSUserListViewControllerDelegate> _delegate;	// 8 = 0x8
    HUUserListTableManager *_tableViewManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100041f88
@property(retain, nonatomic) HUUserListTableManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <HSUserListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateEditButton;	// IMP=0x0000000100041e8c
- (_Bool)_isUserListEmpty;	// IMP=0x0000000100041dac
- (void)_doneTapped;	// IMP=0x0000000100041d68
- (void)managerDidCancelInvite:(id)arg1 error:(id)arg2;	// IMP=0x0000000100041d08
- (void)managerDidRemoveUser:(id)arg1 error:(id)arg2;	// IMP=0x0000000100041ca8
- (void)managerDidUpdateUserList;	// IMP=0x0000000100041c9c
- (void)managerDidSendInvitations:(id)arg1;	// IMP=0x0000000100041c30
- (void)managerDidDismissWithError:(id)arg1;	// IMP=0x0000000100041bc4
- (void)updateHome:(id)arg1;	// IMP=0x0000000100041b90
@property(retain, nonatomic) HMHome *home;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100041714
- (void)viewDidLoad;	// IMP=0x0000000100041658
- (id)init;	// IMP=0x000000010004158c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

