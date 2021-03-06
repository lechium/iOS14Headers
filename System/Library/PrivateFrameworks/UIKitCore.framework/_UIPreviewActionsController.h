/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPlatterMenuDynamicsControllerDelegate.h>

@protocol _UIPreviewActionsControllerDelegate;
@class UIView, UIImageView, UIViewController, _UIPlatterMenuDynamicsController, _UIPreviewActionSheetView, NSArray, UIPreviewAction, _UIPreviewQuickActionView, _UIStatesFeedbackGenerator, NSString;

@interface _UIPreviewActionsController : NSObject <_UIPlatterMenuDynamicsControllerDelegate> {

	BOOL _hasBegun;
	UIView* _containerView;
	UIView* _platterView;
	UIView* _affordanceView;
	UIImageView* _affordanceImageView;
	UIViewController* _presentedViewController;
	id<_UIPreviewActionsControllerDelegate> _delegate;
	_UIPlatterMenuDynamicsController* _platterDynamicsController;
	_UIPreviewActionSheetView* _previewActionsView;
	NSArray* _currentPreviewActionItems;
	UIPreviewAction* _leadingPreviewAction;
	UIPreviewAction* _trailingPreviewAction;
	_UIPreviewQuickActionView* _leadingPreviewActionView;
	_UIPreviewQuickActionView* _trailingPreviewActionView;
	_UIStatesFeedbackGenerator* _swipeFeedbackGenerator;
	CGSize _totalPanningTranslation;
	CGPoint _lastPanningLocation;

}

