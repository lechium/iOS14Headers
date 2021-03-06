/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class WFTextTokenTextField, NSString, NSSet;

@interface WFNumberField : UIView <UITextFieldDelegate> {

	BOOL _allowsDecimalNumbers;
	BOOL _allowsNegatingNumbers;
	/*^block*/id _doneBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	WFTextTokenTextField* _textField;

}

@property (assign,nonatomic,__weak) WFTextTokenTextField * textField;                         //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL allowsDecimalNumbers;                                       //@synthesize allowsDecimalNumbers=_allowsDecimalNumbers - In the implementation block
@property (assign,nonatomic) BOOL allowsNegatingNumbers;                                      //@synthesize allowsNegatingNumbers=_allowsNegatingNumbers - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider; 
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate; 
@property (nonatomic,copy) NSSet * allowedVariableTypes; 
@property (nonatomic,copy) id doneBlock;                                                      //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEditable;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)keyboardAppearance;
-(BOOL)becomeFirstResponder;
-(void)setTextAlignment:(long long)arg1 ;
-(void)textDidChange;
-(long long)textAlignment;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)dealloc;
-(void)setTextField:(WFTextTokenTextField *)arg1 ;
-(NSString *)placeholder;
-(void)setText:(NSString *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)updateBlock;
-(WFTextTokenTextField *)textField;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)allowsDecimalNumbers;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariableBlock:(id)arg1 ;
-(id)variableBlock;
-(void)negateText;
-(void)setAllowsDecimalNumbers:(BOOL)arg1 ;
-(void)setAllowsNegatingNumbers:(BOOL)arg1 ;
-(BOOL)allowsNegatingNumbers;
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
@end

