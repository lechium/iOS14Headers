/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@class UIPreviewForceInteractionProgress, SBAppSwitcherSettings, SBTouchHistory, NSString;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding> {

	UIPreviewForceInteractionProgress* _forceObserver;
	SBAppSwitcherSettings* _settings;
	double _forcePercent;
	SBTouchHistory* _touchHistory;

}

@property (nonatomic,retain) SBTouchHistory * touchHistory;              //@synthesize touchHistory=_touchHistory - In the implementation block
@property (nonatomic,readonly) double forcePercent;                      //@synthesize forcePercent=_forcePercent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(void)setTouchHistory:(SBTouchHistory *)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(SBTouchHistory *)touchHistory;
-(double)peakSpeed;
-(void)dealloc;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(double)forcePercent;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

