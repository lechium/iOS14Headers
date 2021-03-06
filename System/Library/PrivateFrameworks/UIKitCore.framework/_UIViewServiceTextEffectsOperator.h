/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHostedWindowDelegate.h>
#import <UIKitCore/_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h>
#import <UIKitCore/_UIViewServiceDeputy.h>
#import <UIKitCore/_UIViewServiceDeputyRotationDelegate.h>

@class _UIAsyncInvocation, _UIHostedWindow, NSArray, NSString;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {

	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;
	id _remoteViewControllerProxy;
	BOOL _wasInvalidated;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	_UIHostedWindow* _hostedWindow;
	CGPoint _windowOffset;
	UIEdgeInsets _safeAreaInsets;
	CGSize _sceneSize;
	BOOL _canRestoreInputViews;
	BOOL _isRestoringInputViews;
	BOOL _didResignForDisappear;
	BOOL _localVCDisablesAutomaticBehaviors;
	NSArray* _allowedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 ;
+(BOOL)_shouldAddServiceOperator;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(int)__automatic_invalidation_logic;
-(void)_resetSceneSize;
-(BOOL)_tryRetain;
-(id)invalidate;
-(id)autorelease;
-(void)__setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(id)_queue;
-(void)forceSyncToStatusBarOrientation;
-(oneway void)release;
-(void)__hostViewWillDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)__setSceneSize:(CGSize)arg1 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)hostedWindow:(id)arg1 didSetResponderTargetForCalloutBar:(id)arg2 ;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)retainCount;
-(void)__setHostAllowedNotifications:(id)arg1 ;
-(void)__hostViewWillAppear:(BOOL)arg1 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)__createHostedTextEffectsWithReplyHandler:(/*^block*/id)arg1 ;
-(void)performOnRelevantWindows:(/*^block*/id)arg1 ;
-(void)_restoreInputViews;
-(void)__setWindowOffset:(CGPoint)arg1 ;
-(void)__hostDidEnterBackground;
-(BOOL)_isDeallocating;
-(id)retain;
-(void)makeHostWindowKey;
-(void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2 ;
-(void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2 ;
-(void)__hostWillEnterForeground;
-(void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2 ;
-(void)_reloadSafeInsets;
-(void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_viewServiceHostWillEnterForeground:(id)arg1 ;
@end

