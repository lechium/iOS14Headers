/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSLayoutConstraint, UILabel, PSCapacityBarView, UIStackView, NSArray, PSCapacityBarLegendView, UIFont, UIColor, NSString;

@interface PSCapacityBarCell : PSTableCell {

	double _tableWidth;
	NSMutableArray* _normalConstraints;
	NSMutableArray* _largeConstraints;
	NSMutableArray* _legendConstraints;
	NSMutableArray* _commonConstraints;
	NSLayoutConstraint* _barHeightConstraint;
	UILabel* _titleLabel;
	UILabel* _sizeLabel;
	UILabel* _loadingLabel;
	PSCapacityBarView* _barView;
	UIStackView* _legendView;
	NSArray* _legends;
	PSCapacityBarLegendView* _otherLegend;
	UIFont* _legendFont;
	UIFont* _bigFont;
	UIColor* _legendTextColor;
	BOOL _hideLegend;
	BOOL _showOtherLegend;
	BOOL _forceLoading;
	BOOL _sizesAreMem;
	NSString* _sizeFormat;

}
+(id)specifierWithTitle:(id)arg1 ;
+(id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(BOOL)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)initializeViews;
-(id)usageString:(id)arg1 ;
-(void)createLargeConstraints;
-(void)createNormalConstraints;
-(void)createCommonConstraints;
-(void)addVerticalLegends;
-(void)addHorizontalLegends;
-(void)createLegends:(id)arg1 ;
@end

