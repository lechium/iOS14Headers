//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSViewController.h>

@class AccountPSAdvancedController, MailboxListViewControllerPrefs;
@protocol MailboxBehaviorMailboxPickerDelegate;

@interface MailboxBehaviorMailboxPicker : PSViewController
{
    AccountPSAdvancedController<MailboxBehaviorMailboxPickerDelegate> *_target;	// 32 = 0x20
    MailboxListViewControllerPrefs *_mailboxListController;	// 40 = 0x28
    int _pickingForType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002e7fc
- (void)selectedLocally:(id)arg1;	// IMP=0x000000000002e7d8
- (void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2;	// IMP=0x000000000002e734
- (void)viewDidLoad;	// IMP=0x000000000002e350
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002e23c

@end
