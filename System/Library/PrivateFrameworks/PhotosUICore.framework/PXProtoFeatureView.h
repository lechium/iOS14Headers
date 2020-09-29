/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXProtoMutableFeatureView.h>

@protocol PXProtoFeature;
@class UIImageView, UIView, UIColor, NSString;

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _selected;
	BOOL _disabled;
	BOOL _shouldUpdateContentOnResize;
	id<PXProtoFeature> _feature;
	UIImageView* __removeIconView;
	UIView* _contentView;
	UIEdgeInsets _minimumMargins;

}

@property (nonatomic,readonly) UIImageView * _removeIconView;                       //@synthesize _removeIconView=__removeIconView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double recommendedCompactContentHeight; 
@property (nonatomic,readonly) BOOL wantsContentView; 
@property (nonatomic,readonly) BOOL shouldUpdateContentOnResize;                    //@synthesize shouldUpdateContentOnResize=_shouldUpdateContentOnResize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets minimumMargins;                         //@synthesize minimumMargins=_minimumMargins - In the implementation block
@property (nonatomic,readonly) CGSize regularContentSize; 
@property (nonatomic,readonly) CGSize compactContentSize; 
@property (nonatomic,readonly) id<PXProtoFeature> feature;                          //@synthesize feature=_feature - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                     //@synthesize selected=_selected - In the implementation block
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled;                     //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UIColor * preferredBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisabled:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)updateContent;
-(void)_updateIfNeeded;
-(BOOL)isDisabled;
-(CGSize)intrinsicContentSize;
-(void)_setNeedsUpdate;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isSelected;
-(CGRect)_contentViewFrame;
-(UIEdgeInsets)_contentInsets;
-(void)_invalidateContent;
-(UIEdgeInsets)minimumMargins;
-(CGSize)regularContentSize;
-(CGSize)compactContentSize;
-(id<PXProtoFeature>)feature;
-(void)setFeature:(id<PXProtoFeature>)arg1 ;
-(double)recommendedCompactContentHeight;
-(UIColor *)preferredBackgroundColor;
-(BOOL)wantsContentView;
-(void)_updateContentIfNeeded;
-(UIImageView *)_removeIconView;
-(BOOL)shouldUpdateContentOnResize;
-(BOOL)_needsUpdate;
@end
