/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewListCell.h>

@class NSArray, UILayoutGuide;

@interface _UICollectionViewListCell : UICollectionViewListCell {

	long long __backgroundViewConfigurationGrouping;

}

@property (assign,nonatomic) long long selectionStyle; 
@property (assign,setter=_setBackgroundViewConfigurationGrouping:,nonatomic) long long _backgroundViewConfigurationGrouping;              //@synthesize _backgroundViewConfigurationGrouping=__backgroundViewConfigurationGrouping - In the implementation block
@property (assign,nonatomic) BOOL expanded; 
@property (nonatomic,copy) NSArray * leadingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * trailingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * leadingEditingAccessoryConfigurations; 
@property (nonatomic,copy) NSArray * trailingEditingAccessoryConfigurations; 
@property (assign,nonatomic) BOOL indentsLeadingAccessories; 
@property (nonatomic,readonly) UILayoutGuide * _separatorLayoutGuide; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(UILayoutGuide *)_separatorLayoutGuide;
-(unsigned long long)_maskedCornersForSystemBackgroundView;
-(void)setIndentsLeadingAccessories:(BOOL)arg1 ;
-(BOOL)indentsLeadingAccessories;
-(void)_setBackgroundViewConfigurationGrouping:(long long)arg1 ;
-(long long)_backgroundViewConfigurationGrouping;
-(long long)accessoryTypeForAxis:(long long)arg1 ;
-(id)_configurationForListAccessoryType:(long long)arg1 ;
-(void)_setAccessoryConfigurations:(id)arg1 forAxis:(long long)arg2 ;
-(id)_customViewForAccessoryConfiguration:(id)arg1 ;
-(id)accessoryViewForAxis:(long long)arg1 ;
-(void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2 ;
-(void)setAccessoryView:(id)arg1 forAxis:(long long)arg2 ;
@end

