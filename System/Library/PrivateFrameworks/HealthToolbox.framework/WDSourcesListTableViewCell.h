/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

@interface WDSourcesListTableViewCell : UITableViewCell {

	HKSourceDataModel* _sourceModel;
	UIImageView* _iconImage;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
+(id)defaultReuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setSourceModel:(HKSourceDataModel *)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)iconImage;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(void)setIconImage:(UIImageView *)arg1 ;
-(HKSourceDataModel *)sourceModel;
-(void)setUpSubviews;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3 ;
@end

