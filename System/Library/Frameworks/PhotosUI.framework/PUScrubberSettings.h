/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUScrubberSettings : PXSettings {

	BOOL _usePreviewScrubberMargins;
	BOOL _useTrianglePositionIndicator;
	BOOL _useSmoothingAnimation;
	BOOL _dynamicSeekTolerance;
	unsigned long long _previewInteractiveLoupeBehavior;
	unsigned long long _interactiveLoupeBehavior;
	double _tapAnimationDuration;
	double _smoothingAnimationDuration;
	double _settleAnimationDuration;
	double _settleRequiredDecelerationDistance;
	double _decelerationTargetExpansionDistance;
	double _verticalMargin;
	double _topOutset;
	double _slitAspectRatio;
	double _maxAspectRatio;
	double _interItemSpacing;
	double _interSectionSpacing;
	double _minVideoDuration;
	double _baseVideoWidth;
	double _filmstripAspectRatio;
	long long _defaultPlaybackIndicator;
	long long _initialPlaybackIndicator;
	long long _scrubbingPlaybackIndicator;
	long long _chromeShownPlaybackIndicator;
	long long _playingPlaybackIndicator;

}

@property (assign,nonatomic) unsigned long long previewInteractiveLoupeBehavior;              //@synthesize previewInteractiveLoupeBehavior=_previewInteractiveLoupeBehavior - In the implementation block
@property (assign,nonatomic) BOOL usePreviewScrubberMargins;                                  //@synthesize usePreviewScrubberMargins=_usePreviewScrubberMargins - In the implementation block
@property (assign,nonatomic) BOOL useTrianglePositionIndicator;                               //@synthesize useTrianglePositionIndicator=_useTrianglePositionIndicator - In the implementation block
@property (assign,nonatomic) unsigned long long interactiveLoupeBehavior;                     //@synthesize interactiveLoupeBehavior=_interactiveLoupeBehavior - In the implementation block
@property (assign,nonatomic) double tapAnimationDuration;                                     //@synthesize tapAnimationDuration=_tapAnimationDuration - In the implementation block
@property (assign,nonatomic) double smoothingAnimationDuration;                               //@synthesize smoothingAnimationDuration=_smoothingAnimationDuration - In the implementation block
@property (assign,nonatomic) double settleAnimationDuration;                                  //@synthesize settleAnimationDuration=_settleAnimationDuration - In the implementation block
@property (assign,nonatomic) double settleRequiredDecelerationDistance;                       //@synthesize settleRequiredDecelerationDistance=_settleRequiredDecelerationDistance - In the implementation block
@property (assign,nonatomic) double decelerationTargetExpansionDistance;                      //@synthesize decelerationTargetExpansionDistance=_decelerationTargetExpansionDistance - In the implementation block
@property (assign,nonatomic) double verticalMargin;                                           //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (assign,nonatomic) double topOutset;                                                //@synthesize topOutset=_topOutset - In the implementation block
@property (assign,nonatomic) double slitAspectRatio;                                          //@synthesize slitAspectRatio=_slitAspectRatio - In the implementation block
@property (assign,nonatomic) double maxAspectRatio;                                           //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                                         //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double interSectionSpacing;                                      //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (assign,nonatomic) BOOL useSmoothingAnimation;                                      //@synthesize useSmoothingAnimation=_useSmoothingAnimation - In the implementation block
@property (assign,nonatomic) double minVideoDuration;                                         //@synthesize minVideoDuration=_minVideoDuration - In the implementation block
@property (assign,nonatomic) double baseVideoWidth;                                           //@synthesize baseVideoWidth=_baseVideoWidth - In the implementation block
@property (assign,nonatomic) double filmstripAspectRatio;                                     //@synthesize filmstripAspectRatio=_filmstripAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL dynamicSeekTolerance;                                       //@synthesize dynamicSeekTolerance=_dynamicSeekTolerance - In the implementation block
@property (assign,nonatomic) long long defaultPlaybackIndicator;                              //@synthesize defaultPlaybackIndicator=_defaultPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long initialPlaybackIndicator;                              //@synthesize initialPlaybackIndicator=_initialPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long scrubbingPlaybackIndicator;                            //@synthesize scrubbingPlaybackIndicator=_scrubbingPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long chromeShownPlaybackIndicator;                          //@synthesize chromeShownPlaybackIndicator=_chromeShownPlaybackIndicator - In the implementation block
@property (assign,nonatomic) long long playingPlaybackIndicator;                              //@synthesize playingPlaybackIndicator=_playingPlaybackIndicator - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSlitAspectRatio:(double)arg1 ;
-(void)setBaseVideoWidth:(double)arg1 ;
-(void)setPlayingPlaybackIndicator:(long long)arg1 ;
-(double)settleAnimationDuration;
-(void)setVerticalMargin:(double)arg1 ;
-(void)setSettleAnimationDuration:(double)arg1 ;
-(unsigned long long)previewInteractiveLoupeBehavior;
-(void)setMaxAspectRatio:(double)arg1 ;
-(double)minVideoDuration;
-(double)tapAnimationDuration;
-(void)setTopOutset:(double)arg1 ;
-(double)topOutset;
-(void)setUseSmoothingAnimation:(BOOL)arg1 ;
-(double)settleRequiredDecelerationDistance;
-(double)smoothingAnimationDuration;
-(unsigned long long)interactiveLoupeBehavior;
-(void)setChromeShownPlaybackIndicator:(long long)arg1 ;
-(void)setFilmstripAspectRatio:(double)arg1 ;
-(double)maxAspectRatio;
-(void)setInterSectionSpacing:(double)arg1 ;
-(void)setScrubbingPlaybackIndicator:(long long)arg1 ;
-(BOOL)useSmoothingAnimation;
-(void)setMinVideoDuration:(double)arg1 ;
-(void)setSettleRequiredDecelerationDistance:(double)arg1 ;
-(BOOL)useTrianglePositionIndicator;
-(long long)playingPlaybackIndicator;
-(double)interSectionSpacing;
-(void)setInteractiveLoupeBehavior:(unsigned long long)arg1 ;
-(void)setTapAnimationDuration:(double)arg1 ;
-(long long)chromeShownPlaybackIndicator;
-(double)interItemSpacing;
-(BOOL)usePreviewScrubberMargins;
-(void)setDecelerationTargetExpansionDistance:(double)arg1 ;
-(double)baseVideoWidth;
-(double)decelerationTargetExpansionDistance;
-(long long)scrubbingPlaybackIndicator;
-(void)setInterItemSpacing:(double)arg1 ;
-(long long)defaultPlaybackIndicator;
-(void)setUseTrianglePositionIndicator:(BOOL)arg1 ;
-(void)setDynamicSeekTolerance:(BOOL)arg1 ;
-(double)slitAspectRatio;
-(void)setUsePreviewScrubberMargins:(BOOL)arg1 ;
-(long long)initialPlaybackIndicator;
-(double)filmstripAspectRatio;
-(void)setDefaultPlaybackIndicator:(long long)arg1 ;
-(void)setSmoothingAnimationDuration:(double)arg1 ;
-(id)parentSettings;
-(void)setPreviewInteractiveLoupeBehavior:(unsigned long long)arg1 ;
-(BOOL)dynamicSeekTolerance;
-(void)setInitialPlaybackIndicator:(long long)arg1 ;
-(double)verticalMargin;
@end

