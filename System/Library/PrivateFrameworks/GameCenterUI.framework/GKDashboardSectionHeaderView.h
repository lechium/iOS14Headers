/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint, UIColor, NSString, UIFont;

@interface GKDashboardSectionHeaderView : UICollectionReusableView {

	BOOL _onDarkBackground;
	UILabel* _titleLabel;
	NSLayoutConstraint* _leftMarginConstraint;
	UIColor* _titleColor;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (nonatomic,retain) UIColor * titleColor;                                    //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * leftMarginConstraint;               //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                   //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
+(double)defaultHeight;
+(CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2 ;
+(double)widthForTitle:(id)arg1 withFont:(id)arg2 ;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)intrinsicContentSize;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(BOOL)onDarkBackground;
-(NSString *)title;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIFont *)font;
-(UIColor *)titleColor;
-(NSLayoutConstraint *)leftMarginConstraint;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
@end

