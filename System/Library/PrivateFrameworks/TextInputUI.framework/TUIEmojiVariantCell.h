/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, EMFEmojiToken;

@interface TUIEmojiVariantCell : UIView {

	BOOL _highlighted;
	UILabel* _labelView;
	UIView* _backgroundView;
	EMFEmojiToken* _emojiToken;

}

@property (nonatomic,readonly) UILabel * labelView;                              //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) EMFEmojiToken * emojiToken;                       //@synthesize emojiToken=_emojiToken - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(UILabel *)labelView;
-(BOOL)isHighlighted;
-(void)layoutSubviews;
-(EMFEmojiToken *)emojiToken;
-(id)initWithFrame:(CGRect)arg1 token:(id)arg2 ;
-(UIView *)backgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
@end

