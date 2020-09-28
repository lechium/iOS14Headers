/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:34 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol UITextViewDelegate;
@class TSKPlaceholderTextView, UIView, NSString;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {

	TSKPlaceholderTextView* mTextView;
	UIView* mInputView;
	BOOL mNumberHasDecimal;
	id<UITextViewDelegate> mSavedDelegate;

}

@property (nonatomic,retain) NSString * string; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(void)deleteBackward;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setString:(NSString *)arg1 ;
-(void)tintColorDidChange;
-(void)beginEditing;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)isNegative;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)setInputView:(id)arg1 ;
-(void)endEditing;
-(void)p_parseText:(id)arg1 ;
-(void)p_insertString:(id)arg1 ;
-(void)setTextTag:(long long)arg1 ;
-(void)setTextDelegate:(id)arg1 ;
-(void)parseText;
-(void)insertNumber:(long long)arg1 ;
-(void)insertDecimalSeparator;
-(void)toggleNegative;
@end
