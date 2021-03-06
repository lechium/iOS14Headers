//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

#import "AAUISpecifierProviderDelegate-Protocol.h"
#import "AAUIUbiquitySpecifierProviderDelegate-Protocol.h"
#import "DelayedPushDelegate-Protocol.h"
#import "RUILoaderDelegate-Protocol.h"
#import "RUIObjectModelDelegate-Protocol.h"
#import "RUITableViewRowDelegate-Protocol.h"

@class AAUIQuotaResponse, AAUIUbiquitySpecifierProvider, AIDAAccountManager, NSArray, NSMutableArray, NSObject, NSOperationQueue, NSString, PSListController, PSSpecifier, RUILoader, UINavigationController;
@protocol AAUIiCloudServiceViewControllerDelegate, AIDAServiceOwnerProtocol, NSObject, OS_dispatch_queue, PreferencesRemoteUIDelegateProtocol;

@interface AAUIiCloudServiceViewController : ACUIDataclassConfigurationViewController <AAUISpecifierProviderDelegate, AAUIUbiquitySpecifierProviderDelegate, RUITableViewRowDelegate, RUILoaderDelegate, RUIObjectModelDelegate, DelayedPushDelegate>
{
    NSMutableArray *_storageSpecifiers;	// 192 = 0xc0
    NSMutableArray *_appSpecifiers;	// 200 = 0xc8
    AAUIUbiquitySpecifierProvider *_ubiquitySpecifierProvider;	// 208 = 0xd0
    PSSpecifier *_mailDataclassSpecifier;	// 216 = 0xd8
    PSSpecifier *_keychainSyncSpecifier;	// 224 = 0xe0
    _Bool _hasCachedAvailableQuota;	// 232 = 0xe8
    _Bool _delayedEnterManageStorage;	// 233 = 0xe9
    NSArray *_cachediCloudMediaUsage;	// 240 = 0xf0
    int _keychainStatus;	// 248 = 0xf8
    NSOperationQueue *_networkActivityQueue;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_accountWorkQueue;	// 264 = 0x108
    id _restrictionChangeNotificationObserver;	// 272 = 0x110
    int _keychainSyncNotificationToken;	// 280 = 0x118
    PSListController *_storageSettingsController;	// 288 = 0x120
    PSListController *_photoStreamSettingsController;	// 296 = 0x128
    UINavigationController *_addEmailNavController;	// 304 = 0x130
    RUILoader *_addEmailLoader;	// 312 = 0x138
    NSMutableArray *_addEmailObjectModels;	// 320 = 0x140
    AAUIQuotaResponse *_cachedQuotaResponse;	// 328 = 0x148
    id <NSObject> _deviceLocatorStateDidChangeObserver;	// 336 = 0x150
    id <PreferencesRemoteUIDelegateProtocol> _prefsRemoteUIDelegate;	// 344 = 0x158
    PSSpecifier *_activeSpecifier;	// 352 = 0x160
    NSString *_initialStorageFlowAction;	// 360 = 0x168
    id <AIDAServiceOwnerProtocol> _serviceOwnersManager;	// 368 = 0x170
    AIDAAccountManager *_accountManager;	// 376 = 0x178
    id <AAUIiCloudServiceViewControllerDelegate> _delegate;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x0000000000019b10
@property(nonatomic) __weak id <AAUIiCloudServiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) id <AIDAServiceOwnerProtocol> serviceOwnersManager; // @synthesize serviceOwnersManager=_serviceOwnersManager;
- (void)ubiquityProviderShowViewController:(id)arg1;	// IMP=0x0000000000019a10
- (id)ubiquityProviderGetAccountOperationsHelper;	// IMP=0x0000000000019a04
- (void)specifierProvider:(id)arg1 dataclassSwitchStateDidChange:(id)arg2 withSpecifier:(id)arg3;	// IMP=0x0000000000019994
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000019838
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;	// IMP=0x00000000000197a0
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;	// IMP=0x00000000000196e4
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;	// IMP=0x0000000000019638
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000195e0
- (Class)tableCellClassForTableViewRow:(id)arg1;	// IMP=0x00000000000195d4
- (void)remoteUIDelegate:(id)arg1 didCreatePage:(id)arg2 inObjectModel:(id)arg3;	// IMP=0x0000000000019424
- (void)loadFailed:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000019388
- (void)loadFinished:(id)arg1;	// IMP=0x00000000000192ec
- (void)loadStarted:(id)arg1;	// IMP=0x0000000000019264
- (_Bool)_isMultiUserMode;	// IMP=0x0000000000019250
- (_Bool)_shouldDisableiCloudUI;	// IMP=0x000000000001915c
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;	// IMP=0x0000000000019154
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;	// IMP=0x0000000000018f64
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000018e2c
- (void)objectModelPressedBack:(id)arg1;	// IMP=0x0000000000018e28
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x0000000000018e18
- (void)_cleanupLoader;	// IMP=0x0000000000018dc8
- (id)sessionConfigurationForLoader:(id)arg1;	// IMP=0x0000000000018d60
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000018d14
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x000000000001887c
- (void)_configureEmailAccount;	// IMP=0x00000000000182e4
- (void)_presentCreateFreeEmailPromptWithCompletion:(CDUnknownBlockType)arg1 isForNotes:(_Bool)arg2;	// IMP=0x000000000001807c
- (void)_promptForEmailAccountConfiguration;	// IMP=0x0000000000017ef0
- (void)_stopObservingDeviceLocatorStateDidChangeNotification;	// IMP=0x0000000000017e6c
- (void)_deviceLocatorStateDidChangeNotification:(id)arg1;	// IMP=0x0000000000017d8c
- (void)_startObservingDeviceLocatorStateDidChangeNotification;	// IMP=0x0000000000017c0c
- (void)_keychainSyncStateDidChange;	// IMP=0x0000000000017c00
- (void)_stopListeningForKeychainSyncStatusChangeNotification;	// IMP=0x0000000000017bf0
- (void)_registerForKeychainSyncStatusChangeNotification;	// IMP=0x0000000000017a08
- (void)_stopObservingRestrictionChanges;	// IMP=0x0000000000017984
- (void)_startObservingRestrictionChanges;	// IMP=0x00000000000177d0
- (void)_accountDidChangeFromAccount:(id)arg1 toAccount:(id)arg2;	// IMP=0x000000000001722c
- (void)_stopObservingAccountStoreChanges;	// IMP=0x00000000000171e4
- (void)_startObservingAccountStoreChanges;	// IMP=0x000000000001701c
- (_Bool)shouldContinueDataclassChangeForSpecifier:(id)arg1;	// IMP=0x0000000000016d74
- (void)tapToRadarWithTitle:(id)arg1 initialMessage:(id)arg2;	// IMP=0x0000000000016a4c
- (void)_displayAccountSaveErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternativeAction:(id)arg3;	// IMP=0x0000000000016580
- (void)_handleMaxTierAndInsufficientStorageErrorWithFailedDataclasses:(id)arg1;	// IMP=0x0000000000016324
- (void)_beginManateeUpgradeForAccount:(id)arg1 failedDataclassName:(id)arg2;	// IMP=0x00000000000159c8
- (void)_handleManateeErrorForAccount:(id)arg1 withDescription:(id)arg2 failedDataclasses:(id)arg3;	// IMP=0x0000000000015874
- (void)_handleInsufficientStorageWithUserInfo:(id)arg1;	// IMP=0x000000000001569c
- (void)_handleAccountSaveError:(id)arg1 forAccount:(id)arg2 failedDataclasses:(id)arg3;	// IMP=0x0000000000015464
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000015254
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;	// IMP=0x00000000000150dc
- (void)_setDataclasses:(id)arg1 enabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014dec
- (void)_loadCloudKitSettingsBundleIfNeeded;	// IMP=0x0000000000014cc0
- (void)_loadMailSettingsBundleIfNeeded;	// IMP=0x0000000000014b94
- (id)_loadUsageSettingsBundleIfNeeded;	// IMP=0x0000000000014a6c
- (_Bool)_hasActiveSpecifier;	// IMP=0x0000000000014a54
- (void)_stopSpinnerInActiveSpecifier;	// IMP=0x0000000000014994
- (void)_startSpinnerInSpecifier:(id)arg1;	// IMP=0x00000000000148c0
- (void)_showPhotoStreamController:(id)arg1;	// IMP=0x000000000001469c
- (void)_presentMailSettingsViewControllerForSpecifier:(id)arg1;	// IMP=0x0000000000014558
- (void)_footerButtonTapped:(id)arg1;	// IMP=0x000000000001447c
- (void)_photoStreamSpecifierWasTapped:(id)arg1;	// IMP=0x0000000000014470
- (void)_shoeboxStateDidChange:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x0000000000013eac
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x0000000000013d20
- (void)_enterManageStorage:(id)arg1;	// IMP=0x00000000000139dc
- (void)_enterManageStorageWhenPossible:(id)arg1;	// IMP=0x00000000000139a0
- (void)_storageSpecifierWasTapped:(id)arg1;	// IMP=0x0000000000013994
- (void)_refreshKeychainState;	// IMP=0x0000000000013758
- (id)_keychainSyncStateForSpecifier:(id)arg1;	// IMP=0x00000000000135b8
- (id)_isPhotoStreamEnabledString:(id)arg1;	// IMP=0x0000000000013508
- (_Bool)_isPhotoStreamEnabled;	// IMP=0x0000000000013414
- (id)_isShoeboxEnabledForSpecifier:(id)arg1;	// IMP=0x0000000000013358
- (void)_getQuotaInfo:(id)arg1;	// IMP=0x0000000000012e3c
- (void)_reloadStorageSpecifiers;	// IMP=0x0000000000012cbc
- (void)_updateAccount:(id)arg1 withQuotaResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012984
- (id)_valueForStorageSpecifier:(id)arg1;	// IMP=0x0000000000012740
- (_Bool)shouldShowSpecifierForDataclass:(id)arg1;	// IMP=0x0000000000012694
- (id)_specifierForKeychainSync;	// IMP=0x000000000001255c
- (id)_specifierForPhotoStream;	// IMP=0x000000000001233c
- (id)_specifierForHealth;	// IMP=0x0000000000012298
- (id)_specifierForShoebox;	// IMP=0x00000000000120f0
- (void)_signOutAccountForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011d78
- (void)_signInAccountForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010e90
- (id)_valueForServiceSpecifier:(id)arg1;	// IMP=0x0000000000010dbc
- (_Bool)_accountMatchesPrimaryAccount:(id)arg1 service:(id)arg2;	// IMP=0x0000000000010b74
- (void)_setValue:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x0000000000010900
- (id)_specifierForServiceType:(id)arg1;	// IMP=0x0000000000010758
- (_Bool)_shouldShowSpecifierForServiceType:(id)arg1;	// IMP=0x00000000000105f0
- (id)specifierForDataclass:(id)arg1;	// IMP=0x0000000000010424
- (id)_specifiersForProvisionedDataclasses;	// IMP=0x00000000000101a4
- (_Bool)_shouldEnableFMIPSpecifier;	// IMP=0x0000000000010154
- (id)_specifierForLookMeUpByEmail;	// IMP=0x000000000000ff04
- (id)_specifierForMailSettings;	// IMP=0x000000000000fbfc
- (_Bool)shouldShowOtherSpecifiersDuringFirstSetup;	// IMP=0x000000000000fbf4
- (id)_specifiersForServerProvidedFooter;	// IMP=0x000000000000f914
- (id)otherSpecifiers;	// IMP=0x000000000000f7b4
- (void)_backupSpecifierWasTapped:(id)arg1;	// IMP=0x000000000000f6e4
- (id)_isBackupEnabledForSpecifier:(id)arg1;	// IMP=0x000000000000f608
- (id)_specifierForBackup;	// IMP=0x000000000000f468
- (_Bool)_shouldShowBackupSpecifier;	// IMP=0x000000000000f3b0
- (id)_specifiersForAppsGroup;	// IMP=0x000000000000ee04
- (id)_specifiersForStorageGroup;	// IMP=0x000000000000ea28
- (void)_forgetSpecifiers;	// IMP=0x000000000000e9e8
- (id)specifiers;	// IMP=0x000000000000e7c8
- (void)setCachedResponse:(id)arg1;	// IMP=0x000000000000e768
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000e664
- (void)viewDidLoad;	// IMP=0x000000000000e630
- (_Bool)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(_Bool *)arg3;	// IMP=0x000000000000e2b8
- (void)dealloc;	// IMP=0x000000000000e19c
- (id)account;	// IMP=0x000000000000df18
- (id)init;	// IMP=0x000000000000ddfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

