/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOUI.framework/AppSSOUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SOUIAuthorizationViewControllerDelegate;
@class _UIRemoteViewController, UIViewController, NSString;

@interface SOUIAuthorizationViewController : UIViewController <_UIRemoteViewControllerContaining, UIGestureRecognizerDelegate> {

	UIViewController* _extensionViewController;
	id<SOUIAuthorizationViewControllerDelegate> _delegate;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;                                               //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (__weak) id<SOUIAuthorizationViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancel;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithExtensionViewController:(id)arg1 hints:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
-(id)dismissCompletionHandler;
-(void)setDelegate:(id<SOUIAuthorizationViewControllerDelegate>)arg1 ;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id<SOUIAuthorizationViewControllerDelegate>)delegate;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end
