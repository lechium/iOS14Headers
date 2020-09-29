/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@protocol PXImportHistorySectionHeaderViewDelegate;
@class NSString, PXCuratedLibrarySectionHeaderLayoutSpec, UIImage, UILabel, UIButton, PXCuratedLibraryOverlayButton, UIVisualEffectView, UIImageView, UITraitCollection, UIControl;

@interface PXImportHistorySectionHeaderView : UICollectionReusableView <PXGReusableView> {

	struct {
		unsigned headerViewDidPressActionButton : 1;
	}  _delegateFlags;
	BOOL _showsActionButton;
	BOOL _actionButtonEnabled;
	BOOL _wantsBackground;
	BOOL _supportsMultipleLinesInCompactLayout;
	BOOL _inLayoutTransition;
	id<PXImportHistorySectionHeaderViewDelegate> _delegate;
	unsigned long long _buttonStyle;
	NSString* _actionText;
	PXCuratedLibrarySectionHeaderLayoutSpec* _backdropButtonSpec;
	unsigned long long _backgroundStyle;
	UIImage* _backgroundImage;
	double _backgroundImageAlpha;
	double _backgroundImageOverhang;
	NSString* _backdropViewGroupName;
	UILabel* _primaryLabel;
	UILabel* _spacerLabel;
	UILabel* _secondaryLabel;
	UIButton* _systemActionButton;
	PXCuratedLibraryOverlayButton* _backdropActionButton;
	UIVisualEffectView* _visualEffectView;
	UIImageView* _backgroundImageView;
	UITraitCollection* _selfSizingTraits;
	PXSimpleIndexPath _sectionIndexPath;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) id<NSCopying> userData; 
@property (assign,nonatomic) CGRect clippingRect; 
@property (nonatomic,retain) UILabel * primaryLabel;                                                    //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * spacerLabel;                                                     //@synthesize spacerLabel=_spacerLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                                  //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIButton * systemActionButton;                                             //@synthesize systemActionButton=_systemActionButton - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryOverlayButton * backdropActionButton;                      //@synthesize backdropActionButton=_backdropActionButton - In the implementation block
@property (nonatomic,readonly) UIControl * currentActionButton; 
@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;                                   //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundImageView;                                       //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) BOOL inLayoutTransition;                                                   //@synthesize inLayoutTransition=_inLayoutTransition - In the implementation block
@property (nonatomic,retain) UITraitCollection * selfSizingTraits;                                      //@synthesize selfSizingTraits=_selfSizingTraits - In the implementation block
@property (nonatomic,readonly) long long layoutMode; 
@property (assign,nonatomic,__weak) id<PXImportHistorySectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath sectionIndexPath;                                        //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,nonatomic) unsigned long long buttonStyle;                                            //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (assign,nonatomic) BOOL showsActionButton;                                                    //@synthesize showsActionButton=_showsActionButton - In the implementation block
@property (assign,nonatomic) BOOL actionButtonEnabled;                                                  //@synthesize actionButtonEnabled=_actionButtonEnabled - In the implementation block
@property (nonatomic,copy) NSString * actionText;                                                       //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,retain) PXCuratedLibrarySectionHeaderLayoutSpec * backdropButtonSpec;              //@synthesize backdropButtonSpec=_backdropButtonSpec - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsBackground;                                                      //@synthesize wantsBackground=_wantsBackground - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) double backgroundImageAlpha;                                               //@synthesize backgroundImageAlpha=_backgroundImageAlpha - In the implementation block
@property (assign,nonatomic) double backgroundImageOverhang;                                            //@synthesize backgroundImageOverhang=_backgroundImageOverhang - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                                            //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL supportsMultipleLinesInCompactLayout;                                 //@synthesize supportsMultipleLinesInCompactLayout=_supportsMultipleLinesInCompactLayout - In the implementation block
@property (nonatomic,readonly) double baselineToBottomSpacing; 
-(id<NSCopying>)userData;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setUserData:(id<NSCopying>)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(NSString *)backdropViewGroupName;
-(void)setButtonStyle:(unsigned long long)arg1 ;
-(void)_updateLabelFonts;
-(id)traitCollection;
-(void)setSectionIndexPath:(PXSimpleIndexPath)arg1 ;
-(UIImage *)backgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackdropViewGroupName;
-(void)setActionText:(NSString *)arg1 ;
-(double)heightForSizeClass:(long long)arg1 width:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(UILabel *)primaryLabel;
-(void)setBackgroundImageOverhang:(double)arg1 ;
-(void)setBackgroundImageAlpha:(double)arg1 ;
-(void)setWantsBackground:(BOOL)arg1 ;
-(void)setWantsBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)baselineToBottomSpacing;
-(unsigned long long)buttonStyle;
-(BOOL)wantsBackground;
-(double)backgroundImageOverhang;
-(double)backgroundImageAlpha;
-(BOOL)showsActionButton;
-(unsigned long long)backgroundStyle;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<PXImportHistorySectionHeaderViewDelegate>)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(NSString *)primaryText;
-(BOOL)actionButtonEnabled;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)actionText;
-(void)becomeReusable;
-(id<PXImportHistorySectionHeaderViewDelegate>)delegate;
-(void)setSelfSizingTraits:(UITraitCollection *)arg1 ;
-(UIControl *)currentActionButton;
-(void)setBackdropButtonSpec:(PXCuratedLibrarySectionHeaderLayoutSpec *)arg1 ;
-(BOOL)_wantsActionButton;
-(void)_updateActionButtonEnabledAnimated:(BOOL)arg1 ;
-(void)_updateActionButtonConfiguration;
-(void)_updateSystemActionButton;
-(void)_updateBackdropActionButton;
-(void)setSupportsMultipleLinesInCompactLayout:(BOOL)arg1 ;
-(void)_updateWithCurrentTraits;
-(void)_updateLabelLineNumbers;
-(void)_updateSpacerLabelHiddenState;
-(long long)layoutModeForHorizontalSizeClass:(long long)arg1 ;
-(PXCuratedLibrarySectionHeaderLayoutSpec *)backdropButtonSpec;
-(UILabel *)spacerLabel;
-(BOOL)supportsMultipleLinesInCompactLayout;
-(void)setSpacerLabel:(UILabel *)arg1 ;
-(UIButton *)systemActionButton;
-(void)setSystemActionButton:(UIButton *)arg1 ;
-(PXCuratedLibraryOverlayButton *)backdropActionButton;
-(void)setBackdropActionButton:(PXCuratedLibraryOverlayButton *)arg1 ;
-(BOOL)inLayoutTransition;
-(void)setInLayoutTransition:(BOOL)arg1 ;
-(UITraitCollection *)selfSizingTraits;
-(void)_updateLabelColors;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)_updateActionButton;
-(long long)layoutMode;
-(CGRect)clippingRect;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(PXSimpleIndexPath)sectionIndexPath;
-(UILabel *)secondaryLabel;
-(void)setActionButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)setShowsActionButton:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end
