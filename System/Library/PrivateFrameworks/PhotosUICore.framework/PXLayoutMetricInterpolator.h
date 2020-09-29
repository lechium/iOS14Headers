/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {

	SCD_Struct_PX38 _needsUpdateFlags;
	NSMutableArray* __referenceValuesByMetrics;
	double __cachedMetric;
	NSValue* __cachedValue;

}

@property (nonatomic,readonly) NSMutableArray * _referenceValuesByMetrics;                //@synthesize _referenceValuesByMetrics=__referenceValuesByMetrics - In the implementation block
@property (assign,setter=_setCachedMetric:,nonatomic) double _cachedMetric;               //@synthesize _cachedMetric=__cachedMetric - In the implementation block
@property (setter=_setCachedValue:,nonatomic,retain) NSValue * _cachedValue;              //@synthesize _cachedValue=__cachedValue - In the implementation block
+(id)_sharedGridEdgeInsetsInterpolator;
+(CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double*)arg4 bestInset:(double*)arg5 ;
+(id)memoriesItemWidthInterpolator;
+(id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+(id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)arg1 ;
+(id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+(id)legacyLayoutMarginWidthInterpolator;
+(id)layoutMarginWidthInterpolator;
+(id)allLayoutMetricConfigurationSizes;
+(id)memoriesFeedInteritemSpacingInterpolator;
+(id)gadgetColumnWidthSpanSingleSetAInterpolator;
+(id)memoriesFeedPortraitEdgeInsetsInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+(id)_sharedGridItemWidthInterpolator;
+(unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1 ;
+(id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+(CGSize)zoomableGridLayoutSmallItemSizeForWidth:(double)arg1 ;
+(id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+(id)albumsGridItemWidthInterpolator;
+(id)memoriesDetailsEdgeInsetsInterpolator;
+(id)albumsGridEdgeInsetsInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+(long long)photosGridSizeSubclassForScreenSize:(CGSize)arg1 ;
-(void)_setCachedMetric:(double)arg1 ;
-(double)_cachedMetric;
-(void)setReferenceValue:(double)arg1 forMetric:(double)arg2 ;
-(NSValue *)_cachedValue;
-(void)_setNeedsUpdate;
-(double)valueForMetric:(double)arg1 ;
-(id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3 ;
-(NSMutableArray *)_referenceValuesByMetrics;
-(void)_setCachedValue:(id)arg1 ;
-(void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4 ;
-(id)init;
-(void)_updateReferenceValuesByMetricsOrderIfNeeded;
-(void)_invalidateReferenceValuesByMetricsOrder;
-(id)description;
@end
