/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	SCD_Struct_UI34 _datePickerContentViewFlags;
	UILabel* _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelMaxX;                 //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
-(BOOL)isAmPm;
-(_UIDatePickerMode *)mode;
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)titleLabelMaxX;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(BOOL)_canBeReusedInPickerView;
-(long long)titleAlignment;
-(id)initWithMode:(id)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
@end
