/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

@interface WDMedicalRecordMultilineTextCell : UITableViewCell {

	NSAttributedString* _text;
	UILabel* _label;
	UIView* _background;

}

@property (nonatomic,retain) UILabel * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * background;                    //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)_setupSubviews;
-(void)setBackground:(UIView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(UIView *)background;
@end
