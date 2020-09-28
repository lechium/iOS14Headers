/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PKFakeTapToFocusInfo : NSObject {

	BOOL _shouldWaitForFirstResponderChange;
	long long _type;
	unsigned long long _interactionValue;
	unsigned long long _firstSubviewValue;
	unsigned long long _targetValue;
	unsigned long long _actionValue;
	unsigned long long _controlEvents;
	unsigned long long _textInputValue;

}

@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long interactionValue;                 //@synthesize interactionValue=_interactionValue - In the implementation block
@property (nonatomic,readonly) unsigned long long firstSubviewValue;                //@synthesize firstSubviewValue=_firstSubviewValue - In the implementation block
@property (nonatomic,readonly) unsigned long long targetValue;                      //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) unsigned long long actionValue;                      //@synthesize actionValue=_actionValue - In the implementation block
@property (assign,nonatomic) unsigned long long controlEvents;                      //@synthesize controlEvents=_controlEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long textInputValue;                   //@synthesize textInputValue=_textInputValue - In the implementation block
@property (nonatomic,readonly) BOOL shouldWaitForFirstResponderChange;              //@synthesize shouldWaitForFirstResponderChange=_shouldWaitForFirstResponderChange - In the implementation block
+(id)tapGestureInfoWithInteractionValue:(unsigned long long)arg1 firstSubviewValue:(unsigned long long)arg2 textInputValue:(unsigned long long)arg3 ;
+(id)controlInfoWithInteractionValue:(unsigned long long)arg1 targetValue:(unsigned long long)arg2 actionValue:(unsigned long long)arg3 controlEvents:(unsigned long long)arg4 textInputValue:(unsigned long long)arg5 ;
+(id)textFieldInfoWithInteractionValue:(unsigned long long)arg1 ;
+(id)tapGestureInfoWithInteractionValue:(unsigned long long)arg1 firstSubviewValue:(unsigned long long)arg2 ;
+(id)controlInfoWithInteractionValue:(unsigned long long)arg1 ;
+(id)controlInfoWithInteractionValue:(unsigned long long)arg1 targetValue:(unsigned long long)arg2 actionValue:(unsigned long long)arg3 controlEvents:(unsigned long long)arg4 textInputValue:(unsigned long long)arg5 shouldWaitForFirstResponderChange:(BOOL)arg6 ;
-(unsigned long long)actionValue;
-(unsigned long long)targetValue;
-(long long)type;
-(unsigned long long)interactionValue;
-(unsigned long long)firstSubviewValue;
-(unsigned long long)controlEvents;
-(void)setControlEvents:(unsigned long long)arg1 ;
-(unsigned long long)textInputValue;
-(BOOL)shouldWaitForFirstResponderChange;
@end
