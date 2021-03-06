/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSString;

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	double _height;
	UIView* _backgroundImageView;
	UIView* _infoListView;
	UIView* _stackView;
	UIView* _heroImageView;

}

@property (nonatomic,retain) UIView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIView * infoListView;                     //@synthesize infoListView=_infoListView - In the implementation block
@property (nonatomic,retain) UIView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * heroImageView;                    //@synthesize heroImageView=_heroImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIView *)stackView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundImageView;
-(void)setBackgroundImageView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)heroImageView;
-(void)setHeroImageView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStackView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIView *)infoListView;
-(void)setInfoListView:(UIView *)arg1 ;
@end

