/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface MCItemDetailsSummaryCell : UITableViewCell {

	NSArray* _detailViews;
	double _detailLabelOriginX;

}

@property (nonatomic,retain) NSArray * detailViews;                  //@synthesize detailViews=_detailViews - In the implementation block
@property (assign,nonatomic) double detailLabelOriginX;              //@synthesize detailLabelOriginX=_detailLabelOriginX - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)createViewWithDescriptors:(id)arg1 ;
-(NSArray *)detailViews;
-(void)setDetailViews:(NSArray *)arg1 ;
-(void)setDetailLabelOriginX:(double)arg1 ;
-(void)createViewWithItemDetailArray:(id)arg1 ;
-(double)detailLabelOriginX;
@end

