/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKitCore/_UITextEffectsSceneObserver.h>
#import <UIKit/UIKeyboardFloatingTransitionControllerDelegate.h>
#import <UIKitCore/_UIInputHostController.h>

@class NSMutableArray, UIInputWindowControllerHosting, UIView, UIInputViewSetNotificationInfo, NSString, NSDate, UIKeyboardFloatingTransitionController, _UIKeyboardPasscodeObscuringInteraction, UIInputViewSet, UIInputViewSetPlacement, UIInputViewController, UIInputViewPlacementTransition, UIKeyboardPathEffectView, NSLayoutConstraint;

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController> {

	NSMutableArray* _animationStyleStack;
	int _suppressedCallbacks;
	int _suppressedNotifications;
	BOOL _isChangingPlacement;
	BOOL _isChangingInputViews;
	BOOL _isSnapshotting;
	int _hiddenCount;
	BOOL _inhibitingHiding;
	unsigned long long _rotationState;
	BOOL _disablePlacementChanges;
	BOOL _suppressUpdateVisibilityConstraints;
	/*^block*/id _pendingTransitionActivity;
	UIInputWindowControllerHosting* _hosting;
	UIView* _preRotationSnapshot;
	CGSize _preRotationInputViewSize;
	CGSize _preRotationInputAssistantViewSize;
	CGSize _preRotationInputAccessoryViewSize;
	CGAffineTransform _preRotationInputViewTransform;
	CGAffineTransform _preRotationInputAssistantViewTransform;
	CGAffineTransform _preRotationInputAccessoryViewTransform;
	UIInputViewSetNotificationInfo* _rotationInfo;
	CGRect _preLayoutHostViewFrame;
	BOOL _didOverridePreLayoutHostViewFrame;
	BOOL _didPostLayoutNotification;
	UIInputViewSetNotificationInfo* _keyboardHeightChangeNotificationInfo;
	BOOL _wasOnScreen;
	NSString* _lastKeyboardID;
	NSDate* _keyboardShowTimestamp;
	BOOL _supportsDockViewController;
	UIKeyboardFloatingTransitionController* _floatingTransitionController;
	_UIKeyboardPasscodeObscuringInteraction* _passcodeObscuringInteraction;
	BOOL _shouldNotifyRemoteKeyboards;
	BOOL _forceAccessoryViewToBottomOfHostView;
	BOOL _dontDismissKeyboardOnScrolling;
	BOOL _dontDismissReachability;
	UIInputViewSet* _inputViewSet;
	UIInputViewSetPlacement* _placement;
	UIInputViewController* _inputViewController;
	UIInputViewController* _inputAssistantViewController;
	UIInputViewController* _inputAccessoryViewController;
	UIInputViewSetPlacement* _postRotationPlacement;
	UIInputViewSet* _postRotationInputViewSet;
	/*^block*/id _postRotationPendingBlock;
	UIInputViewSetNotificationInfo* _postRotationInputViewNotificationInfo;
	UIInputViewSetNotificationInfo* _templateNotificationInfo;
	UIInputViewPlacementTransition* _currentTransition;
	UIKeyboardPathEffectView* _pathEffectView;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _assistantViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;
	UIInputViewSet* _transientInputViewSet;

}

