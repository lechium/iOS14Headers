/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <libobjc.A.dylib/WFCompactPlatterContentContainer.h>

@protocol UIViewControllerTransitionCoordinator;
@class NSString;

@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer> {

	long long _transitionState;
	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;

}

@property (assign,nonatomic) long long transitionState;                                                                 //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> activeTransitionCoordinator;              //@synthesize activeTransitionCoordinator=_activeTransitionCoordinator - In the implementation block
@property (nonatomic,readonly) UIViewController*<WFCompactPlatterPresentation> presentedViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)usableFrameForPresentingInContainerViewOfSize:(CGSize)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)transitionState;
-(void)setTransitionState:(long long)arg1 ;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(void)platterPresentationDidInvalidateSize:(id)arg1 ;
-(double)maximumExpectedHeightForPlatterPresentation:(id)arg1 ;
-(CGRect)frameOfDismissedViewInContainerView;
-(void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(BOOL)arg1 ;
-(void)keyboardWillChange;
-(CGRect)presentedViewFrameInContainerViewOfSize:(CGSize)arg1 withSizeCalculation:(BOOL)arg2 ;
-(id<UIViewControllerTransitionCoordinator>)activeTransitionCoordinator;
-(void)setActiveTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end
