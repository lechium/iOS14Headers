//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "OOPAWebViewControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSDictionary, NSString, NSXPCConnection, OOPAWebViewController, UINavigationController, UIWindow;

@interface OOPADAppDelegate : UIResponder <UIApplicationDelegate, OOPAWebViewControllerDelegate>
{
    NSXPCConnection *_connectionToDialogManager;	// 8 = 0x8
    OOPAWebViewController *_webViewController;	// 16 = 0x10
    UINavigationController *_navViewController;	// 24 = 0x18
    _Bool _cachedSuccess;	// 32 = 0x20
    NSDictionary *_cachedResponse;	// 40 = 0x28
    UIWindow *_window;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000049e0
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_disconnectFromAuthenticationDialogManager;	// IMP=0x0000000100004980
- (void)_connectToAuthenticationDialogManager;	// IMP=0x00000001000047dc
- (id)_dialogManager;	// IMP=0x00000001000047c4
- (void)webViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 response:(id)arg3;	// IMP=0x0000000100004664
- (_Bool)canShowAlerts;	// IMP=0x000000010000465c
- (void)_remoteSheetDidEnd;	// IMP=0x00000001000045d8
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100004178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

