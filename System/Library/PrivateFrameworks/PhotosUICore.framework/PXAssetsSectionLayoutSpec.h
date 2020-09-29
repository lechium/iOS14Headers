/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXYearAssetsSectionConfigurator, PXMonthCardSectionConfigurator, PXMonthChapterSectionConfigurator, PXDayAssetsSectionConfigurator, PXAssetsSectionGridConfigurator, NSShadow, PXZoomablePhotosLayoutSpec;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec {

	PXYearAssetsSectionConfigurator* _yearSectionConfigurator;
	PXMonthCardSectionConfigurator* _monthSectionConfigurator;
	PXMonthChapterSectionConfigurator* _monthsChapterConfigurator;
	PXDayAssetsSectionConfigurator* _daySectionConfigurator;
	PXAssetsSectionGridConfigurator* _gridConfigurator;
	NSShadow* _shadow;
	BOOL _userInterfaceStyleAllowsShadow;
	BOOL _disableConfigurators;
	PXZoomablePhotosLayoutSpec* _zoomableSpec;
	double _shadowCornerRadius;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) BOOL supportsGridAspectRatioToggle; 
@property (nonatomic,readonly) PXZoomablePhotosLayoutSpec * zoomableSpec;              //@synthesize zoomableSpec=_zoomableSpec - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) double shadowCornerRadius;                              //@synthesize shadowCornerRadius=_shadowCornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL userInterfaceStyleAllowsShadow;                    //@synthesize userInterfaceStyleAllowsShadow=_userInterfaceStyleAllowsShadow - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets padding;                                   //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) BOOL disableConfigurators;                              //@synthesize disableConfigurators=_disableConfigurators - In the implementation block
-(NSShadow *)shadow;
-(BOOL)supportsGridAspectRatioToggle;
-(double)shadowCornerRadius;
-(PXZoomablePhotosLayoutSpec *)zoomableSpec;
-(UIEdgeInsets)padding;
-(BOOL)userInterfaceStyleAllowsShadow;
-(id)_configuratorForZoomLevel:(long long)arg1 ;
-(BOOL)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)arg1 ;
-(BOOL)disableConfigurators;
-(long long)numberOfGridZoomStepsWithDataSource:(id)arg1 ;
-(id)sectionConfiguratorForAssetCollection:(id)arg1 inZoomLevel:(long long)arg2 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)gridConfigurator;
@end
