/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface WFLibraryZoomTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIView* _cellView;
	BOOL _presenting;
	UIView* _morphView;
	UIView* _shadowView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionForPresentingFromView:(id)arg1 ;
+(id)transitionForDismissingToView:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initWithView:(id)arg1 presenting:(BOOL)arg2 ;
-(id)lessStiffSpringAnimation;
-(id)stiffSpringAnimation;
-(id)centralAnimation;
-(id)morphAnimation;
-(id)crossfadeAnimation;
-(id)radiusAnimation;
-(void)configureViews:(id)arg1 ;
-(void)startAnimations:(id)arg1 ;
-(void)completeAnimations:(id)arg1 ;
-(CGImageRef)snapshotView:(id)arg1 ;
@end

