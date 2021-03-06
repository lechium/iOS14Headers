/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@class NSCountedSet, NSString, UIViewController;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver> {

	NSCountedSet* _orientationUpdateDisableReasons;
	BOOL _passesTouchesThrough;
	NSString* _debugName;
	UIViewController* _contentViewController;

}

@property (nonatomic,copy,readonly) NSString * debugName;                                                            //@synthesize debugName=_debugName - In the implementation block
@property (setter=setContentViewController:,nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) BOOL passesTouchesThrough;                                                              //@synthesize passesTouchesThrough=_passesTouchesThrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)layoutContentViewControllerWithConstraints;
-(NSString *)debugName;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setRootViewController:(id)arg1 ;
-(UIViewController *)contentViewController;
-(BOOL)passesTouchesThrough;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isActive;
-(void)setPassesTouchesThrough:(BOOL)arg1 ;
-(id)initWithDebugName:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(id)succinctDescription;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)isDisablingInterfaceOrientationChanges;
-(void)disableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)enableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1 ;
-(unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;
@end

