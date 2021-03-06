/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, UIView, UIVisualEffectView;

@interface CNUIToolbar : UIView {

	BOOL _isAnimating;
	NSArray* _items;
	NSArray* _buttons;
	UIView* _border;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * border;                                    //@synthesize border=_border - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                   //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
+(double)defaultToolBarHeight;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(double)borderWidth;
-(UIView *)border;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)layoutSubviews;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setupView;
-(UIVisualEffectView *)visualEffectView;
-(BOOL)isAnimating;
-(void)setBorder:(UIView *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(id)buttonForItem:(id)arg1 ;
-(BOOL)isEnabledForItem:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forItem:(id)arg2 ;
-(void)setupBorder;
@end

