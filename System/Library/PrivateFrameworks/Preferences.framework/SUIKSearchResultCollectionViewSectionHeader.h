/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView {

	UIImageView* _categoryImageView;

}

@property (nonatomic,retain) UIImageView * categoryImageView;              //@synthesize categoryImageView=_categoryImageView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setCategoryImageView:(UIImageView *)arg1 ;
-(UIImageView *)categoryImageView;
-(void)setCategoryImage:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

