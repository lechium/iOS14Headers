/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class NSString, UIImageView, UILabel;

@interface AppRecommendations.AppRecommendationsTileViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	 context;
	 iconImageView;
	 titleLabel;
	 descriptionLabel;
	 accessoryImageView;
	 useDefaultIcon;
	 appIdentifier;

}

@property (readonly,nonatomic) NSString * description; 
@property (assign,__weak,nonatomic) UIImageView * iconImageView; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * descriptionLabel; 
@property (assign,__weak,nonatomic) UIImageView * accessoryImageView; 
-(void)productViewControllerDidFinish:(id)arg1 ;
-(NSString *)description;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIImageView *)accessoryImageView;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)openAppStore:(id)arg1 ;
@end
