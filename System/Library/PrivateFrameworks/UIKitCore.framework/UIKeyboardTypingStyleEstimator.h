/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardTypingStyleEstimatorDelegate;
@class NSTimer;

@interface UIKeyboardTypingStyleEstimator : NSObject {

	NSTimer* _tapTypingFlipTimer;
	double _lastContinuousPathEvent;
	unsigned long long _currentTypingStyle;
	id<UIKeyboardTypingStyleEstimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)currentTypingStyleEstimation;
-(void)endedContinuousPath;
-(void)setDelegate:(id<UIKeyboardTypingStyleEstimatorDelegate>)arg1 ;
-(id<UIKeyboardTypingStyleEstimatorDelegate>)delegate;
-(void)tapTypedKey;
-(void)beganContinuousPath;
-(void)cancelContinuousPath;
-(void)_setTypingStyleEstimation:(unsigned long long)arg1 ;
@end

