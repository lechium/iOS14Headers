/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray, NSLayoutConstraint;

@interface HUGridActionSetTitleAndDescriptionView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	double _titleDescriptionLineSpacing;
	NSArray* _titleAndDescriptionConstraints;
	NSLayoutConstraint* _titleDescriptionSpacingConstraint;

}

@property (nonatomic,retain) NSArray * titleAndDescriptionConstraints;                            //@synthesize titleAndDescriptionConstraints=_titleAndDescriptionConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleDescriptionSpacingConstraint;              //@synthesize titleDescriptionSpacingConstraint=_titleDescriptionSpacingConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) double titleDescriptionLineSpacing;                                  //@synthesize titleDescriptionLineSpacing=_titleDescriptionLineSpacing - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 titleLabelSuperview:(id)arg2 ;
-(void)updateTitleText:(id)arg1 descriptionText:(id)arg2 ;
-(double)titleDescriptionLineSpacing;
-(void)setTitleDescriptionLineSpacing:(double)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(NSArray *)titleAndDescriptionConstraints;
-(void)setTitleAndDescriptionConstraints:(NSArray *)arg1 ;
-(void)setTitleDescriptionSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleDescriptionSpacingConstraint;
-(void)setTitleAndDescriptionLabelTintColor:(id)arg1 ;
@end

