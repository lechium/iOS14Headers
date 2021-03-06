//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyWelcomeController.h"

@interface BuddyAppleIDKeychainSyncPage : BuddyWelcomeController
{
    _Bool _circleExists;	// 8 = 0x8
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000df91c
+ (_Bool)_shouldShowKeychainSync;	// IMP=0x00000001000de8e0
@property(nonatomic) _Bool circleExists; // @synthesize circleExists=_circleExists;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000df924
- (void)skipKeychainApproval:(id)arg1;	// IMP=0x00000001000df604
- (void)setUpLaterTapped:(id)arg1;	// IMP=0x00000001000df550
- (void)enableTapped:(id)arg1;	// IMP=0x00000001000df4a0
- (void)_startEnableFlow;	// IMP=0x00000001000df250
- (void)_showPeerApprovalAcknowledgement;	// IMP=0x00000001000defe4
- (void)_controllerDoneWasSkipped:(_Bool)arg1;	// IMP=0x00000001000dedc8
- (_Bool)_loadOptions;	// IMP=0x00000001000de484
- (void)_privacyLinkTapped:(id)arg1;	// IMP=0x00000001000de418
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000de398
- (void)viewDidLoad;	// IMP=0x00000001000de244
- (id)init;	// IMP=0x00000001000de0ac

@end

