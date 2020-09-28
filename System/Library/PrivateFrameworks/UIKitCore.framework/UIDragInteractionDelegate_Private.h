/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>
@optional
-(void)_dragInteraction:(id)arg1 liftAnimationDidChangeDirection:(long long)arg2;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1;
-(id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2;
-(void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
-(BOOL)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;

@end
