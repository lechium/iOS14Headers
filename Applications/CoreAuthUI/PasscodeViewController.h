//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitionViewController.h"

#import "SBUIPasscodeLockViewDelegate-Protocol.h"

@class LAUIPearlGlyphView, NSDate, NSNumber, NSNumberFormatter, NSString, NSTimer, UIButton, UILabel, UIView;
@protocol SBUIPasscodeLockView;

@interface PasscodeViewController : TransitionViewController <SBUIPasscodeLockViewDelegate>
{
    UIView<SBUIPasscodeLockView> *_passcodeView;	// 8 = 0x8
    UIView *_lockoutView;	// 16 = 0x10
    UILabel *_lockoutTimerLabel;	// 24 = 0x18
    UILabel *_promptLabel;	// 32 = 0x20
    UILabel *_deviceLockedLabel;	// 40 = 0x28
    UIButton *_cancelButton;	// 48 = 0x30
    NSTimer *_updateTimer;	// 56 = 0x38
    NSNumberFormatter *_decimalFormatter;	// 64 = 0x40
    unsigned long long _failures;	// 72 = 0x48
    NSNumber *_failureLimit;	// 80 = 0x50
    NSDate *_blockedUntilDate;	// 88 = 0x58
    _Bool _isLockoutActive;	// 96 = 0x60
    _Bool _firstTime;	// 97 = 0x61
    _Bool _isBlocked;	// 98 = 0x62
    _Bool _whitePasscodeScreen;	// 99 = 0x63
    _Bool _blur;	// 100 = 0x64
    _Bool _legacyTransparency;	// 101 = 0x65
    _Bool _passcodeEntered;	// 102 = 0x66
    _Bool _startedTypingPasscode;	// 103 = 0x67
    LAUIPearlGlyphView *_glyphView;	// 104 = 0x68
    long long _currentInterfaceStyle;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100016a50
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000166b4
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;	// IMP=0x0000000100016130
- (void)_clearTimer;	// IMP=0x00000001000160f4
- (void)_switchToBackoffScreen:(id)arg1;	// IMP=0x0000000100016018
- (id)formattedDecimalStringForNumber:(id)arg1;	// IMP=0x0000000100015f34
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100015e70
- (void)_updateCurrentAppearanceIfNeeded;	// IMP=0x0000000100015dd8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100015d88
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100015cf8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100015c34
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100015b7c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000159e0
- (void)loadView;	// IMP=0x000000010001593c
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;	// IMP=0x0000000100015930
- (void)_processPasscodeEntryResult:(long long)arg1;	// IMP=0x0000000100015464
- (void)passcodeLockViewPasscodeEntered:(id)arg1;	// IMP=0x0000000100014fc8
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;	// IMP=0x0000000100014f58
- (void)_setupLockoutScreen;	// IMP=0x0000000100014790
- (void)_setupPasscodeScreen;	// IMP=0x00000001000144ac
- (void)_setupBackgroundOfView:(id)arg1;	// IMP=0x0000000100014254
- (void)_adjustColors;	// IMP=0x0000000100014050
- (void)_layoutGlyph;	// IMP=0x0000000100013ea0
- (void)_setupView;	// IMP=0x000000010001389c
- (_Bool)isFullScreenController;	// IMP=0x0000000100013894
- (void)didReceiveAuthenticationData;	// IMP=0x00000001000131a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

