/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@class NSMutableSet, NSHashTable, UIPress, NSSet;

@interface UIPressesEvent : UIEvent {

	NSMutableSet* _allPresses;
	NSHashTable* _terminalEventRegistrants;
	UIPress* _triggeringPhysicalButton;

}

@property (nonatomic,retain) UIPress * _triggeringPhysicalButton;              //@synthesize triggeringPhysicalButton=_triggeringPhysicalButton - In the implementation block
@property (nonatomic,readonly) NSSet * allPresses; 
-(NSSet *)allPresses;
-(id)physicalButtonsForWindow:(id)arg1 ;
-(void)_addGesturesForPress:(id)arg1 ;
-(void)_addPress:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(id)_directionalPressWithStrongestForce;
-(id)_allPresses;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_cloneEvent;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(long long)subtype;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_windows;
-(id)_terminalRegistrantsForPressType:(long long)arg1 ;
-(UIPress *)_triggeringPhysicalButton;
-(void)_unregisterForTerminalEvent:(id)arg1 ;
-(id)_init;
-(void)_cleanupAfterDispatch;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2 ;
-(long long)type;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2 ;
-(id)pressesForGestureRecognizer:(id)arg1 ;
-(void)set_triggeringPhysicalButton:(UIPress *)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(void)_registerForTerminalEvent:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)description;
@end
