/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUIColorScheme, UILabel, NSString;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInsets;
	UILabel* _indexLabel;
	UILabel* _nameLabel;
	UILabel* _priceLabel;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * indexString; 
@property (nonatomic,copy) NSString * priceString; 
@property (nonatomic,copy) NSString * productName; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setProductName:(NSString *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(NSString *)productName;
-(void)layoutSubviews;
-(NSString *)priceString;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)indexString;
-(void)setIndexString:(NSString *)arg1 ;
-(void)setPriceString:(NSString *)arg1 ;
@end

