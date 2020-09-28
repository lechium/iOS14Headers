/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol BSInvalidatable;
@class NSMutableSet, NSMutableOrderedSet, SBHomeHardwareButtonActions, SBHardwareButtonGestureParameters, SBHomeHardwareButtonGestureRecognizerConfiguration, UIGestureRecognizer, NSMutableDictionary, BKSButtonHapticsDefinition, NSString;

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver> {

	id<BSInvalidatable> _fingerDetectEnabledAssertion;
	NSMutableSet* _hintSuppressionAssertions;
	NSMutableOrderedSet* _longPressDurationAssertions;
	BOOL _longPressDidOccur;
	SBHomeHardwareButtonActions* _buttonActions;
	SBHardwareButtonGestureParameters* _buttonGestureParameters;
	SBHomeHardwareButtonGestureRecognizerConfiguration* _gestureRecognizerConfiguration;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	long long _homeButtonType;
	long long _maximumPressCount;
	long long _maximumTapCount;
	NSMutableDictionary* _emulatedPerSenderDownCount;
	BKSButtonHapticsDefinition* _buttonDefinition;

}

@property (nonatomic,retain) SBHomeHardwareButtonActions * buttonActions;                                                      //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBHardwareButtonGestureParameters * buttonGestureParameters;                                      //@synthesize buttonGestureParameters=_buttonGestureParameters - In the implementation block
@property (nonatomic,retain) SBHomeHardwareButtonGestureRecognizerConfiguration * gestureRecognizerConfiguration;              //@synthesize gestureRecognizerConfiguration=_gestureRecognizerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                                         //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                                                         //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) long long maximumPressCount;                                                                      //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (assign,nonatomic) long long maximumTapCount;                                                                        //@synthesize maximumTapCount=_maximumTapCount - In the implementation block
@property (assign,nonatomic) BOOL longPressDidOccur;                                                                           //@synthesize longPressDidOccur=_longPressDidOccur - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emulatedPerSenderDownCount;                                                 //@synthesize emulatedPerSenderDownCount=_emulatedPerSenderDownCount - In the implementation block
@property (nonatomic,retain) BKSButtonHapticsDefinition * buttonDefinition;                                                    //@synthesize buttonDefinition=_buttonDefinition - In the implementation block
@property (getter=isButtonDown,nonatomic,readonly) BOOL buttonDown; 
@property (nonatomic,readonly) BOOL supportsAcceleratedAppDismiss; 
@property (assign,nonatomic) long long hapticType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isButtonDown;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2 buttonActions:(id)arg3 gestureRecognizerConfiguration:(id)arg4 ;
-(BKSButtonHapticsDefinition *)buttonDefinition;
-(void)doublePressUp:(id)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 homeButtonType:(long long)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)longPress:(id)arg1 ;
-(void)singlePressUp:(id)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(void)_setFingerDetectionEnabled:(BOOL)arg1 ;
-(void)_createGestureRecognizersWithConfiguration:(id)arg1 ;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(BOOL)supportsAcceleratedAppDismiss;
-(void)doubleTapUp:(id)arg1 ;
-(void)_reconfigureGestureRecognizersForNewMaximumTapCount:(long long)arg1 oldMaximumTapCount:(long long)arg2 ;
-(void)setMaximumTapCount:(long long)arg1 ;
-(BOOL)_processDoubleDownAndDoubleUpSimultaneously;
-(void)setMaximumPressCount:(long long)arg1 ;
-(NSMutableDictionary *)emulatedPerSenderDownCount;
-(long long)maximumTapCount;
-(SBHardwareButtonGestureParameters *)buttonGestureParameters;
-(SBHomeHardwareButtonGestureRecognizerConfiguration *)gestureRecognizerConfiguration;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)addHintSuppressionAssertion:(id)arg1 ;
-(void)_reconfigureGestureRecognizersForNewMaximumPressCount:(long long)arg1 oldMaximumPressCount:(long long)arg2 ;
-(void)setHapticType:(long long)arg1 ;
-(long long)homeButtonType;
-(void)removeHintSuppressionAssertion:(id)arg1 ;
-(void)_cancelGestureRecognizer:(id)arg1 ;
-(void)acceleratedSinglePressUp:(id)arg1 ;
-(BOOL)_longPressGestureRecognizerShouldBegin:(id)arg1 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)triplePressUp:(id)arg1 ;
-(SBHomeHardwareButtonActions *)buttonActions;
-(void)setHomeButtonType:(long long)arg1 ;
-(void)_reconfigureHomeButton;
-(BOOL)longPressDidOccur;
-(void)_startObservingReconfigurationTriggers;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_isMenuDoublePressAllowed:(id*)arg1 ;
-(void)setEmulatedPerSenderDownCount:(NSMutableDictionary *)arg1 ;
-(void)setButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg1 ;
-(void)removeLongPressDurationAssertion:(id)arg1 ;
-(void)initialButtonUp:(id)arg1 ;
-(void)setGestureRecognizerConfiguration:(SBHomeHardwareButtonGestureRecognizerConfiguration *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)addLongPressDurationAssertion:(id)arg1 ;
-(long long)hapticType;
-(long long)maximumPressCount;
-(void)setButtonDefinition:(BKSButtonHapticsDefinition *)arg1 ;
-(void)cancelLongPress;
-(BOOL)_acceleratedSinglePressRecognizerShouldBegin;
-(BOOL)emulateHomeButtonEventsIfNeeded:(IOHIDEventRef)arg1 ;
-(BOOL)_isMenuDoublePressDisabled;
-(void)doublePressDown:(id)arg1 ;
-(void)_terminateHomeButtonEventAtCount:(long long)arg1 ;
-(void)initialButtonDown:(id)arg1 ;
-(void)configureForwardingToLockButton:(id)arg1 ;
-(void)setButtonActions:(SBHomeHardwareButtonActions *)arg1 ;
-(void)_singlePressUp:(id)arg1 ;
-(void)setLongPressDidOccur:(BOOL)arg1 ;
@end
