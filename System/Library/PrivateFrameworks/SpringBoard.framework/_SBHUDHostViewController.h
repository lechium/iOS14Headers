/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol _SBHUDHostViewControllerDelegate;
@class NSMutableArray, NSMutableSet, SBHUDController, NSString;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate> {

	NSMutableArray* _activeTransitionContexts;
	NSMutableSet* _presentedHUDs;
	NSMutableSet* _presentingHUDs;
	NSMutableSet* _presentingHUDsTransitionContexts;
	NSMutableSet* _dismissingHUDsTransitionContexts;
	SBHUDController* _HUDController;
	id<_SBHUDHostViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(void)transitionDidFinish:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSString *)description;
-(BOOL)_canShowWhileLocked;
-(id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2 ;
-(void)_executePresentNewHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_executeDismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_executeViewControllerTransitionContext:(id)arg1 ;
@end
