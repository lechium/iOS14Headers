//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyWelcomeController.h"

@class OBAnimationController;

@interface BuddyAutoUpdateController : BuddyWelcomeController
{
    OBAnimationController *_animationController;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100067d94
+ (id)cloudConfigSkipKey;	// IMP=0x0000000100067d84
- (void).cxx_destruct;	// IMP=0x000000010006808c
@property(retain, nonatomic) OBAnimationController *animationController; // @synthesize animationController=_animationController;
- (void)controllerWasPopped;	// IMP=0x0000000100068000
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100067e38
- (void)_updateManuallyPressed:(id)arg1;	// IMP=0x0000000100067ce4
- (void)_continuePressed:(id)arg1;	// IMP=0x0000000100067c44
- (void)_enableAutoUpdates:(_Bool)arg1;	// IMP=0x0000000100067b94
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100067b24
- (void)viewDidLoad;	// IMP=0x0000000100067aa4
- (id)init;	// IMP=0x000000010006785c

@end
