//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@interface DNDBuddyContainer : SBUIRemoteAlertServiceViewController
{
    _Bool _initialPresentation;	// 8 = 0x8
}

@property(nonatomic) _Bool initialPresentation; // @synthesize initialPresentation=_initialPresentation;
- (void)_dismissBuddyAnimated:(_Bool)arg1;	// IMP=0x00000001000033a8
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100003380
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000336c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003124
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000311c
- (_Bool)shouldAutorotate;	// IMP=0x0000000100003114
- (void)viewDidLoad;	// IMP=0x0000000100002f40

@end
