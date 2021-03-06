/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {

	BSAnimationSettings* _animationSettings;
	/*^block*/id _animationBlock;

}
-(id)animationSettings;
-(void)_didComplete;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(void)_startAnimation;
-(id)initWithWorkspaceTransitionRequest:(id)arg1 ;
@end

