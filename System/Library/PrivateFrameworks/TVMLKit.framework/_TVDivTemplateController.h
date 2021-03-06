/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, TVImageProxy, UIImageView, _TVOrganizerView, NSArray;

@interface _TVDivTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	TVImageProxy* _backgroundImageProxy;
	UIImageView* _backgroundImageView;
	_TVOrganizerView* _contentView;
	NSArray* _viewControllers;

}

@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) TVImageProxy * backgroundImageProxy;              //@synthesize backgroundImageProxy=_backgroundImageProxy - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) _TVOrganizerView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                          //@synthesize viewControllers=_viewControllers - In the implementation block
-(id)preferredFocusEnvironments;
-(void)setViewControllers:(NSArray *)arg1 ;
-(_TVOrganizerView *)contentView;
-(NSArray *)viewControllers;
-(void)viewDidLayoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setContentView:(_TVOrganizerView *)arg1 ;
-(void)loadView;
-(id)init;
-(void)_updateContentView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setBackgroundImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)backgroundImageProxy;
@end

