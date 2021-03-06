/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextInputAssistantItem.h>

@protocol UISystemDefaultTextInputAssistantItemDelegate;
@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem {

	id<UISystemDefaultTextInputAssistantItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)assistantSelectPencilTextInputLanguage:(id)arg1 ;
-(void)assistantUndo;
-(void)assistantCopy;
-(void)assistantBold;
-(void)assistantReturn;
-(BOOL)canPerformSystemButtonActionForStyle:(long long)arg1 ;
-(void)assistantEmoji;
-(void)analyticsDispatchWithActionStyle:(long long)arg1 ;
-(void)assistantItalic;
-(void)setDelegate:(id<UISystemDefaultTextInputAssistantItemDelegate>)arg1 ;
-(void)assistantDismiss;
-(void)_performReturn;
-(void)assistantWriteboard;
-(void)performSystemButtonActionForStyle:(long long)arg1 ;
-(void)assistantPaste;
-(id<UISystemDefaultTextInputAssistantItemDelegate>)delegate;
-(void)assistantRedo;
-(SEL)_responderSelectorForSystemButtonStyle:(long long)arg1 ;
-(void)assistantCut;
-(void)assistantSelectPencilTextInputLanguage;
-(void)assistantDictation;
-(void)assistantShowKeyboard;
-(void)assistantUnderline;
@end

