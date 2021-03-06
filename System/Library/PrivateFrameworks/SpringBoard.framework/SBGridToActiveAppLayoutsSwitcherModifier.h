/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	NSArray* _activeAppLayouts;
	SBSwitcherModifier* _gridModifier;
	BOOL _wantsMinificationFilter;

}
-(long long)homeScreenBackdropBlurType;
-(id)transitionWillBegin;
-(id)_layoutSettings;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)topMostLayoutElements;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(double)homeScreenAlpha;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayouts:(id)arg3 gridModifier:(id)arg4 ;
@end

