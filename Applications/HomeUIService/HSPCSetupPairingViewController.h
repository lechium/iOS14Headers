//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

#import "HFSetupPairingObserver-Protocol.h"
#import "HFSetupPairingPopupDelegate-Protocol.h"
#import "HSPairingSetupStep-Protocol.h"

@class HSPairingStatusViewController, HSProxCardCoordinator, NAFuture, NSString, UINavigationController, UIView, UIViewController;
@protocol HFSetupPairingController, HFSetupPairingPopup, HSSetupStepDelegate;

@interface HSPCSetupPairingViewController : PRXCardContentViewController <HSPairingSetupStep, HFSetupPairingPopupDelegate, HFSetupPairingObserver>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    NAFuture *_readyToDisplayFuture;	// 16 = 0x10
    HSProxCardCoordinator *_coordinator;	// 24 = 0x18
    id <HFSetupPairingController> _pairingController;	// 32 = 0x20
    HSPairingStatusViewController *_statusViewController;	// 40 = 0x28
    UIViewController<HFSetupPairingPopup> *_pairingPopup;	// 48 = 0x30
    unsigned long long _contentMode;	// 56 = 0x38
    UINavigationController *_pairingPopupNavigationController;	// 64 = 0x40
    UIView *_pairingView;	// 72 = 0x48
    UIView *_containerView;	// 80 = 0x50
    struct UIEdgeInsets _contentInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010000742c
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *pairingView; // @synthesize pairingView=_pairingView;
@property(retain, nonatomic) UINavigationController *pairingPopupNavigationController; // @synthesize pairingPopupNavigationController=_pairingPopupNavigationController;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) UIViewController<HFSetupPairingPopup> *pairingPopup; // @synthesize pairingPopup=_pairingPopup;
@property(readonly, nonatomic) HSPairingStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture; // @synthesize readyToDisplayFuture=_readyToDisplayFuture;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentAspectRatio;	// IMP=0x00000001000072e4
@property(readonly, nonatomic) _Bool isViewVisible;
@property(readonly, nonatomic) long long setupState;
- (void)setupDidFailWithError:(id)arg1 forDiscoveredAccessory:(id)arg2;	// IMP=0x00000001000071c0
- (void)didUpdatePairingController:(id)arg1;	// IMP=0x0000000100006fa8
- (void)pairingPopupDidCancel:(id)arg1;	// IMP=0x0000000100006cbc
- (void)pairingPopupDidFinish:(id)arg1;	// IMP=0x00000001000065ac
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x0000000100006518
- (void)handleSetupFailedForDiscoveredAccessory:(id)arg1;	// IMP=0x0000000100006484
- (id)dismissPairingPopup;	// IMP=0x000000010000623c
- (id)presentPairingPopup:(id)arg1;	// IMP=0x0000000100005e34
@property(readonly, nonatomic) _Bool canPresentPairingPopup;
- (id)initWithCoordinator:(id)arg1 mode:(unsigned long long)arg2 nfcStartFuture:(id)arg3 title:(id)arg4 details:(id)arg5 pairingView:(id)arg6 showTrayButtons:(_Bool)arg7;	// IMP=0x0000000100005100

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

