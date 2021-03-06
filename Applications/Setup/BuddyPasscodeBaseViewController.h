//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSetupAssistantPasscodeViewController.h>

#import "BFFPasscodeCreationDelegate-Protocol.h"
#import "BuddyPasscodeInputViewDelegate-Protocol.h"

@class BFFPasscodeCreationManager, NSLayoutConstraint, NSObject, NSString, OBAnimationController, UIButton;
@protocol BuddyPasscodeBaseViewControllerDelegate;

@interface BuddyPasscodeBaseViewController : OBSetupAssistantPasscodeViewController <BFFPasscodeCreationDelegate, BuddyPasscodeInputViewDelegate>
{
    _Bool _footerButtonIsSkip;	// 8 = 0x8
    _Bool _showingSpinner;	// 9 = 0x9
    NSObject<BuddyPasscodeBaseViewControllerDelegate> *_passcodeCreationDelegate;	// 16 = 0x10
    BFFPasscodeCreationManager *_passcodeManager;	// 24 = 0x18
    UIButton *_footerButton;	// 32 = 0x20
    NSLayoutConstraint *_contentViewTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_passcodeInputViewBottomConstraint;	// 48 = 0x30
    OBAnimationController *_animationController;	// 56 = 0x38
}

+ (double)_paddcodeInputVerticalPadding;	// IMP=0x00000001000f2be0
+ (id)constrainInputView:(id)arg1 footerButton:(id)arg2 inContentView:(id)arg3;	// IMP=0x00000001000f2844
+ (id)localizedFirstEntryInstructionsForTouchID;	// IMP=0x00000001000f2144
+ (_Bool)allowSkip;	// IMP=0x00000001000f20e0
- (void).cxx_destruct;	// IMP=0x00000001000f6684
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(nonatomic) _Bool footerButtonIsSkip; // @synthesize footerButtonIsSkip=_footerButtonIsSkip;
@property(retain, nonatomic) NSLayoutConstraint *passcodeInputViewBottomConstraint; // @synthesize passcodeInputViewBottomConstraint=_passcodeInputViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTopConstraint; // @synthesize contentViewTopConstraint=_contentViewTopConstraint;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) BFFPasscodeCreationManager *passcodeManager; // @synthesize passcodeManager=_passcodeManager;
@property(nonatomic) __weak NSObject<BuddyPasscodeBaseViewControllerDelegate> *passcodeCreationDelegate; // @synthesize passcodeCreationDelegate=_passcodeCreationDelegate;
- (id)_passcodeOptions;	// IMP=0x00000001000f5bd0
- (id)_createHeaderMenu;	// IMP=0x00000001000f59d0
- (id)_currentPasscodeInputView;	// IMP=0x00000001000f58a8
- (void)_showPasscodeOptionsSheet;	// IMP=0x00000001000f57a0
- (id)passcodeOptionAlertController;	// IMP=0x00000001000f54f4
- (void)_commitPasscodeEntryTypeChange;	// IMP=0x00000001000f5498
- (void)_showSkipPasscodeAlert;	// IMP=0x00000001000f50c8
- (void)_showWeakWarningAlert;	// IMP=0x00000001000f4c5c
- (void)configurePasscodeTypeUsingAnimations:(_Bool)arg1;	// IMP=0x00000001000f4acc
- (id)_firstEntryInstructions;	// IMP=0x00000001000f4988
- (id)instructionsForState:(unsigned long long)arg1;	// IMP=0x00000001000f47f8
- (id)titleForState:(unsigned long long)arg1;	// IMP=0x00000001000f4770
- (void)_finishedWithPasscode:(id)arg1;	// IMP=0x00000001000f4700
- (void)clear;	// IMP=0x00000001000f460c
- (void)tappedFooterButton:(id)arg1;	// IMP=0x00000001000f45e0
- (void)passcodeManager:(id)arg1 didSetPasscodeWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000f44a0
- (void)passcodeManagerWillSetPasscode:(id)arg1;	// IMP=0x00000001000f437c
- (void)passcodeManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000001000f41d8
- (unsigned long long)_onboardingPasscodeAnimationForBFF:(unsigned long long)arg1;	// IMP=0x00000001000f41c0
- (void)_prepareTransitionForPasscodeInput:(id)arg1;	// IMP=0x00000001000f4168
- (void)_animatedPasscodeViewTransitionToState:(unsigned long long)arg1 animation:(unsigned long long)arg2;	// IMP=0x00000001000f3ef0
- (id)_passcodeInputViewForState:(unsigned long long)arg1 updateDetailText:(_Bool)arg2;	// IMP=0x00000001000f3b60
- (id)passcodeInputView;	// IMP=0x00000001000f3a20
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;	// IMP=0x00000001000f38dc
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;	// IMP=0x00000001000f38cc
- (_Bool)_allowSkip;	// IMP=0x00000001000f380c
- (void)_updateNextButtonForPasscode:(id)arg1;	// IMP=0x00000001000f36f4
- (void)_updateNextButton;	// IMP=0x00000001000f3680
- (void)nextButtonPressed;	// IMP=0x00000001000f35ec
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000f34b4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000f3444
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000f3324
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000f3274
- (void)viewDidLoad;	// IMP=0x00000001000f2c98
- (void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000f256c
- (void)_setupFirstEntry;	// IMP=0x00000001000f2284
- (void)dealloc;	// IMP=0x00000001000f2214
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x00000001000f2098
- (id)init;	// IMP=0x00000001000f2078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

