/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIWindow, UIView;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {

	UIWindow* _snapshotHostWindow;
	UIView* _snapshotView;
	CGAffineTransform _snapshotCorrectiveTransform;

}

@property (assign,nonatomic,__weak) UIWindow * snapshotHostWindow;                       //@synthesize snapshotHostWindow=_snapshotHostWindow - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                      //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) CGAffineTransform snapshotCorrectiveTransform;              //@synthesize snapshotCorrectiveTransform=_snapshotCorrectiveTransform - In the implementation block
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(id)customAnimator;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setSnapshotHostWindow:(UIWindow *)arg1 ;
-(void)setSnapshotCorrectiveTransform:(CGAffineTransform)arg1 ;
-(UIWindow *)snapshotHostWindow;
-(CGAffineTransform)snapshotCorrectiveTransform;
@end

