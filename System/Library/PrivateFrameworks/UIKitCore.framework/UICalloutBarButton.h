/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UITextReplacement;

@interface UICalloutBarButton : UIButton {

	SEL m_action;
	int m_position;
	int m_type;
	UITextReplacement* m_textReplacement;
	double m_contentWidth;
	double m_contentScale;
	double m_additionalContentHeight;
	double m_dividerOffset;
	double m_imageVerticalAdjust;
	long long m_page;
	BOOL m_isText;
	BOOL m_configured;
	BOOL m_single;
	BOOL m_padLeft;
	BOOL m_padRight;
	BOOL m_dontDismiss;
	BOOL forceFlash;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) double additionalContentHeight; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) BOOL forceFlash; 
@property (assign,nonatomic) long long page; 
@property (assign,nonatomic) double dividerOffset; 
@property (assign,nonatomic) double imageVerticalAdjust; 
@property (assign,nonatomic) BOOL dontDismiss; 
@property (nonatomic,retain) UITextReplacement * textReplacement; 
+(BOOL)_cursorInteractionEnabled;
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6 ;
+(id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
+(id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
-(void)removeFromSuperview;
-(void)flash;
-(void)setPage:(long long)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(double)contentWidth;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(long long)page;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(SEL)action;
-(void)dealloc;
-(BOOL)forceFlash;
-(void)layoutSubviews;
-(int)type;
-(void)configureLabel;
-(void)setForceFlash:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)_scaleFactorForImage;
-(void)cancelFlash;
-(BOOL)dontDismiss;
-(void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 ;
-(double)dividerOffset;
-(void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2 ;
-(CGRect)adjustRectForPosition:(CGRect)arg1 scaleRect:(BOOL)arg2 ;
-(void)fadeAndSendAction;
-(void)configureForLeftPosition:(int)arg1 ;
-(void)configureForSingle:(int)arg1 ;
-(double)additionalContentHeight;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition:(int)arg1 ;
-(UITextReplacement *)textReplacement;
-(void)setTextReplacement:(UITextReplacement *)arg1 ;
-(void)setDividerOffset:(double)arg1 ;
-(double)imageVerticalAdjust;
-(void)setImageVerticalAdjust:(double)arg1 ;
-(void)setDontDismiss:(BOOL)arg1 ;
-(double)contentScale;
-(void)setContentScale:(double)arg1 ;
@end