@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                                      //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * assistantViewHeightConstraint;                                  //@synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                                  //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * postRotationPlacement;                                     //@synthesize postRotationPlacement=_postRotationPlacement - In the implementation block
@property (nonatomic,retain) UIInputViewSet * postRotationInputViewSet;                                           //@synthesize postRotationInputViewSet=_postRotationInputViewSet - In the implementation block
@property (nonatomic,copy) id postRotationPendingBlock;                                                           //@synthesize postRotationPendingBlock=_postRotationPendingBlock - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * postRotationInputViewNotificationInfo;              //@synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * templateNotificationInfo;                           //@synthesize templateNotificationInfo=_templateNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSet * transientInputViewSet;                                              //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewPlacementTransition * currentTransition;                                  //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,readonly) UIView * _inputView; 
@property (nonatomic,readonly) UIView * _inputAssistantView; 
@property (nonatomic,readonly) UIView * _inputAccessoryView; 
@property (nonatomic,retain) UIInputViewController * _inputViewController;                                        //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAssistantViewController;                               //@synthesize inputAssistantViewController=_inputAssistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAccessoryViewController;                               //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (nonatomic,readonly) BOOL isChangingInputViews;                                                         //@synthesize isChangingInputViews=_isChangingInputViews - In the implementation block
@property (nonatomic,retain,readonly) UIInputWindowControllerHosting * hosting;                                   //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,readonly) long long keyboardOrientation; 
@property (nonatomic,retain,readonly) UIKeyboardPathEffectView * _pathEffectView;                                 //@synthesize pathEffectView=_pathEffectView - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (nonatomic,readonly) BOOL isTransitionStarted; 
@property (nonatomic,readonly) BOOL isSnapshotting; 
@property (assign,nonatomic) BOOL dontDismissKeyboardOnScrolling;                                                 //@synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling - In the implementation block
@property (assign,nonatomic) BOOL dontDismissReachability;                                                        //@synthesize dontDismissReachability=_dontDismissReachability - In the implementation block
@property (getter=isInputViewsHidden,nonatomic,readonly) BOOL inputViewsHidden; 
@property (nonatomic,readonly) BOOL isTransitioningBetweenKeyboardStates; 
@property (nonatomic,readonly) BOOL isTransitioningBetweenFloatingStates; 
@property (nonatomic,readonly) UIInputViewSetPlacement * expectedPlacement; 
@property (nonatomic,retain) UIInputViewSet * inputViewSet;                                                       //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * placement;                                                 //@synthesize placement=_placement - In the implementation block
@property (nonatomic,retain,readonly) UIView * bottomEdgeView; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placementIgnoringRotation; 
@property (assign,nonatomic) BOOL shouldNotifyRemoteKeyboards;                                                    //@synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards - In the implementation block
@property (assign,nonatomic) BOOL forceAccessoryViewToBottomOfHostView;                                           //@synthesize forceAccessoryViewToBottomOfHostView=_forceAccessoryViewToBottomOfHostView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishSplitTransition;
-(void)didSnapshot;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)isTranslating;
-(void)popAnimationStyle;
-(BOOL)isUndocked;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(void)updateGestureRecognizers;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(UIInputViewController *)_inputViewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)nextAnimationStyle;
-(void)syncToExistingAnimations;
-(void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)prepareForSplitTransition;
-(UIInputViewPlacementTransition *)currentTransition;
-(BOOL)isOnScreen;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didSuspend:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)willResume:(id)arg1 ;
-(id)initialNotificationInfo;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)isTransitioning;
-(UIInputViewSet *)transientInputViewSet;
-(void)viewDidLayoutSubviews;
-(void)updateInputAssistantView:(id)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(void)keyboardHeightChangeDone;
-(UIInputViewSetNotificationInfo *)postRotationInputViewNotificationInfo;
-(void)willSnapshot;
-(BOOL)isDragging;
-(CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(UIView *)_inputAccessoryView;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(BOOL)isOnScreenRotating;
-(BOOL)isSnapshotting;
-(void)setPostRotationInputViewNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(BOOL)isTransitioningBetweenFloatingStates;
-(void)setDontDismissKeyboardOnScrolling:(BOOL)arg1 ;
-(UIInputViewSet *)postRotationInputViewSet;
-(CGRect)transitioningFrame;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_collectTransitionTimeStatistics:(unsigned long long)arg1 withStart:(id)arg2 ;
-(void)updateViewConstraints;
-(void)chainPlacementsIfNecessaryFrom:(id)arg1 toPlacement:(id)arg2 transition:(id)arg3 completion:(/*^block*/id)arg4 ;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)_updatePlacementWithPlacement:(id)arg1 ;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2 ;
-(UIInputViewSetPlacement *)placementIgnoringRotation;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2 ;
-(CGRect)visibleFrame;
-(id)_screenCoordinateSpace;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(long long)overrideUserInterfaceStyle;
-(void)flushPendingActivities;
-(void)registerPowerLogEvent:(BOOL)arg1 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)dealloc;
-(void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1 ;
-(long long)keyboardOrientation;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(UIInputViewSetPlacement *)placement;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(id)inputWindowControllerForController:(id)arg1 ;
-(CGRect)_defaultInitialViewFrame;
-(void)viewDidLoad;
-(CGRect)visibleInputViewFrame;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(void)setForceAccessoryViewToBottomOfHostView:(BOOL)arg1 ;
-(void)_didChangeDeepestUnambiguousResponder;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(BOOL)_useLiveRotation;
-(void)viewWillLayoutSubviews;
-(void)updateKeyboardDockViewVisibility;
-(void)resetBackdropHeight;
-(void)updateInputAssistantViewForInputViewSet:(id)arg1 ;
-(void)setShouldNotifyRemoteKeyboards:(BOOL)arg1 ;
-(void)addPendingActivity:(/*^block*/id)arg1 ;
-(id)transitioningView;
-(void)loadView;
-(void)transferActiveNotificationInfoToInfo:(id)arg1 ;
-(void)setExclusiveTouch:(BOOL)arg1 ;
-(void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2 ;
-(CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(CGRect)arg1 ;
-(void)didEndTransitionWithController:(id)arg1 ;
-(BOOL)isInputViewsHidden;
-(UIKeyboardPathEffectView *)_pathEffectView;
-(void)invalidateInputAccessoryView;
-(id)inputSetContainerView;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(void)invalidateInputAssistantView;
-(CGRect)_visibleInputViewFrame;
-(void)updateViewSizingConstraints;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hostAppSceneBoundsChanged;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(UIView *)_inputView;
-(NSLayoutConstraint *)assistantViewHeightConstraint;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(BOOL)dontDismissReachability;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(CGRect)_boundsForOrientation:(long long)arg1 ;
-(void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3 ;
-(void)setAssistantViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)postRotationPendingBlock;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(BOOL)inhibitRotationAnimation;
-(UIView *)_inputAssistantView;
-(void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(BOOL)isViewLandscape;
-(void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)hostViewWillDisappear;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(UIInputViewSetPlacement *)expectedPlacement;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)forceAccessoryViewToBottomOfHostView;
-(void)postTransitionEndNotification;
-(CGRect)_visibleFrame;
-(void)generateNotificationsForStart:(BOOL)arg1 ;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(UIView *)bottomEdgeView;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(void)_forcePreLayoutHostViewFrame;
-(BOOL)isRotating;
-(void)setHostingNeedsLayout;
-(BOOL)isTransitioningBetweenKeyboardStates;
-(BOOL)_allowsSkippingLayout;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(UIInputViewController *)_inputAccessoryViewController;
-(BOOL)dontDismissKeyboardOnScrolling;
-(void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)validateInputView;
-(id)currentPresentationPlacement;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isSplitting;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)dismissViewController:(id)arg1 ;
-(void)willBeginTransitionWithController:(id)arg1 ;
-(void)setPlacement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(BOOL)isTransitionStarted;
-(void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2 ;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)setDisableUpdateMaskForSecureTextEntry:(BOOL)arg1 ;
-(void)updateKeyboardSizeClass;
-(CGPoint)_centerForOrientation:(long long)arg1 ;
-(UIInputWindowControllerHosting *)hosting;
-(BOOL)shouldBeginTransitionForController:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(id)screenSnapshotOfView:(id)arg1 ;
-(void)setPostRotationPendingBlock:(id)arg1 ;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
-(BOOL)isHostingView:(id)arg1 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)set_inputAssistantViewController:(UIInputViewController *)arg1 ;
-(BOOL)inputViewSetContainsView:(id)arg1 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(UIInputViewController *)_inputAssistantViewController;
-(BOOL)shouldNotifyRemoteKeyboards;
-(unsigned long long)changeToInputViewSet:(id)arg1 ;
-(void)setTransientInputViewSet:(UIInputViewSet *)arg1 ;
-(UIEdgeInsets)_inputViewPadding;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)updateSupportsDockViewController;
-(int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3 ;
-(BOOL)isChangingPlacement;
-(BOOL)hasInputOrAssistantViewsOnScreen;
-(BOOL)_canShowWhileLocked;
-(void)transferPlacementStateToInputWindowController:(id)arg1 ;
-(void)invalidateInputView;
-(BOOL)isChangingInputViews;
-(UIInputViewSet *)inputViewSet;
@end
