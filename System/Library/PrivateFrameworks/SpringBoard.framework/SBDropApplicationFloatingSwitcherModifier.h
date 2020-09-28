/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;
	SBAppLayout* _fromAppLayout;

}
-(id)transitionWillBegin;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToResignActive;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)keyboardSuppressionMode;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
@end
