/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/BNPresentable.h>

@protocol NCNotificationPresentableViewControllerDelegate, BNPanGestureProxy;
@class NSString, UIViewController, NCNotificationViewController;

@interface NCNotificationPresentableViewController : UIViewController <NCNotificationViewControllerObserving, BNPresentable> {

	BOOL _readyForPanGestureProxy;
	BOOL _canPan;
	BOOL _panPresentation;
	int _bannerAppearState;
	id<NCNotificationPresentableViewControllerDelegate> _delegate;
	NCNotificationViewController* _notificationViewController;
	UIViewController* _contextDefiningViewController;
	id<BNPanGestureProxy> _panGestureProxy;
	long long _presentationState;
	CGRect _initialBannerFrame;

}

@property (setter=_setContextDefiningViewController:,getter=_contextDefiningViewController,nonatomic,retain) UIViewController * contextDefiningViewController;              //@synthesize contextDefiningViewController=_contextDefiningViewController - In the implementation block
@property (assign,setter=_setPanGestureProxy:,getter=_panGestureProxy,nonatomic,__weak) id<BNPanGestureProxy> panGestureProxy;                                              //@synthesize panGestureProxy=_panGestureProxy - In the implementation block
@property (assign,setter=_setReadyForPanGestureProxy:,getter=_isReadyForPanGestureProxy,nonatomic) BOOL readyForPanGestureProxy;                                            //@synthesize readyForPanGestureProxy=_readyForPanGestureProxy - In the implementation block
@property (assign,setter=_setInitialBannerFrame:,getter=_initialBannerFrame,nonatomic) CGRect initialBannerFrame;                                                           //@synthesize initialBannerFrame=_initialBannerFrame - In the implementation block
@property (assign,setter=_setCanPan:,getter=_canPan,nonatomic) BOOL canPan;                                                                                                 //@synthesize canPan=_canPan - In the implementation block
@property (assign,setter=_setPanPresentation:,getter=_isPanPresentation,nonatomic) BOOL panPresentation;                                                                    //@synthesize panPresentation=_panPresentation - In the implementation block
@property (assign,setter=_setPresentationState:,getter=_presentationState,nonatomic) long long presentationState;                                                           //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationPresentableViewControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NCNotificationViewController * notificationViewController;                                                                                   //@synthesize notificationViewController=_notificationViewController - In the implementation block
@property (getter=isDragging,nonatomic,readonly) BOOL dragging; 
@property (nonatomic,readonly) int bannerAppearState;                                                                                                                       //@synthesize bannerAppearState=_bannerAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(unsigned long long)supportedInterfaceOrientations;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)resignFirstResponder;
-(NSString *)requesterIdentifier;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isDragging;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIViewController *)viewController;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg1 ;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)viewDidLoad;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(BOOL)_canPan;
-(void)setDelegate:(id<NCNotificationPresentableViewControllerDelegate>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(id<NCNotificationPresentableViewControllerDelegate>)delegate;
-(NSString *)description;
-(void)_setPresentationState:(long long)arg1 ;
-(long long)_presentationState;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isAppearingOrAppeared;
-(CGSize)preferredContentSizeWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(id)_panGestureProxy;
-(id)_contextDefiningViewController;
-(NCNotificationViewController *)notificationViewController;
-(CGRect)_initialBannerFrame;
-(BOOL)_isPanPresentation;
-(id)presentableDescription;
-(void)_setInitialBannerFrame:(CGRect)arg1 ;
-(void)_setCanPan:(BOOL)arg1 ;
-(void)_setPanPresentation:(BOOL)arg1 ;
-(void)draggingDidBeginWithGestureProxy:(id)arg1 ;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(id)initWithNotificationViewController:(id)arg1 ;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg1 ;
-(int)bannerAppearState;
-(void)_setContextDefiningViewController:(id)arg1 ;
-(void)_setPanGestureProxy:(id)arg1 ;
-(BOOL)_isReadyForPanGestureProxy;
-(void)_setReadyForPanGestureProxy:(BOOL)arg1 ;
@end
