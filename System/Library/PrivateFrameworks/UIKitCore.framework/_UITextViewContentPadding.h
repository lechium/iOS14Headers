/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextViewContentPaddingDelegate;
@interface _UITextViewContentPadding : NSObject {

	long long _mode;
	double _targetValue;
	double _currentValue;
	id<_UITextViewContentPaddingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UITextViewContentPaddingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double targetValue;                                                 //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) double currentValue;                                              //@synthesize currentValue=_currentValue - In the implementation block
-(long long)mode;
-(void)resetCurrentValue;
-(void)setMode:(long long)arg1 ;
-(double)currentValue;
-(void)increaseToValue:(double)arg1 ;
-(double)targetValue;
-(void)_checkNewCurrentValue;
-(void)setTargetValue:(double)arg1 ;
-(void)setDelegate:(id<_UITextViewContentPaddingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<_UITextViewContentPaddingDelegate>)delegate;
@end

