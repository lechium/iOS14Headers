/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIClickPresentationInteractionDelegateInternal <_UIClickPresentationInteractionDelegate>
@optional
-(void)_clickPresentationInteraction:(id)arg1 shouldBegin:(/*^block*/id)arg2;
-(void)_clickPresentationInteractionEnded:(id)arg1 forPresentation:(id)arg2 reason:(unsigned long long)arg3;
-(void)_clickPresentationInteraction:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
-(id)_clickPresentationInteraction:(id)arg1 previewForCancellingDragItem:(id)arg2;
-(BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)arg1;
-(void)_clickPresentationInteraction:(id)arg1 dragSessionDidEndForItems:(id)arg2;
-(id)_clickPresentationInteraction:(id)arg1 interactionEffectForTargetedPreview:(id)arg2;
-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg1;
-(id)_clickPresentationInteraction:(id)arg1 liveDragPreviewForPresentation:(id)arg2;
-(BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)arg1;

@end