@property (nonatomic,retain) UIView * containerView;                                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIView * affordanceView;                                                   //@synthesize affordanceView=_affordanceView - In the implementation block
@property (nonatomic,retain) UIImageView * affordanceImageView;                                         //@synthesize affordanceImageView=_affordanceImageView - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;                                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewActionsControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasBegun;                                                             //@synthesize hasBegun=_hasBegun - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuDynamicsController * platterDynamicsController;              //@synthesize platterDynamicsController=_platterDynamicsController - In the implementation block
@property (nonatomic,retain) _UIPreviewActionSheetView * previewActionsView;                            //@synthesize previewActionsView=_previewActionsView - In the implementation block
@property (nonatomic,copy) NSArray * currentPreviewActionItems;                                         //@synthesize currentPreviewActionItems=_currentPreviewActionItems - In the implementation block
@property (nonatomic,retain) UIPreviewAction * leadingPreviewAction;                                    //@synthesize leadingPreviewAction=_leadingPreviewAction - In the implementation block
@property (nonatomic,retain) UIPreviewAction * trailingPreviewAction;                                   //@synthesize trailingPreviewAction=_trailingPreviewAction - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * leadingPreviewActionView;                      //@synthesize leadingPreviewActionView=_leadingPreviewActionView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * trailingPreviewActionView;                     //@synthesize trailingPreviewActionView=_trailingPreviewActionView - In the implementation block
@property (assign,nonatomic) CGPoint lastPanningLocation;                                               //@synthesize lastPanningLocation=_lastPanningLocation - In the implementation block
@property (assign,nonatomic) CGSize totalPanningTranslation;                                            //@synthesize totalPanningTranslation=_totalPanningTranslation - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * swipeFeedbackGenerator;                       //@synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator - In the implementation block
@property (nonatomic,readonly) CGRect frameForActionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionsControllerWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4 ;
-(void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(BOOL)arg1 finalSelectionState:(BOOL)arg2 ;
-(UIView *)containerView;
-(UIView *)platterView;
-(void)dealloc;
-(BOOL)hasBegun;
-(UIPreviewAction *)trailingPreviewAction;
-(void)setContainerView:(UIView *)arg1 ;
-(void)_configureFeedbackGenerator;
-(void)_activateFeedbackIfNeeded;
-(void)_deactivateFeedbackIfNeeded;
-(CGPoint)centerForPlatterWithMenuViewDismissed;
-(CGPoint)centerForMenuDismissed;
-(UIPreviewAction *)leadingPreviewAction;
-(CGPoint)centerForPlatterWithMenuViewPresented;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1 ;
-(BOOL)platterPanned;
-(CGPoint)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1 ;
-(void)setHasBegun:(BOOL)arg1 ;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(CGPoint)initialCenterForLeadingSwipeActionView;
-(CGPoint)initialCenterForTrailingSwipeActionView;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3 ;
-(void)setDelegate:(id<_UIPreviewActionsControllerDelegate>)arg1 ;
-(UIView *)affordanceView;
-(void)setLeadingSwipeActionViewSelected:(BOOL)arg1 ;
-(void)setTrailingSwipeActionViewSelected:(BOOL)arg1 ;
-(_UIStatesFeedbackGenerator *)swipeFeedbackGenerator;
-(void)setPreviewActionsView:(_UIPreviewActionSheetView *)arg1 ;
-(_UIPreviewActionSheetView *)previewActionsView;
-(void)_actionsControllerCommonInit;
-(NSArray *)currentPreviewActionItems;
-(void)_memoizePreviewActionViews;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1 ;
-(void)_configurePlatterDynamicsController;
-(void)setAffordanceImageView:(UIImageView *)arg1 ;
-(void)setAffordanceView:(UIView *)arg1 ;
-(BOOL)_hasPreviewSwipeActions;
-(void)setLastPanningLocation:(CGPoint)arg1 ;
-(void)setPlatterDynamicsController:(_UIPlatterMenuDynamicsController *)arg1 ;
-(void)setTotalPanningTranslation:(CGSize)arg1 ;
-(id)initWithContainerView:(id)arg1 platterView:(id)arg2 presentedViewController:(id)arg3 delegate:(id)arg4 ;
-(CGPoint)lastPanningLocation;
-(BOOL)_hasSelectedSwipeAction;
-(double)_platterOffsetDistance;
-(void)_dismissForSelectedSwipeAction;
-(void)_hideChromeAndSetAffordanceHidden:(BOOL)arg1 ;
-(void)_setAffordanceAlpha:(double)arg1 withDuration:(double)arg2 hideOnCompletion:(BOOL)arg3 ;
-(BOOL)_isSwipeActionVisible;
-(_UIPreviewQuickActionView *)leadingPreviewActionView;
-(CGRect)_initialPlatterFrame;
-(_UIPreviewQuickActionView *)trailingPreviewActionView;
-(void)_updateAffordanceIfNecessary;
-(CGPoint)_centerForMenuDismissedForActionSheet:(id)arg1 ;
-(double)_quickActionSelectionOffset;
-(void)_presentSubactionsForActionGroup:(id)arg1 ;
-(_UIPlatterMenuDynamicsController *)platterDynamicsController;
-(double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1 ;
-(void)_disablePlatterController;
-(BOOL)_previewActionsSheetIsVisible;
-(BOOL)_platterIsInInitialPositionMostly;
-(CGPoint)_centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1 ;
-(CGPoint)_centerForMenuPresentedForActionSheet:(id)arg1 ;
-(void)_updateSwipeActionsState;
-(CGPoint)_applyLayoutAdjustmentsForManagedViewWithPosition:(CGPoint)arg1 ;
-(void)beginPanningAtLocation:(CGPoint)arg1 ;
-(void)updatePanningLocation:(CGPoint)arg1 ;
-(CGRect)frameForActionView;
-(void)endPanningAtLocation:(CGPoint)arg1 ;
-(void)dismissPreviewActionsWithCompletion:(/*^block*/id)arg1 ;
-(void)flashScrollAffordance;
-(CGSize)totalPanningTranslation;
-(UIImageView *)affordanceImageView;
-(void)setCurrentPreviewActionItems:(NSArray *)arg1 ;
-(void)setLeadingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setTrailingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setLeadingPreviewActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setTrailingPreviewActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(id<_UIPreviewActionsControllerDelegate>)delegate;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setSwipeFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(void)_dismissWithAction:(id)arg1 ;
-(BOOL)_shouldDismiss;
-(UIViewController *)presentedViewController;
@end

