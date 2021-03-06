//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBSetupAssistantHollowController.h>

#import "BFFFlowItem-Protocol.h"

@class CBClient, NSString, OBAnimationController;
@protocol BFFFlowItemDelegate;

@interface BuddyHarmonyController : OBSetupAssistantHollowController <BFFFlowItem>
{
    CBClient *_brightnessClient;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    OBAnimationController *_animationController;	// 24 = 0x18
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010006229c
+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100062120
- (void).cxx_destruct;	// IMP=0x0000000100062bf8
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)continuePressed;	// IMP=0x0000000100062b10
- (void)buttonPressLifted;	// IMP=0x0000000100062b00
- (void)buttonPressedDown;	// IMP=0x0000000100062af0
- (void)_toggleSelection:(_Bool)arg1;	// IMP=0x0000000100062a98
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100062a44
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100062990
- (void)viewDidLoad;	// IMP=0x0000000100062820
- (void)loadView;	// IMP=0x00000001000625e0
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100062454
- (id)init;	// IMP=0x00000001000622ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

