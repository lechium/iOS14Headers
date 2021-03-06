//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupPairingViewController.h"

#import "HUSetupCodeFieldDelegate-Protocol.h"

@class HUSetupCodeField, NSLayoutConstraint, NSObject, NSString, UIButton, UIScrollView, UIView;
@protocol HSManualEntryViewControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HSSetupManualEntryViewController : HSSetupPairingViewController <HUSetupCodeFieldDelegate>
{
    UIButton *_cameraButton;	// 8 = 0x8
    UIScrollView *_statusContainerView;	// 16 = 0x10
    unsigned long long _manualEntryState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateManualEntryStateSerialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_updateManualEntryStateSemaphore;	// 40 = 0x28
    HUSetupCodeField *_codeField;	// 48 = 0x30
    UIButton *_actionButton;	// 56 = 0x38
    UIView *_blurView;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    NSLayoutConstraint *_actionButtonBottomConstraint;	// 80 = 0x50
    id <HSManualEntryViewControllerDelegate> _manualEntryViewControllerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010002ea24
@property __weak id <HSManualEntryViewControllerDelegate> manualEntryViewControllerDelegate; // @synthesize manualEntryViewControllerDelegate=_manualEntryViewControllerDelegate;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonBottomConstraint; // @synthesize actionButtonBottomConstraint=_actionButtonBottomConstraint;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) HUSetupCodeField *codeField; // @synthesize codeField=_codeField;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateManualEntryStateSemaphore; // @synthesize updateManualEntryStateSemaphore=_updateManualEntryStateSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateManualEntryStateSerialQueue; // @synthesize updateManualEntryStateSerialQueue=_updateManualEntryStateSerialQueue;
@property(nonatomic) unsigned long long manualEntryState; // @synthesize manualEntryState=_manualEntryState;
@property(retain, nonatomic) UIScrollView *statusContainerView; // @synthesize statusContainerView=_statusContainerView;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void)setupCodeFieldDidReturn:(id)arg1;	// IMP=0x000000010002e880
- (void)setupCodeFieldDidBecomeIncomplete:(id)arg1;	// IMP=0x000000010002e840
- (void)setupCodeFieldDidBecomeComplete:(id)arg1;	// IMP=0x000000010002e738
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x000000010002e0d8
- (void)showCameraScanUI:(id)arg1;	// IMP=0x000000010002dfe4
- (void)retryPairing:(id)arg1;	// IMP=0x000000010002df9c
- (void)reenterCode:(id)arg1;	// IMP=0x000000010002de7c
- (void)pair:(id)arg1;	// IMP=0x000000010002dd5c
- (void)cancel:(id)arg1;	// IMP=0x000000010002dd14
- (_Bool)statusContainerViewRequiresScrolling;	// IMP=0x000000010002dc08
- (double)_actionButtonBottomConstraintConstantForKeyboardHeight:(double)arg1;	// IMP=0x000000010002dbd8
- (double)_containerVerticalPadding;	// IMP=0x000000010002dbb4
- (void)_updateManualEntryState:(unsigned long long)arg1;	// IMP=0x000000010002d1b0
- (void)handleSetupFailedForDiscoveredAccessory:(id)arg1;	// IMP=0x000000010002d0d8
- (void)_configureCameraButton;	// IMP=0x000000010002cfa0
- (void)_configureCloseButton;	// IMP=0x000000010002ce68
- (void)_configureRetryButton;	// IMP=0x000000010002cd30
- (void)_configureEnterCodeAgainButton;	// IMP=0x000000010002cbf8
- (void)_prepareConstraints;	// IMP=0x000000010002b624
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000010002b450
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000010002b094
- (void)_bringUpCodeField;	// IMP=0x000000010002b054
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002ae6c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002ad54
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002aa9c
- (void)viewDidLoad;	// IMP=0x000000010002a3f4
- (id)init;	// IMP=0x000000010002a220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

