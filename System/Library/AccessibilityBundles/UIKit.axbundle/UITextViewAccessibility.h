/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)accessibilityLabel;
-(BOOL)resignFirstResponder;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(id)accessibilityCustomRotors;
-(void)setAttributedText:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
-(BOOL)canBecomeFocused;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(CGPoint)accessibilityActivationPoint;
-(id)_accessibilityAttributedTextRetrieval;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(void)setSelectedRange:(NSRange)arg1 ;
-(long long)accessibilityContainerType;
-(id)_accessibilityInternalTextLinks;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(double)_accessibilityFontSize;
-(BOOL)accessibilityActivate;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)accessibilityPlaceholderValue;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)accessibilityTraits;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(id)_accessibilityGetValue;
-(BOOL)_axDidRegisterForDDNotification;
-(void)_axDidFinishDataDetectorURLification:(id)arg1 ;
-(void)_axSetDidRegisterForDDNotification:(BOOL)arg1 ;
-(void)_axRegisterForDDNotificationIfNeeded;
-(void)_axClearCachedLinkData;
-(id)_accessibilityGetValue:(BOOL)arg1 ;
-(BOOL)_axIsOnlyOneLinkElement;
-(BOOL)_accessibilityActivateLink:(id)arg1 ;
-(id)_accessibilityParagraphElements;
-(id)_accessibilityParagraphLinksCustomRotor;
-(id)_accessibilityParagraphElementsWithLinks;
-(id)_accessibilityLinksForRange:(NSRange)arg1 ;
@end

