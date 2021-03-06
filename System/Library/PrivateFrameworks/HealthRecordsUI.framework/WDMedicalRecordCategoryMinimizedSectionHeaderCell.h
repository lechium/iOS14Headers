/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKGradientView, NSLayoutConstraint, HKGradient;

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell {

	HKGradientView* _backgroundGradientView;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) HKGradientView * backgroundGradientView;              //@synthesize backgroundGradientView=_backgroundGradientView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) HKGradient * gradient; 
+(id)_titleLabelFont;
+(double)_pillBackgroundViewHeightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_cornerRadius;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setupSubviews;
-(HKGradient *)gradient;
-(void)setBackgroundGradientView:(HKGradientView *)arg1 ;
-(HKGradientView *)backgroundGradientView;
-(void)setGradient:(HKGradient *)arg1 ;
-(void)_updateForCurrentSizeCategory;
@end

