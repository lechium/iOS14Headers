/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
+(BOOL)shouldIndentWhileEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(id)labelView;
-(void)setProperty:(id)arg1 ;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)dealloc;
-(UILabel *)labelLabel;
-(BOOL)displaysCellSelectionState;
-(double)valueViewBottomMargin;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(id)valueView;
-(BOOL)supportsTintColorValue;
-(UITextView *)textView;
-(void)performDefaultAction;
-(BOOL)allowsCellSelection;
@end

