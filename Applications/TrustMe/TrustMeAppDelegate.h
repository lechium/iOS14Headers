//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSRemoteAlertHandleObserver-Protocol.h"
#import "TrustCertificateViewControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class CPDistributedMessagingCenter, CPDistributedMessagingDelayedReplyContext, NSMutableArray, NSString, NSTimer, SBSRemoteAlertHandle, TrustCertificateViewController, TrustMeRotatingViewController, UIWindow;

@interface TrustMeAppDelegate : NSObject <SBSRemoteAlertHandleObserver, TrustCertificateViewControllerDelegate, UIApplicationDelegate>
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    _Bool _remoteAlertControllerIsDismissing;	// 16 = 0x10
    TrustCertificateViewController *_trustController;	// 24 = 0x18
    CPDistributedMessagingCenter *_center;	// 32 = 0x20
    CPDistributedMessagingDelayedReplyContext *_replyContext;	// 40 = 0x28
    NSMutableArray *_queuedMessages;	// 48 = 0x30
    NSMutableArray *_queuedReplyContexts;	// 56 = 0x38
    NSTimer *_killTimer;	// 64 = 0x40
    TrustMeRotatingViewController *_currentRemoteAlertController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100005424
@property(nonatomic) __weak TrustMeRotatingViewController *currentRemoteAlertController; // @synthesize currentRemoteAlertController=_currentRemoteAlertController;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;	// IMP=0x00000001000052bc
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100005224
- (id)trustControllerToBePresentedByRemoteAlertViewController;	// IMP=0x0000000100005208
- (void)homeButtonWasPressed;	// IMP=0x00000001000051c4
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000010000505c
- (void)_startCenter;	// IMP=0x0000000100004fac
- (void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;	// IMP=0x0000000100004ce4
- (void)_queueMessage:(id)arg1 withReplyContext:(id)arg2;	// IMP=0x0000000100004bcc
- (void)_presentNextQueuedMessage;	// IMP=0x0000000100004ad0
- (void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2;	// IMP=0x0000000100004a28
- (void)_sheetControllerDidFinishDismissing;	// IMP=0x00000001000049a4
- (void)_dismissRemoteAlertController;	// IMP=0x0000000100004920
- (void)_presentRemoteAlertWithInfo:(id)arg1 replyContext:(id)arg2;	// IMP=0x00000001000043b0
- (void)_sendResponse:(int)arg1;	// IMP=0x00000001000042c8
- (void)_killTimerFired;	// IMP=0x00000001000041f0
- (void)_clearTimer;	// IMP=0x00000001000041a4
- (void)_scheduleTimer;	// IMP=0x0000000100004128
- (void)dealloc;	// IMP=0x000000010000405c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

