/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {

	BOOL _disabled;

}

@property (assign,nonatomic) BOOL disabled;                                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldPurgeKeyViews; 
@property (nonatomic,readonly) CGRect primaryGlyphNormalizedExitRect; 
@property (nonatomic,readonly) CGRect secondaryGlyphNormalizedExitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
+(id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
+(id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 ;
-(BOOL)shouldPurgeKeyViews;
-(id)keycapRightSelectLeftTransform;
-(BOOL)disabled;
-(void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)keycapPrimaryExitTransform;
-(id)keycapLeftSelectRightTransform;
-(id)keycapPrimaryDualStringTransform:(id)arg1 ;
-(double)delayedDeactivationTimeForKeyView:(id)arg1 ;
-(id)keycapAlternateTransform:(id)arg1 ;
-(void)reset;
-(id)keycapLeftSelectPrimaryTransform;
-(id)keycapAlternateDualStringTransform:(id)arg1 ;
-(CGRect)secondaryGlyphNormalizedExitRect;
-(void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(CGSize)arg2 ;
-(CGRect)primaryGlyphNormalizedExitRect;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)keycapPrimaryTransform;
-(void)endTransitionForKeyView:(id)arg1 ;
-(id)keycapRightSelectPrimaryTransform;
-(id)keycapLeftTransform;
-(id)keycapRightTransform;
-(BOOL)shouldAssertCurrentKeyState:(id)arg1 ;
-(id)keycapNullTransform;
-(id)keycapRightSelectRightTransform;
-(Class)_keyViewClassForSpecialtyKey:(id)arg1 screenTraits:(id)arg2 ;
-(id)keycapMeshTransformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(BOOL)arg3 ;
-(void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)keycapLeftSelectLeftTransform;
@end
