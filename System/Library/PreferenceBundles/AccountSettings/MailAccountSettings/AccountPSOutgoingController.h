//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController
{
    PSSpecifier *_newOutgoingAccountSpecifier;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000023030
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000022e88
- (void)reloadOutgoingAccounts;	// IMP=0x0000000000022e7c
- (void)canceledAccountSetup;	// IMP=0x0000000000022db8
- (void)finishedAccountSetup;	// IMP=0x0000000000022d4c
- (id)specifiers;	// IMP=0x00000000000224f4
- (id)specifierForDeliveryAccount:(id)arg1 isPrimary:(_Bool)arg2 isCarrierAccount:(_Bool)arg3;	// IMP=0x0000000000021d3c
- (id)_getStatusForServer:(id)arg1;	// IMP=0x0000000000021aa4

@end
