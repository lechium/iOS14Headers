/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(void)dealloc;
-(id)_accessibilityNativeFocusPreferredElement;
-(CGRect)accessibilityFrame;
-(BOOL)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(void)deactivate;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_accessibilityKeyboardIsContinuousPathTracking;
-(BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
-(CGRect)_accessibilityDirectInteractionFrame;
-(void)activate;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
@end
