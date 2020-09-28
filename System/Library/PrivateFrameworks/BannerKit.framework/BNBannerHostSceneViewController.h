/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/BNBannerHostSceneViewControllerViewDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BNBannerSourceListenerPresentable.h>
#import <libobjc.A.dylib/BNPresentableObservable.h>

@protocol UIScenePresenter;
@class FBProcess, FBScene, NSUUID, NSHashTable, NSMutableArray, BSAnimationSettings, NSString, UIViewController;

@interface BNBannerHostSceneViewController : UIViewController <FBSceneObserver, BNBannerHostSceneViewControllerViewDelegate, BSInvalidatable, BNBannerSourceListenerPresentable, BNPresentableObservable> {

	id<UIScenePresenter> _scenePresenter;
	UIEdgeInsets _bannerContentOutsets;
	NSHashTable* _observers;
	NSMutableArray* _activeSizeTransitionActions;
	BSAnimationSettings* _bannerSizeTransitionAnimationSettings;
	int _bannerAppearState;
	NSString* _requesterIdentifier;
	NSString* _requestIdentifier;
	long long _presentableType;
	NSUUID* _uniqueIdentifier;
	FBScene* _scene;
	/*^block*/id _readyCompletion;

}

@property (nonatomic,readonly) FBScene * scene;                                                                      //@synthesize scene=_scene - In the implementation block
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (nonatomic,copy) id readyCompletion;                                                                       //@synthesize readyCompletion=_readyCompletion - In the implementation block
@property (nonatomic,readonly) int bannerAppearState;                                                                //@synthesize bannerAppearState=_bannerAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBProcess * clientProcess; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isContentHosted,nonatomic,readonly) BOOL contentHosted; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier;                                                  //@synthesize requesterIdentifier=_requesterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType;                                                            //@synthesize presentableType=_presentableType - In the implementation block
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(NSString *)requestIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)requesterIdentifier;
-(FBProcess *)clientProcess;
-(void)invalidate;
-(void)userInteractionDidEndForBannerForPresentable:(id)arg1 ;
-(BOOL)isReady;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)viewDidLoad;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)userInteractionWillBeginForBannerForPresentable:(id)arg1 ;
-(void)loadView;
-(NSUUID *)uniqueIdentifier;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(FBScene *)scene;
-(BOOL)_canShowWhileLocked;
-(long long)presentableType;
-(BOOL)isDraggingDismissalEnabled;
-(BOOL)isDraggingInteractionEnabled;
-(BOOL)isTouchOutsideDismissalEnabled;
-(int)bannerAppearState;
-(void)addPresentableObserver:(id)arg1 ;
-(void)removePresentableObserver:(id)arg1 ;
-(UIEdgeInsets)bannerContentOutsets;
-(id)bannerSizeTransitionAnimationSettings;
-(BOOL)isContentHosted;
-(id)initWithWithSpecification:(id)arg1 scene:(id)arg2 ;
-(void)setReadyCompletion:(id)arg1 ;
-(void)_updatePreferredContentSizeWithScene:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateBannerContentOutsetsWithScene:(id)arg1 ;
-(void)_tearDownSceneInfrastructure;
-(void)_makeReadyIfPossibleWithScene:(id)arg1 ;
-(void)_tearDownScenePresenterIfNecessary;
-(/*^block*/id)_tearDownSceneBlock:(id)arg1 ;
-(void)_tearDownSceneIfNecessary;
-(void)bannerHostSceneViewControllerViewDidChangeSize:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForBannerHostSceneViewControllerView:(id)arg1 ;
-(id)readyCompletion;
@end
