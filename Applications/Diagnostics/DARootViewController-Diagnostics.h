//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DARootViewController.h"

#import "DADiagnosticsViewServiceInterface-Protocol.h"

@interface DARootViewController (Diagnostics) <DADiagnosticsViewServiceInterface>
+ (id)_exportedInterface;	// IMP=0x0000000100039c6c
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100039c54
+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100039c40
- (void)remoteViewControllerDidSetSelectableSerialNumbers:(id)arg1;	// IMP=0x000000010003a6e0
- (void)remoteViewControllerDidSetRequiredSerialNumbers:(id)arg1;	// IMP=0x000000010003a330
- (void)remoteViewControllerDidSetSessionToken:(id)arg1;	// IMP=0x0000000100039d60
- (void)remoteViewControllerDidDisappear;	// IMP=0x0000000100039d50
- (void)_hostApplicationDidEnterBackground;	// IMP=0x0000000100039c30
- (void)_hostApplicationWillEnterForeground;	// IMP=0x0000000100039c04
- (void)_willAppearInRemoteViewController;	// IMP=0x0000000100039590
@end

