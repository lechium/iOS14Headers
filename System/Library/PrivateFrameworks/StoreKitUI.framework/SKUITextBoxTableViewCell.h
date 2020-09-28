/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell {

	SKUITextBoxView* _textBoxView;
	UIEdgeInsets _textBoxInsets;

}

@property (nonatomic,readonly) SKUITextBoxView * textBoxView;              //@synthesize textBoxView=_textBoxView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textBoxInsets;                   //@synthesize textBoxInsets=_textBoxInsets - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(SKUITextBoxView *)textBoxView;
-(void)setTextBoxInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textBoxInsets;
@end
