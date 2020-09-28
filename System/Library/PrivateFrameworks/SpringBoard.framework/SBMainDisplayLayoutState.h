/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutState.h>

@class NSString, NSSet;

@interface SBMainDisplayLayoutState : SBLayoutState {

	BOOL _floatingSwitcherVisible;
	long long _spaceConfiguration;
	long long _floatingConfiguration;
	long long _unlockedEnvironmentMode;
	NSString* _bundleIDShowingAppExpose;
	NSSet* _inlineAppExposeOverlayElements;

}

@property (nonatomic,readonly) long long spaceConfiguration;                                               //@synthesize spaceConfiguration=_spaceConfiguration - In the implementation block
@property (nonatomic,readonly) long long floatingConfiguration;                                            //@synthesize floatingConfiguration=_floatingConfiguration - In the implementation block
@property (nonatomic,readonly) long long unlockedEnvironmentMode;                                          //@synthesize unlockedEnvironmentMode=_unlockedEnvironmentMode - In the implementation block
@property (nonatomic,readonly) NSString * bundleIDShowingAppExpose;                                        //@synthesize bundleIDShowingAppExpose=_bundleIDShowingAppExpose - In the implementation block
@property (getter=isFloatingSwitcherVisible,nonatomic,readonly) BOOL floatingSwitcherVisible;              //@synthesize floatingSwitcherVisible=_floatingSwitcherVisible - In the implementation block
@property (nonatomic,readonly) NSSet * inlineAppExposeOverlayElements;                                     //@synthesize inlineAppExposeOverlayElements=_inlineAppExposeOverlayElements - In the implementation block
+(long long)_defaultInterfaceOrientation;
-(long long)interfaceOrientation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 unlockedEnvironmentMode:(long long)arg6 floatingSwitcherVisible:(BOOL)arg7 bundleIDShowingAppExpose:(id)arg8 inlineAppExposeOverlayElements:(id)arg9 ;
-(long long)spaceConfiguration;
-(id)floatingItem;
-(id)inlineAppExposeOverlayElementWithRole:(long long)arg1 ;
-(id)visibleFloatingItem;
-(BOOL)isEqual:(id)arg1 ;
-(id)_transitionContextForDismissingRightApplication;
-(long long)floatingConfiguration;
-(unsigned long long)hash;
-(BOOL)isFloatingSwitcherVisible;
-(long long)unlockedEnvironmentMode;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 ;
-(id)_transitionContextForDismissingLeftApplication;
-(id)_transitionContextForResizingToSpaceConfiguration:(long long)arg1 ;
-(NSString *)bundleIDShowingAppExpose;
-(NSSet *)inlineAppExposeOverlayElements;
@end
