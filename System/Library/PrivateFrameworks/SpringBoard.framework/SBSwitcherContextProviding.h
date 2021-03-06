/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSwitcherContextProviding <SBChainableModifierContext>
@required
-(unsigned long long)newAppLayoutsGenCount;
-(id)switcherSettings;
-(id)appLayouts;
-(BOOL)isShowingSpotlightOrTodayView;
-(CGPoint*)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2;
-(CGPoint*)scrollableQueryModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2;
-(CGPoint*)scrollViewContentOffset;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1;
-(BOOL)isFloatingDockGesturePossible;
-(BOOL)isRTLEnabled;
-(long long)numberOfVisibleCards;
-(id)homeGestureSettings;
-(id)homeScreenIconLocationForAppLayout:(id)arg1;
-(id)switcherBackdropLayoutElement;
-(long long)switcherInterfaceOrientation;
-(BOOL)isReduceMotionEnabled;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(CGRect*)containerViewBounds;
-(CGPoint*)morphToPiPTargetCenter;
-(BOOL)hasHomeButton;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1;
-(id)entityRemovalSettings;
-(BOOL)isDevicePad;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg1;
-(BOOL)isFloatingDockSupported;
-(CGRect*)homeScreenIconFrameForAppLayout:(id)arg1;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1;
-(double)morphToPiPSourceAlpha;
-(unsigned long long)appLayoutsGenerationCount;
-(id)switcherDimmingViewLayoutElement;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1;
-(double)displayCornerRadius;
-(long long)homeScreenInterfaceOrientation;
-(double)floatingDockViewTopMargin;
-(unsigned long long)homeScreenIconGridSizeClassForAppLayout:(id)arg1;
-(double)morphToPiPTargetScale;
-(CGPoint*)scrollableQueryModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2;
-(CGRect*)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
-(BOOL)homeScreenHasOpenFolder;
-(BOOL)isHomeScreenSidebarVisible;
-(id)medusaSettings;
-(double)homeScreenIconScaleForAppLayout:(id)arg1;
-(double)switcherWindowLevel;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1;
-(CGRect*)switcherViewBounds;
-(BOOL)isFloatingDockFullyPresented;
-(double)floatingDockWindowLevel;
-(id)genericSwitcherAccessoryLayoutElement;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg1 key:(id)arg2;
-(BOOL)isStudyLogEnabled;
-(double)floatingDockHeight;

@end

