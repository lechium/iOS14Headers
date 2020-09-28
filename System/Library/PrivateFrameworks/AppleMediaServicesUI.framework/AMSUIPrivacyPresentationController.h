/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, NSString;

@interface AMSUIPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)dimmingView;
-(void)containerViewDidLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(long long)adaptivePresentationStyle;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)_prepareDimmingViewIfNecessary;
-(BOOL)shouldRemovePresentersView;
@end
