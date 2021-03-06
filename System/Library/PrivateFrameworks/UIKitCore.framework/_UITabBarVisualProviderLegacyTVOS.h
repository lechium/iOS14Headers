/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITabBarVisualProvider.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView, UIScrollView, UIMotionEffect;

@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIView* _accessoryView;
	UIScrollView* _itemsScrollView;
	UIView* _focusedItemHighlightView;
	UIMotionEffect* _focusedItemHighlightMotionEffect;

}
-(void)_updateBackground;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(void)updateBackgroundGroupName;
-(void)updateArchivedSubviews:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(BOOL)_shim_shadowHidden;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)changeAppearance;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(void)prepare;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusedView;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_updateAccessoryView;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(id)_focusedItemHighlightView;
-(void)changeLayout;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_layoutItemsOnly;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_layoutTabBarItems;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(id)_parentViewForItems;
-(BOOL)_focusedItemHighlightViewIsVisible;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2 ;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateHighlightMotionEffect;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg1 ;
-(void)_configureItems:(id)arg1 ;
-(CGRect)_layoutRegion;
@end

