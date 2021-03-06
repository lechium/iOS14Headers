/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/SSDittoHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SSActiveInterfaceOrientationObserverDelegate.h>

@protocol OS_dispatch_queue, SSScreenshotsWindowDelegate;
@class SSActiveInterfaceOrientationObserver, SSScreenshotsWindowRootViewController, NSObject;

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate> {

	SSActiveInterfaceOrientationObserver* _activeInterfaceOrientationObserver;
	SSScreenshotsWindowRootViewController* _root;
	long long _lastActiveInterfaceOrientation;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _lockNotificationToken;
	int _backlightNotificationToken;
	id<SSScreenshotsWindowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenshotsWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_isSecure;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_deviceBacklightChanged:(unsigned long long)arg1 ;
-(void)activateRemoteViewControllerIfAppropriate;
-(void)dealloc;
-(void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void)_dismiss;
-(id)init;
-(void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3 ;
-(void)setDelegate:(id<SSScreenshotsWindowDelegate>)arg1 ;
-(void)_deviceLockStateChanged:(unsigned long long)arg1 ;
-(id)_hostViewControllerIfExists;
-(id<SSScreenshotsWindowDelegate>)delegate;
-(BOOL)_shouldControlAutorotation;
-(void)_prepareRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
@end

