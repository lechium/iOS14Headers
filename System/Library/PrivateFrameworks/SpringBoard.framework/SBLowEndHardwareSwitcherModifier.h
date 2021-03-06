/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;

}
-(id)handleMainTransitionEvent:(id)arg1 ;
-(double)homeScreenScale;
-(BOOL)_shouldSimplifyForWidgetCenterAndLibrary;
-(id)appLayoutsToResignActive;
-(id)initWithSimplificationOptions:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(double)homeScreenAlpha;
-(BOOL)_shouldResignActiveAppsUnderFloatingApp;
-(BOOL)_shouldSimplifyForOpenFolder;
-(id)keyboardSuppressionMode;
@end

