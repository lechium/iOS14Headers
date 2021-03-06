/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInlineNotificationView.h>

@class UIView, UIButton, NSString;

@interface CKTextInlineNotificationView : CKInlineNotificationView {

	UIView* _contentView;
	UIButton* _textButton;
	UIView* _greyOutView;

}

@property (nonatomic,retain) UIButton * textButton;              //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,retain) UIView * greyOutView;               //@synthesize greyOutView=_greyOutView - In the implementation block
@property (assign,nonatomic) BOOL greyedOut; 
@property (nonatomic,retain) NSString * text; 
-(id)contentView;
-(BOOL)greyedOut;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)dealloc;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)_handleTouchDown:(id)arg1 ;
-(UIView *)greyOutView;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchUpOutside:(id)arg1 ;
-(void)setGreyedOut:(BOOL)arg1 ;
-(void)setTextButton:(UIButton *)arg1 ;
-(void)setGreyOutView:(UIView *)arg1 ;
-(UIButton *)textButton;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
@end

