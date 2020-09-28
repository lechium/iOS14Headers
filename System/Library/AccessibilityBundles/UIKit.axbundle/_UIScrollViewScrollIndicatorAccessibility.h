/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/___UIScrollViewScrollIndicatorAccessibility_super.h>

@interface _UIScrollViewScrollIndicatorAccessibility : ___UIScrollViewScrollIndicatorAccessibility_super

@property (assign,nonatomic,__weak) id<AXScrollIndicatorDelegate> accessibilityScrollIndicatorDelegate; 
@property (assign,nonatomic) long long accessibilityScrollDirection; 
@property (assign,nonatomic) BOOL accessibilityScrollIndicatorIsFocused; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)_accessibilityCanAppearInContextMenuPreview;
-(void)accessibilityElementDidLoseFocus;
-(CGRect)accessibilityFrame;
-(id)accessibilityUserInputLabels;
-(CGPoint)accessibilityActivationPoint;
-(BOOL)_accessibilityOverridesInvisibility;
-(id)accessibilityValue;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(unsigned long long)accessibilityTraits;
-(long long)_accessibilitySortPriority;
-(void)setAccessibilityScrollDirection:(long long)arg1 ;
-(void)setAccessibilityScrollIndicatorDelegate:(id<AXScrollIndicatorDelegate>)arg1 ;
-(BOOL)accessibilityScrollIndicatorIsFocused;
-(long long)accessibilityScrollDirection;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(id<AXScrollIndicatorDelegate>)accessibilityScrollIndicatorDelegate;
-(id)_axBasicDescription;
-(void)setAccessibilityScrollIndicatorIsFocused:(BOOL)arg1 ;
@end
