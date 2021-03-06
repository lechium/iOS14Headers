/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSSet, UIColor, _UIBarButtonItemAppearanceStorage, UIBarButtonItem, UINavigationItem, NSDictionary, UIView, NSString, UIImage;

@interface UINavigationButton : UIButton {

	NSSet* _possibleTitles;
	int _style;
	long long _barStyle;
	UIColor* _navigationBarTintColor;
	CGSize _boundsAdjustment;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	NSSet* _possibleSystemItems;
	unsigned _size : 2;
	unsigned _wantsLetterpressContent : 1;
	UIBarButtonItem* _originatingButtonItem;
	UINavigationItem* _originatingNavigationItem;
	BOOL _createdByBarButtonItem;
	BOOL _isFontScaleInvalid;
	BOOL _wantsBlendModeForAccessibilityBackgrounds;
	BOOL __barItemHidden;
	long long _buttonItemStyle;
	NSDictionary* _stylesForSizingTitles;
	double _fontScaleAdjustment;
	UIColor* _accessibilityBackgroundTintColor;
	Class _appearanceGuideClass;
	UIView* __enclosingBar;
	double _minimumWidth;
	double _maximumWidth;
	UIEdgeInsets __additionalSelectionInsets;

}

@property (assign,setter=_setEnclosingBar:,nonatomic,__weak) UIView * _enclosingBar;                                                             //@synthesize _enclosingBar=__enclosingBar - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                                                                //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                                                                //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * originatingNavigationItem;                                                                //@synthesize originatingNavigationItem=_originatingNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * originatingButtonItem;                                                                     //@synthesize originatingButtonItem=_originatingButtonItem - In the implementation block
@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;                                                       //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setButtonItemStyle:,nonatomic) long long _buttonItemStyle;                                                             //@synthesize buttonItemStyle=_buttonItemStyle - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                                        //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (assign,setter=_setFontScaleInvalid:,nonatomic) BOOL _isFontScaleInvalid;                                                              //@synthesize isFontScaleInvalid=_isFontScaleInvalid - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) BOOL _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
@property (assign,setter=_setBarItemHidden:,nonatomic) BOOL _barItemHidden;                                                                      //@synthesize _barItemHidden=__barItemHidden - In the implementation block
@property (setter=_setAccessibilityBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityBackgroundTintColor;                           //@synthesize accessibilityBackgroundTintColor=_accessibilityBackgroundTintColor - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;                                      //@synthesize _additionalSelectionInsets=__additionalSelectionInsets - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) BOOL _createdByBarButtonItem;                                                    //@synthesize createdByBarButtonItem=_createdByBarButtonItem - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long barStyle;                                                                                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) int style;                                                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int controlSize; 
@property (nonatomic,retain) UIColor * tintColor; 
+(void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(BOOL)arg3 withAccessibilityBackground:(BOOL)arg4 wantsBlendModeForAccessibilityBackgrounds:(BOOL)arg5 accessibilityBackgroundTintColor:(id)arg6 ;
+(BOOL)_cursorInteractionEnabled;
+(id)defaultFont;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(long long)barStyle;
-(void)_setFontScaleInvalid:(BOOL)arg1 ;
-(Class)_appearanceGuideClass;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6 ;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(void)_setBoundsAdjustment:(CGSize)arg1 ;
-(int)controlSize;
-(void)_setGroupName:(id)arg1 forNavigationBar:(id)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(BOOL)_supportsMacIdiom;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)setOriginatingNavigationItem:(UINavigationItem *)arg1 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(id)initWithImage:(id)arg1 ;
-(id)_visualStyleForMetrics:(long long)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(UIEdgeInsets)_buttonTitleEdgeInsets;
-(id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(BOOL*)arg2 ;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(BOOL)arg3 ;
-(CGRect)_selectedIndicatorBounds;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_setCreatedByBarButtonItem:(BOOL)arg1 ;
-(void)_updateContentInsets;
-(void)_updateStyle;
-(BOOL)_isModernButton;
-(UIView *)_enclosingBar;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(NSDictionary *)_stylesForSizingTitles;
-(void)setNavigationBarTintColor:(id)arg1 ;
-(id)_defaultTitleShadowColorForState:(unsigned long long)arg1 ;
-(void)_updateTitleForLetterpress;
-(BOOL)_barItemHidden;
-(void)setImage:(UIImage *)arg1 ;
-(double)minimumWidth;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)initWithTitle:(id)arg1 ;
-(double)_fontScaleAdjustment;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setBarStyle:(long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(UIEdgeInsets)_additionalSelectionInsets;
-(void)setMinimumWidth:(double)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_adjustedDefaultTitleFont;
-(long long)_buttonItemStyle;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)contentsEqualTo:(id)arg1 withStyle:(int)arg2 ;
-(UINavigationItem *)originatingNavigationItem;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(long long)buttonType;
-(id)initWithImage:(id)arg1 style:(int)arg2 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(BOOL)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6 ;
-(void)_setButtonItemStyle:(long long)arg1 ;
-(void)_adjustBounds;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(long long)_activeBarMetrics;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(BOOL)_createdByBarButtonItem;
-(id)_appearanceStorage;
-(UIColor *)_tintColor;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_setFrame:(CGRect)arg1 deferLayout:(BOOL)arg2 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_activeVisualStyle;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(void)_accessibilityButtonShapesParametersDidChange;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(UIColor *)_accessibilityBackgroundTintColor;
-(void)_setTintColor:(id)arg1 ;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)canBecomeFocused;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)_setTitleFrozen:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(long long)_barButtonItemStyle;
-(int)style;
-(void)layoutSubviews;
-(void)_setBarItemHidden:(BOOL)arg1 ;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(UIBarButtonItem *)originatingButtonItem;
-(void)setOriginatingButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)_isFontScaleInvalid;
-(void)_setEnclosingBar:(id)arg1 ;
-(void)_setWantsLetterpressContent;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)maximumWidth;
-(UIImage *)image;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_defaultTitleColorForState:(unsigned long long)arg1 isTintColor:(BOOL*)arg2 ;
-(BOOL)_isCarPlaySystemTypeButton;
-(BOOL)_isExternalRoundedRectButton;
-(BOOL)_hasBaselineAlignedAbsoluteVerticalPosition:(out double*)arg1 withinNavBar:(id)arg2 forSize:(CGSize)arg3 ;
-(id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3 ;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(BOOL)arg8 forButtonItemStyle:(long long)arg9 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg1 onLeft:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 style:(int)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(void)_updateTitleColorsForState:(unsigned long long)arg1 ;
@end

