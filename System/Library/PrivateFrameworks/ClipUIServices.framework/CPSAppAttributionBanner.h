/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, CPSLabelWithPlaceholder, CPSAppStoreButton, CPSHighlightForwardingButton, PLPlatterView, NSString, UIImage;

@interface CPSAppAttributionBanner : UIView {

	UIImageView* _iconView;
	UILabel* _supertitleLabel;
	CPSLabelWithPlaceholder* _titleLabel;
	CPSLabelWithPlaceholder* _subtitleLabel;
	CPSAppStoreButton* _appStoreButton;
	CPSHighlightForwardingButton* _overlayButton;
	PLPlatterView* _platterView;
	/*^block*/id _tapAction;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * supertitle; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) BOOL showsAppStoreButton; 
@property (nonatomic,copy) id tapAction;                            //@synthesize tapAction=_tapAction - In the implementation block
+(id)preferredImageDescriptor;
-(void)commonInit;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(UIImage *)icon;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)tapAction;
-(void)setTapAction:(id)arg1 ;
-(NSString *)supertitle;
-(void)setSupertitle:(NSString *)arg1 ;
-(void)setShowsAppStoreButton:(BOOL)arg1 ;
-(BOOL)showsAppStoreButton;
@end

