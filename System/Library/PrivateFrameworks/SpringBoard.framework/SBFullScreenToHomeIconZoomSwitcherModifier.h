/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	unsigned long long _direction;
	CGRect _homeScreenIconFrame;
	double _homeScreenIconCornerRadius;
	double _homeScreenIconScale;
	BOOL _homeScreenIconLocationIsFloatingDock;
	BOOL _itemContainerOverlapsDock;
	BOOL _wantsDockWindowLevelAssertion;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	BOOL _shouldAcceleratedHomeButtonPressBegin;
	BOOL _shouldUpdateIconViewVisibility;
	BOOL _shouldMatchMoveToIconView;

}

@property (assign,nonatomic) BOOL shouldUpdateIconViewVisibility;              //@synthesize shouldUpdateIconViewVisibility=_shouldUpdateIconViewVisibility - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchMoveToIconView;                   //@synthesize shouldMatchMoveToIconView=_shouldMatchMoveToIconView - In the implementation block
-(long long)homeScreenBackdropBlurType;
-(id)transitionWillBegin;
-(id)_layoutSettings;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)topMostLayoutElements;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 ;
-(long long)wallpaperStyle;
-(void)setShouldUpdateIconViewVisibility:(BOOL)arg1 ;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)transitionDidEnd;
-(BOOL)_isIndexZoomAppLayout:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(BOOL)shouldUpdateIconViewVisibility;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(BOOL)wantsDockBehaviorAssertion;
-(void)didMoveToParentModifier:(id)arg1 ;
-(double)dockProgress;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(void)setShouldMatchMoveToIconView:(BOOL)arg1 ;
-(BOOL)shouldMatchMoveToIconView;
-(double)homeScreenAlpha;
-(double)dockWindowLevel;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)wantsDockWindowLevelAssertion;
-(id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3 ;
-(double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(CGPoint)arg1 ;
-(unsigned long long)dockWindowLevelPriority;
-(double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(CGPoint)arg1 ;
-(id)layoutSettingsForTargetCenter:(CGPoint)arg1 ;
-(BOOL)_isEffectivelyHome;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(id)visibleAppLayouts;
@end
