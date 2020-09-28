//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CBWiFiManager, CBWindow, NSLayoutConstraint, NSString, NSTimer, UIImage;

@interface CBNetworkViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _nextButtonTheme;	// 8 = 0x8
    _Bool _networkViewControllerVisible;	// 9 = 0x9
    CBWiFiManager *_wifiManager;	// 16 = 0x10
    CBWindow *_otherNetworkWindow;	// 24 = 0x18
    UIImage *_blueCheck;	// 32 = 0x20
    UIImage *_spacer;	// 40 = 0x28
    NSTimer *_wifiTimeoutTimer;	// 48 = 0x30
    NSLayoutConstraint *_heightAnchor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000e594
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain, nonatomic) NSTimer *wifiTimeoutTimer; // @synthesize wifiTimeoutTimer=_wifiTimeoutTimer;
@property(nonatomic) _Bool networkViewControllerVisible; // @synthesize networkViewControllerVisible=_networkViewControllerVisible;
@property(nonatomic) _Bool nextButtonTheme; // @synthesize nextButtonTheme=_nextButtonTheme;
@property(retain, nonatomic) UIImage *spacer; // @synthesize spacer=_spacer;
@property(retain, nonatomic) UIImage *blueCheck; // @synthesize blueCheck=_blueCheck;
@property(retain, nonatomic) CBWindow *otherNetworkWindow; // @synthesize otherNetworkWindow=_otherNetworkWindow;
@property(retain, nonatomic) CBWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
- (void)updateCurrentNetworkFromOtherWithSSID:(id)arg1;	// IMP=0x000000010000e3f0
- (void)promptForAnotherNetworkTapped:(id)arg1;	// IMP=0x000000010000e368
- (void)doneTapped:(id)arg1;	// IMP=0x000000010000e2b4
- (void)nextTapped:(id)arg1;	// IMP=0x000000010000e1ac
- (void)autoAdvanceToNextScene;	// IMP=0x000000010000e114
- (void)_stopWiFiTimeroutTimer;	// IMP=0x000000010000e05c
- (void)_wifiTimeoutFired:(id)arg1;	// IMP=0x000000010000dfb8
- (void)_presentWiFiNetworkTimeoutAlert;	// IMP=0x000000010000dd64
- (void)_presentAlternateNetworkViewControllerWithInfo:(id)arg1;	// IMP=0x000000010000dbec
- (void)enableRightBarButtonItem:(_Bool)arg1;	// IMP=0x000000010000dab8
- (void)showDoneButton;	// IMP=0x000000010000d96c
- (void)showNextButton;	// IMP=0x000000010000d810
- (void)showSpinnerBarItem;	// IMP=0x000000010000d6f4
- (void)_enableAndUpdateUI;	// IMP=0x000000010000d63c
- (void)_disableUIAndDisplaySpinnerBarItem;	// IMP=0x000000010000d584
- (void)reevaluateNetworkList;	// IMP=0x000000010000d50c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cfdc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000cf2c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000cf24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cd34
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000cd24
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010000cc40
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000010000ca94
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000010000ca18
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010000ca10
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010000ca08
- (void)reloadNetworkList;	// IMP=0x000000010000c92c
- (void)insertNewNetworks;	// IMP=0x000000010000c514
- (void)deleteLostNetworks;	// IMP=0x000000010000c108
- (void)updateNetworkList;	// IMP=0x000000010000c00c
- (void)_reachabilityChanged:(id)arg1;	// IMP=0x000000010000bd60
- (void)_stopWiFiScan:(id)arg1;	// IMP=0x000000010000bccc
- (void)_startWiFiScan:(id)arg1;	// IMP=0x000000010000bc38
- (void)_presentEncryptedNetworkAssociationScene:(id)arg1;	// IMP=0x000000010000bb40
- (void)_presentOpenNetworkAssociationFailureAlert:(id)arg1;	// IMP=0x000000010000b8bc
- (void)_attemptingToAssociateToOpenNetwork:(id)arg1;	// IMP=0x000000010000b8b0
- (void)_wifiNetworkAssociationCompleted:(id)arg1;	// IMP=0x000000010000b5b0
- (void)_wifiNetworkScanCompleted;	// IMP=0x000000010000b4e8
- (void)_updatePowerState;	// IMP=0x000000010000b424
- (void)_deregisterNotifications;	// IMP=0x000000010000b0f4
- (void)_registerForNotifications;	// IMP=0x000000010000ad64
- (void)dealloc;	// IMP=0x000000010000acc4
- (void)_stopNetworkScan;	// IMP=0x000000010000ac20
- (void)cleanUp;	// IMP=0x000000010000ab9c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000aad8
- (void)_startNetworkScan;	// IMP=0x000000010000aa24
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000a950
- (double)_heightAnchorConstant;	// IMP=0x000000010000a8bc
- (void)setupTableView;	// IMP=0x000000010000a5ec
- (void)setupView;	// IMP=0x000000010000a464
- (void)viewDidLayoutSubviews;	// IMP=0x000000010000a378
- (void)viewDidLoad;	// IMP=0x000000010000a26c
- (id)initWithNextButtonTheme:(_Bool)arg1;	// IMP=0x000000010000a0f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
