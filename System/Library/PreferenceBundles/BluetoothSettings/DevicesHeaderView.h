/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface DevicesHeaderView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * text;                                 //@synthesize text=_text - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(UILabel *)text;
-(void)setText:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSString *)name;
@end

