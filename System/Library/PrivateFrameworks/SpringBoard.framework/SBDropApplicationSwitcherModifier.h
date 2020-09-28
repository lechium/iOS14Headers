/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;

}
-(id)transitionWillBegin;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)keyboardSuppressionMode;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
@end
