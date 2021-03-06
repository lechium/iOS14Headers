//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "PKPassbookSettingsDelegate-Protocol.h"

@class NSString, PKPassbookSettingsController, PKPassbookSettingsDefaultBehavior;

@interface PassbookSettingsListController : PSListController <PKPassbookSettingsDelegate>
{
    PKPassbookSettingsController *_settingsController;	// 192 = 0xc0
    PKPassbookSettingsDefaultBehavior *_defaultBehavior;	// 200 = 0xc8
    _Bool _isVisible;	// 208 = 0xd0
    _Bool _showUpdateRequired;	// 209 = 0xd1
}

- (void).cxx_destruct;	// IMP=0x0000000000006458
- (id)_percentEncodeReferrerIdentifier:(id)arg1;	// IMP=0x00000000000063a0
- (void)_presentPassDetailsForPass:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000006324
- (void)requestDismissingPresentedViewControllerWithSettingsController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000062b0
- (void)settingsController:(id)arg1 requestsAuthenticationChallengeForAppleAccountInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005e64
- (void)settingsController:(id)arg1 requestsPresentSecurityRepairFlowWithSecurityCapabilities:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005d80
- (void)settingsControllerRequestsPresentPrivacyWithPresenter:(id)arg1;	// IMP=0x0000000000005d18
- (void)settingsController:(id)arg1 requestsDetailViewControllerForPass:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000005c98
- (void)settingsController:(id)arg1 requestsPushViewControllers:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000005bc0
- (void)settingsController:(id)arg1 requestsPushViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000005b4c
- (void)settingsController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005ae4
- (void)settingsControllerRequestsReloadSpecifiers:(id)arg1;	// IMP=0x0000000000005ad8
- (void)settingsController:(id)arg1 requestsReloadSpecifier:(id)arg2;	// IMP=0x0000000000005ac8
- (void)settingsController:(id)arg1 requestsAddCardPreflightWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005858
- (id)_passDetailsViewControllerForPass:(id)arg1;	// IMP=0x00000000000056c8
- (id)_passDetailsViewControllerForPeerPaymentPass;	// IMP=0x0000000000005590
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;	// IMP=0x00000000000054d8
- (void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;	// IMP=0x0000000000005138
- (void)_presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;	// IMP=0x0000000000004c2c
- (void)_refreshPasses;	// IMP=0x0000000000004bb8
- (id)specifiers;	// IMP=0x0000000000004af4
- (id)_appleCardUpsellAlertWithAccount:(id)arg1;	// IMP=0x0000000000004894
- (void)handleURL:(id)arg1;	// IMP=0x00000000000032fc
- (Class)tableViewClass;	// IMP=0x00000000000032b8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000326c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000321c
- (void)dealloc;	// IMP=0x0000000000003188
- (id)init;	// IMP=0x0000000000003014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

