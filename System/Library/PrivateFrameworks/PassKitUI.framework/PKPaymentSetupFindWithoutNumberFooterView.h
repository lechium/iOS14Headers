/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView {

	long long _context;
	UIButton* _noNumberButton;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIButton * noNumberButton;              //@synthesize noNumberButton=_noNumberButton - In the implementation block
-(BOOL)isBuddyiPad;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)setNoNumberButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(UIButton *)noNumberButton;
-(void)setContext:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(long long)context;
@end
