/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableImageLayerModulator_Private.h>

@class CALayer, CAFilter, NSString;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX94 _needsUpdateFlags;
	BOOL _displayingVideoComplement;
	BOOL _enabled;
	float _hdrGain;
	CALayer* _layer;
	long long _filterType;
	CAFilter* _filter;
	NSString* _layerFilterIntensityKeyPath;
	CALayer* _filteredLayer;
	double _intensityAnimationDuration;
	double _intensity;
	SCD_Struct_PX109 _options;

}

@property (nonatomic,readonly) SCD_Struct_PX109 options;                                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long filterType;                                                           //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) float hdrGain;                                                                  //@synthesize hdrGain=_hdrGain - In the implementation block
@property (nonatomic,readonly) CAFilter * filter;                                                              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSString * layerFilterIntensityKeyPath;                                           //@synthesize layerFilterIntensityKeyPath=_layerFilterIntensityKeyPath - In the implementation block
@property (nonatomic,retain) CALayer * filteredLayer;                                                          //@synthesize filteredLayer=_filteredLayer - In the implementation block
@property (assign,nonatomic) double intensityAnimationDuration;                                                //@synthesize intensityAnimationDuration=_intensityAnimationDuration - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double intensity;                                                               //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                                                //@synthesize layer=_layer - In the implementation block
@property (getter=isDisplayingVideoComplement,nonatomic,readonly) BOOL displayingVideoComplement;              //@synthesize displayingVideoComplement=_displayingVideoComplement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayer:(CALayer *)arg1 ;
-(CALayer *)layer;
-(void)_updateIfNeeded;
-(CAFilter *)filter;
-(void)setFilterType:(long long)arg1 ;
-(void)setIntensity:(double)arg1 ;
-(float)hdrGain;
-(void)_setNeedsUpdate;
-(BOOL)isEnabled;
-(void)setHdrGain:(float)arg1 ;
-(SCD_Struct_PX109)options;
-(void)prepareForReuse;
-(void)dealloc;
-(long long)filterType;
-(void)performChanges_Private:(/*^block*/id)arg1 ;
-(void)_updateFilter;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)animateChangesWithDuration:(double)arg1 ;
-(void)removeFilterFromUnownedLayer:(id)arg1 ;
-(void)setFilteredLayer:(CALayer *)arg1 ;
-(void)setDisplayingVideoComplement:(BOOL)arg1 ;
-(void)_addFilterToLayer:(id)arg1 ;
-(void)_removeFilterFromLayer:(id)arg1 ;
-(void)_invalidateFilterInput;
-(void)_updateFilterInput;
-(void)_invalidateFilter;
-(void)_invalidateFilteredLayer;
-(void)_updateFilteredLayerIfNeeded;
-(void)_invalidateFilterIntensity;
-(void)_updateFilterIntensityIfNeeded;
-(BOOL)isDisplayingVideoComplement;
-(NSString *)layerFilterIntensityKeyPath;
-(void)setLayerFilterIntensityKeyPath:(NSString *)arg1 ;
-(CALayer *)filteredLayer;
-(double)intensityAnimationDuration;
-(void)setIntensityAnimationDuration:(double)arg1 ;
-(id)init;
-(id)initWithOptions:(SCD_Struct_PX109)arg1 ;
-(void)setFilter:(CAFilter *)arg1 ;
-(double)intensity;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
@end
