/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITargetedPreview;


@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
@property (nonatomic,copy) UITargetedPreview * sourcePreview; 
@optional
-(void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionWillReverse;
-(UITargetedPreview *)sourcePreview;
-(void)setSourcePreview:(id)arg1;
-(void)performWithCustomAnimator:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
-(void)transitionDidEnd:(BOOL)arg1;

@end

