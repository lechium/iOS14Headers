//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface STRestrictionsPINNavigationController : UINavigationController
{
    _Bool _prefersStatusBarHiddenOverride;	// 8 = 0x8
    unsigned long long _internalSupportedOrientations;	// 16 = 0x10
    struct CGRect _lastKnownSuperviewFrame;	// 24 = 0x18
}

+ (_Bool)st_isPad;	// IMP=0x0000000100006098
+ (_Bool)st_shouldAnimate;	// IMP=0x0000000100005e20
@property _Bool prefersStatusBarHiddenOverride; // @synthesize prefersStatusBarHiddenOverride=_prefersStatusBarHiddenOverride;
@property struct CGRect lastKnownSuperviewFrame; // @synthesize lastKnownSuperviewFrame=_lastKnownSuperviewFrame;
@property unsigned long long internalSupportedOrientations; // @synthesize internalSupportedOrientations=_internalSupportedOrientations;
- (void)_freezeSupportedOrientations;	// IMP=0x00000001000062f0
- (void)_adjustToSuperviewFrame;	// IMP=0x0000000100006120
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000604c
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100005ff4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100005e8c
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100005e40

@end
