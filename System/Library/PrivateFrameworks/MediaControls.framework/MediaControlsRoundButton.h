/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class NSString, MTVisualStylingProvider, CCUICAPackageView, UILabel;

@interface MediaControlsRoundButton : UIControl <MTVisualStylingProviderObservingPrivate> {

	BOOL _labelHidden;
	NSString* _title;
	NSString* _packageName;
	NSString* _glyphState;
	MTVisualStylingProvider* _visualStylingProvider;
	long long _axis;
	CCUICAPackageView* _packageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) CCUICAPackageView * packageView;                              //@synthesize packageView=_packageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * packageName;                                         //@synthesize packageName=_packageName - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                          //@synthesize glyphState=_glyphState - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (assign,nonatomic) long long axis;                                               //@synthesize axis=_axis - In the implementation block
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isLabelHidden,nonatomic) BOOL labelHidden;                        //@synthesize labelHidden=_labelHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(NSString *)packageName;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setLabelHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLabelHidden;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)glyphState;
-(void)setGlyphState:(NSString *)arg1 ;
-(CCUICAPackageView *)packageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)imageFrame;
-(void)setPackageView:(CCUICAPackageView *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPackageName:(NSString *)arg1 ;
-(void)_updateLabelVisualStyling;
-(void)_updatePackageColors;
@end
