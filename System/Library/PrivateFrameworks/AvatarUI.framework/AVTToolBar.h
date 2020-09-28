/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol AVTToolBarDelegate;
@class NSArray, UIView, UIVisualEffectView;

@interface AVTToolBar : UIView {

	BOOL _isAnimating;
	id<AVTToolBarDelegate> _delegate;
	NSArray* _buttons;
	UIView* _border;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * buttons;                                   //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * border;                                     //@synthesize border=_border - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;               //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTToolBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                    //@synthesize isAnimating=_isAnimating - In the implementation block
+(double)defaultToolBarHeight;
-(double)borderWidth;
-(UIView *)border;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(id)initWithButtons:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forButtonAtIndex:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)setDelegate:(id<AVTToolBarDelegate>)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setupView;
-(UIVisualEffectView *)visualEffectView;
-(BOOL)isAnimating;
-(id<AVTToolBarDelegate>)delegate;
-(void)setBorder:(UIView *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(id)buttonWithTitle:(id)arg1 isDefault:(BOOL)arg2 ;
-(void)setupBorder;
@end
