/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol _UIHostedWindowDelegate;
@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	BOOL _wantsTraitPropagation;
	BOOL __hostViewUnderlapsStatusBar;
	long long _hostTintAdjustmentMode;
	UIColor* __hostTintColor;
	UITraitCollection* _hostTraitCollection;
	id<_UIHostedWindowDelegate> __hostedWindowDelegate;

}

@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) long long _hostTintAdjustmentMode;                  //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropagation:,nonatomic) BOOL _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHostedWindowDelegate> _hostedWindowDelegate;                              //@synthesize _hostedWindowDelegate=__hostedWindowDelegate - In the implementation block
@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
-(long long)_orientationForViewTransform;
-(long long)_orientationForSceneTransform;
-(BOOL)_isWindowServerHostingManaged;
-(long long)_orientationForRootTransform;
-(BOOL)_usesWindowServerHitTesting;
-(void)didSetResponderTargetForCalloutBar:(id)arg1 ;
-(BOOL)_extendsScreenSceneLifetime;
-(void)_configureContextOptions:(id)arg1 ;
-(unsigned)contextID;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(void)_setHostTraitCollection:(id)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(long long)_hostTintAdjustmentMode;
-(void)dealloc;
-(void)_setFirstResponder:(id)arg1 ;
-(UITraitCollection *)_hostTraitCollection;
-(void)set_hostedWindowDelegate:(id<_UIHostedWindowDelegate>)arg1 ;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(void)_didCreateRootPresentationController;
-(BOOL)_needsShakesWhenInactive;
-(void)_setHostTintColor:(id)arg1 ;
-(BOOL)_wantsTraitPropagation;
-(BOOL)_updatesSafeAreaInsetsOnRead;
-(BOOL)_preventsRootPresentationController;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(id<_UIHostedWindowDelegate>)_hostedWindowDelegate;
-(id)_traitCollectionForSize:(CGSize)arg1 parentCollection:(id)arg2 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(UIColor *)_hostTintColor;
-(id)_normalInheritedTintColor;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_setHostTintAdjustmentMode:(long long)arg1 ;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(long long)_defaultTintAdjustmentMode;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)_setWantsTraitPropagation:(BOOL)arg1 ;
@end
