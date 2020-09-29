/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUPhotoEditProtoSettings : PXSettings {

	BOOL _enableCoreImageDebugMode;
	BOOL _enableCoreImageDebugInputs;
	BOOL _enableCoreImageDebugOutputs;
	BOOL _enableCoreImageDebugIntermediates;
	BOOL _enableCoreImageDebugTiming;
	BOOL _enableModernPipeline;
	BOOL _enableVideoStabilizion;
	BOOL _enableFinalizerGesture;
	BOOL _useAsynchronousRenderingPhotos;
	BOOL _disableAsynchronousRenderingVideos;
	BOOL _enableLiveVideoRender;
	BOOL _enablePerfDebugHUD;
	BOOL _enableReframeDebugHUD;
	BOOL _enablePerfTTRButton;
	BOOL _alwaysShowPortraitV2;
	BOOL _showResetToolButton;
	BOOL _allowAnyPlugin;
	BOOL _attemptEditExtensionUndoAutoSetup;
	BOOL _cropMaskBlurred;
	BOOL _autoCropEnabled;
	BOOL _perspectiveViewDebugCropEnabled;
	BOOL _autoPerspectiveDisableOnPanos;
	BOOL _autoPerspectiveDisableOnFrontFacingCameraImages;
	BOOL _simulateDownload;
	BOOL _simulateDownloadFailure;
	BOOL _skipPHContentEditingInputDisplaySizeImage;
	BOOL _simulateEditEntryError;
	BOOL _showFileRadarButtonForEditEntryOnInternalInstalls;
	BOOL _previewOriginalTimesOut;
	BOOL _loopBounceTrimAllowed;
	BOOL _pauseAfterMovingPlayhead;
	BOOL _alwaysAllowKeyPhotoEditing;
	BOOL _showEffectsPicker;
	BOOL _allowApertureRedEye;
	BOOL _requireTapToShowMakePosterFrame;
	BOOL _allowMakePosterFrameForVideo;
	BOOL _showVideoScrubberDebugOverlay;
	BOOL _alwaysShowValueWhenAdjustmentIsSelected;
	BOOL _showSuggestedKeyFrame;
	BOOL _enableEnterEditSmartToneAutoCalc;
	BOOL _enableEnterEditSmartColorAutoCalc;
	BOOL _enableEnterEditCropAutoCalc;
	BOOL _enableEnterEditPerspectiveAutoCalc;
	BOOL _enableEnterEditDepthEffectAutoCalc;
	BOOL _enableEnterEditPortraitAutoCalc;
	BOOL _enableEnterEditFilterThumbnailGeneration;
	BOOL _useCALayerTileAssembly;
	BOOL _runNeutrinoSynchronously;
	BOOL _showSmartBlackAndWhiteAdjustment;
	BOOL _showStabilizationWatermark;
	BOOL _applyVideoOrientationAsMetadata;
	double _videoStabilizeMaxCropFraction;
	long long _renderPriority;
	double _ttrButtonDurationThreshold;
	double _cropSideMargins;
	double _cropWheelSize;
	double _trackBallSize;
	double _cropRecomposeDelay;
	double _autoStraightenMaxAngle;
	double _autoPerspectiveMaxYaw;
	double _autoPerspectiveMaxPitch;
	double _autoPerspectiveMaxAngle;
	double _autoPerspectiveMaxFaceSize;
	long long _simulatedEditingEntryErrorType;
	double _previewOriginalDuration;
	double _strokeWidth;
	double _selectionRingStrokeWidth;
	double _adjustmentLabelPlatterAlpha;
	unsigned long long _videoCompositorDebugMode;

}

@property (assign,nonatomic) BOOL enableCoreImageDebugMode;                                       //@synthesize enableCoreImageDebugMode=_enableCoreImageDebugMode - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugInputs;                                     //@synthesize enableCoreImageDebugInputs=_enableCoreImageDebugInputs - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugOutputs;                                    //@synthesize enableCoreImageDebugOutputs=_enableCoreImageDebugOutputs - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugIntermediates;                              //@synthesize enableCoreImageDebugIntermediates=_enableCoreImageDebugIntermediates - In the implementation block
@property (assign,nonatomic) BOOL enableCoreImageDebugTiming;                                     //@synthesize enableCoreImageDebugTiming=_enableCoreImageDebugTiming - In the implementation block
@property (assign,nonatomic) BOOL enableModernPipeline;                                           //@synthesize enableModernPipeline=_enableModernPipeline - In the implementation block
@property (assign,nonatomic) BOOL enableVideoStabilizion;                                         //@synthesize enableVideoStabilizion=_enableVideoStabilizion - In the implementation block
@property (assign,nonatomic) double videoStabilizeMaxCropFraction;                                //@synthesize videoStabilizeMaxCropFraction=_videoStabilizeMaxCropFraction - In the implementation block
@property (assign,nonatomic) BOOL enableFinalizerGesture;                                         //@synthesize enableFinalizerGesture=_enableFinalizerGesture - In the implementation block
@property (assign,nonatomic) long long renderPriority;                                            //@synthesize renderPriority=_renderPriority - In the implementation block
@property (assign,nonatomic) BOOL useAsynchronousRenderingPhotos;                                 //@synthesize useAsynchronousRenderingPhotos=_useAsynchronousRenderingPhotos - In the implementation block
@property (assign,nonatomic) BOOL disableAsynchronousRenderingVideos;                             //@synthesize disableAsynchronousRenderingVideos=_disableAsynchronousRenderingVideos - In the implementation block
@property (assign,nonatomic) BOOL enableLiveVideoRender;                                          //@synthesize enableLiveVideoRender=_enableLiveVideoRender - In the implementation block
@property (assign,nonatomic) BOOL enablePerfDebugHUD;                                             //@synthesize enablePerfDebugHUD=_enablePerfDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL enableReframeDebugHUD;                                          //@synthesize enableReframeDebugHUD=_enableReframeDebugHUD - In the implementation block
@property (assign,nonatomic) BOOL enablePerfTTRButton;                                            //@synthesize enablePerfTTRButton=_enablePerfTTRButton - In the implementation block
@property (assign,nonatomic) double ttrButtonDurationThreshold;                                   //@synthesize ttrButtonDurationThreshold=_ttrButtonDurationThreshold - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowPortraitV2;                                           //@synthesize alwaysShowPortraitV2=_alwaysShowPortraitV2 - In the implementation block
@property (assign,nonatomic) BOOL showResetToolButton;                                            //@synthesize showResetToolButton=_showResetToolButton - In the implementation block
@property (assign,nonatomic) BOOL allowAnyPlugin;                                                 //@synthesize allowAnyPlugin=_allowAnyPlugin - In the implementation block
@property (assign,nonatomic) BOOL attemptEditExtensionUndoAutoSetup;                              //@synthesize attemptEditExtensionUndoAutoSetup=_attemptEditExtensionUndoAutoSetup - In the implementation block
@property (assign,nonatomic) double cropSideMargins;                                              //@synthesize cropSideMargins=_cropSideMargins - In the implementation block
@property (assign,nonatomic) double cropWheelSize;                                                //@synthesize cropWheelSize=_cropWheelSize - In the implementation block
@property (assign,nonatomic) BOOL cropMaskBlurred;                                                //@synthesize cropMaskBlurred=_cropMaskBlurred - In the implementation block
@property (assign,nonatomic) BOOL autoCropEnabled;                                                //@synthesize autoCropEnabled=_autoCropEnabled - In the implementation block
@property (assign,nonatomic) double trackBallSize;                                                //@synthesize trackBallSize=_trackBallSize - In the implementation block
@property (assign,nonatomic) BOOL perspectiveViewDebugCropEnabled;                                //@synthesize perspectiveViewDebugCropEnabled=_perspectiveViewDebugCropEnabled - In the implementation block
@property (assign,nonatomic) double cropRecomposeDelay;                                           //@synthesize cropRecomposeDelay=_cropRecomposeDelay - In the implementation block
@property (assign,nonatomic) double autoStraightenMaxAngle;                                       //@synthesize autoStraightenMaxAngle=_autoStraightenMaxAngle - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxYaw;                                        //@synthesize autoPerspectiveMaxYaw=_autoPerspectiveMaxYaw - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxPitch;                                      //@synthesize autoPerspectiveMaxPitch=_autoPerspectiveMaxPitch - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxAngle;                                      //@synthesize autoPerspectiveMaxAngle=_autoPerspectiveMaxAngle - In the implementation block
@property (assign,nonatomic) double autoPerspectiveMaxFaceSize;                                   //@synthesize autoPerspectiveMaxFaceSize=_autoPerspectiveMaxFaceSize - In the implementation block
@property (assign,nonatomic) BOOL autoPerspectiveDisableOnPanos;                                  //@synthesize autoPerspectiveDisableOnPanos=_autoPerspectiveDisableOnPanos - In the implementation block
@property (assign,nonatomic) BOOL autoPerspectiveDisableOnFrontFacingCameraImages;                //@synthesize autoPerspectiveDisableOnFrontFacingCameraImages=_autoPerspectiveDisableOnFrontFacingCameraImages - In the implementation block
@property (assign,nonatomic) BOOL simulateDownload;                                               //@synthesize simulateDownload=_simulateDownload - In the implementation block
@property (assign,nonatomic) BOOL simulateDownloadFailure;                                        //@synthesize simulateDownloadFailure=_simulateDownloadFailure - In the implementation block
@property (assign,nonatomic) BOOL skipPHContentEditingInputDisplaySizeImage;                      //@synthesize skipPHContentEditingInputDisplaySizeImage=_skipPHContentEditingInputDisplaySizeImage - In the implementation block
@property (assign,nonatomic) BOOL simulateEditEntryError;                                         //@synthesize simulateEditEntryError=_simulateEditEntryError - In the implementation block
@property (assign,nonatomic) long long simulatedEditingEntryErrorType;                            //@synthesize simulatedEditingEntryErrorType=_simulatedEditingEntryErrorType - In the implementation block
@property (assign,nonatomic) BOOL showFileRadarButtonForEditEntryOnInternalInstalls;              //@synthesize showFileRadarButtonForEditEntryOnInternalInstalls=_showFileRadarButtonForEditEntryOnInternalInstalls - In the implementation block
@property (assign,nonatomic) BOOL previewOriginalTimesOut;                                        //@synthesize previewOriginalTimesOut=_previewOriginalTimesOut - In the implementation block
@property (assign,nonatomic) double previewOriginalDuration;                                      //@synthesize previewOriginalDuration=_previewOriginalDuration - In the implementation block
@property (assign,nonatomic) BOOL loopBounceTrimAllowed;                                          //@synthesize loopBounceTrimAllowed=_loopBounceTrimAllowed - In the implementation block
@property (assign,nonatomic) BOOL pauseAfterMovingPlayhead;                                       //@synthesize pauseAfterMovingPlayhead=_pauseAfterMovingPlayhead - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowKeyPhotoEditing;                                     //@synthesize alwaysAllowKeyPhotoEditing=_alwaysAllowKeyPhotoEditing - In the implementation block
@property (assign,nonatomic) BOOL showEffectsPicker;                                              //@synthesize showEffectsPicker=_showEffectsPicker - In the implementation block
@property (assign,nonatomic) BOOL allowApertureRedEye;                                            //@synthesize allowApertureRedEye=_allowApertureRedEye - In the implementation block
@property (assign,nonatomic) BOOL requireTapToShowMakePosterFrame;                                //@synthesize requireTapToShowMakePosterFrame=_requireTapToShowMakePosterFrame - In the implementation block
@property (assign,nonatomic) BOOL allowMakePosterFrameForVideo;                                   //@synthesize allowMakePosterFrameForVideo=_allowMakePosterFrameForVideo - In the implementation block
@property (assign,nonatomic) BOOL showVideoScrubberDebugOverlay;                                  //@synthesize showVideoScrubberDebugOverlay=_showVideoScrubberDebugOverlay - In the implementation block
@property (assign,nonatomic) double strokeWidth;                                                  //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) double selectionRingStrokeWidth;                                     //@synthesize selectionRingStrokeWidth=_selectionRingStrokeWidth - In the implementation block
@property (assign,nonatomic) double adjustmentLabelPlatterAlpha;                                  //@synthesize adjustmentLabelPlatterAlpha=_adjustmentLabelPlatterAlpha - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowValueWhenAdjustmentIsSelected;                        //@synthesize alwaysShowValueWhenAdjustmentIsSelected=_alwaysShowValueWhenAdjustmentIsSelected - In the implementation block
@property (assign,nonatomic) BOOL showSuggestedKeyFrame;                                          //@synthesize showSuggestedKeyFrame=_showSuggestedKeyFrame - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditSmartToneAutoCalc;                               //@synthesize enableEnterEditSmartToneAutoCalc=_enableEnterEditSmartToneAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditSmartColorAutoCalc;                              //@synthesize enableEnterEditSmartColorAutoCalc=_enableEnterEditSmartColorAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditCropAutoCalc;                                    //@synthesize enableEnterEditCropAutoCalc=_enableEnterEditCropAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditPerspectiveAutoCalc;                             //@synthesize enableEnterEditPerspectiveAutoCalc=_enableEnterEditPerspectiveAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditDepthEffectAutoCalc;                             //@synthesize enableEnterEditDepthEffectAutoCalc=_enableEnterEditDepthEffectAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditPortraitAutoCalc;                                //@synthesize enableEnterEditPortraitAutoCalc=_enableEnterEditPortraitAutoCalc - In the implementation block
@property (assign,nonatomic) BOOL enableEnterEditFilterThumbnailGeneration;                       //@synthesize enableEnterEditFilterThumbnailGeneration=_enableEnterEditFilterThumbnailGeneration - In the implementation block
@property (assign,nonatomic) BOOL useCALayerTileAssembly;                                         //@synthesize useCALayerTileAssembly=_useCALayerTileAssembly - In the implementation block
@property (assign,nonatomic) BOOL runNeutrinoSynchronously;                                       //@synthesize runNeutrinoSynchronously=_runNeutrinoSynchronously - In the implementation block
@property (assign,nonatomic) BOOL showSmartBlackAndWhiteAdjustment;                               //@synthesize showSmartBlackAndWhiteAdjustment=_showSmartBlackAndWhiteAdjustment - In the implementation block
@property (assign,nonatomic) BOOL showStabilizationWatermark;                                     //@synthesize showStabilizationWatermark=_showStabilizationWatermark - In the implementation block
@property (assign,nonatomic) BOOL applyVideoOrientationAsMetadata;                                //@synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long videoCompositorDebugMode;                         //@synthesize videoCompositorDebugMode=_videoCompositorDebugMode - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(double)strokeWidth;
-(BOOL)enablePerfTTRButton;
-(double)trackBallSize;
-(long long)simulatedEditingEntryErrorType;
-(void)setDefaultValues;
-(void)setEnableCoreImageDebugInputs:(BOOL)arg1 ;
-(void)setAutoPerspectiveDisableOnFrontFacingCameraImages:(BOOL)arg1 ;
-(void)setSimulateEditEntryError:(BOOL)arg1 ;
-(void)setEnablePerfTTRButton:(BOOL)arg1 ;
-(BOOL)cropMaskBlurred;
-(BOOL)allowAnyPlugin;
-(BOOL)runNeutrinoSynchronously;
-(BOOL)enableCoreImageDebugTiming;
-(void)setSimulateDownloadFailure:(BOOL)arg1 ;
-(void)setAutoPerspectiveMaxAngle:(double)arg1 ;
-(BOOL)enablePerfDebugHUD;
-(void)setPreviewOriginalTimesOut:(BOOL)arg1 ;
-(void)setEnableModernPipeline:(BOOL)arg1 ;
-(void)setDisableAsynchronousRenderingVideos:(BOOL)arg1 ;
-(BOOL)perspectiveViewDebugCropEnabled;
-(void)setAllowMakePosterFrameForVideo:(BOOL)arg1 ;
-(BOOL)showSmartBlackAndWhiteAdjustment;
-(BOOL)enableLiveVideoRender;
-(BOOL)enableEnterEditSmartToneAutoCalc;
-(BOOL)autoPerspectiveDisableOnFrontFacingCameraImages;
-(void)setRequireTapToShowMakePosterFrame:(BOOL)arg1 ;
-(void)setShowEffectsPicker:(BOOL)arg1 ;
-(BOOL)enableEnterEditCropAutoCalc;
-(double)ttrButtonDurationThreshold;
-(void)setSimulatedEditingEntryErrorType:(long long)arg1 ;
-(BOOL)showEffectsPicker;
-(BOOL)previewOriginalTimesOut;
-(void)setPerspectiveViewDebugCropEnabled:(BOOL)arg1 ;
-(unsigned long long)videoCompositorDebugMode;
-(void)setPauseAfterMovingPlayhead:(BOOL)arg1 ;
-(void)setApplyVideoOrientationAsMetadata:(BOOL)arg1 ;
-(void)setRenderPriority:(long long)arg1 ;
-(void)updateCoreImageDebug;
-(void)setAutoPerspectiveMaxPitch:(double)arg1 ;
-(BOOL)loopBounceTrimAllowed;
-(void)setAttemptEditExtensionUndoAutoSetup:(BOOL)arg1 ;
-(BOOL)allowMakePosterFrameForVideo;
-(void)setTtrButtonDurationThreshold:(double)arg1 ;
-(void)setAlwaysShowValueWhenAdjustmentIsSelected:(BOOL)arg1 ;
-(BOOL)enableEnterEditFilterThumbnailGeneration;
-(BOOL)allowApertureRedEye;
-(BOOL)enableEnterEditSmartColorAutoCalc;
-(BOOL)autoCropEnabled;
-(void)setSelectionRingStrokeWidth:(double)arg1 ;
-(void)setShowSuggestedKeyFrame:(BOOL)arg1 ;
-(void)setVideoStabilizeMaxCropFraction:(double)arg1 ;
-(BOOL)autoPerspectiveDisableOnPanos;
-(void)setShowFileRadarButtonForEditEntryOnInternalInstalls:(BOOL)arg1 ;
-(void)setAutoPerspectiveMaxYaw:(double)arg1 ;
-(BOOL)enableFinalizerGesture;
-(BOOL)simulateEditEntryError;
-(BOOL)enableEnterEditPerspectiveAutoCalc;
-(BOOL)showFileRadarButtonForEditEntryOnInternalInstalls;
-(void)setEnableCoreImageDebugOutputs:(BOOL)arg1 ;
-(double)cropWheelSize;
-(double)selectionRingStrokeWidth;
-(void)setEnableEnterEditPortraitAutoCalc:(BOOL)arg1 ;
-(void)setVideoCompositorDebugMode:(unsigned long long)arg1 ;
-(void)setEnableCoreImageDebugIntermediates:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugMode:(BOOL)arg1 ;
-(BOOL)enableCoreImageDebugIntermediates;
-(void)setEnableReframeDebugHUD:(BOOL)arg1 ;
-(BOOL)applyVideoOrientationAsMetadata;
-(void)setAutoStraightenMaxAngle:(double)arg1 ;
-(void)setRunNeutrinoSynchronously:(BOOL)arg1 ;
-(BOOL)enableReframeDebugHUD;
-(void)setShowSmartBlackAndWhiteAdjustment:(BOOL)arg1 ;
-(BOOL)enableCoreImageDebugOutputs;
-(BOOL)enableVideoStabilizion;
-(BOOL)showSuggestedKeyFrame;
-(void)setEnableFinalizerGesture:(BOOL)arg1 ;
-(void)setAutoCropEnabled:(BOOL)arg1 ;
-(void)setSimulateDownload:(BOOL)arg1 ;
-(BOOL)simulateDownload;
-(void)setEnableEnterEditCropAutoCalc:(BOOL)arg1 ;
-(void)setEnableEnterEditSmartToneAutoCalc:(BOOL)arg1 ;
-(BOOL)useCALayerTileAssembly;
-(BOOL)requireTapToShowMakePosterFrame;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setCropWheelSize:(double)arg1 ;
-(void)setAllowAnyPlugin:(BOOL)arg1 ;
-(double)adjustmentLabelPlatterAlpha;
-(void)setEnableLiveVideoRender:(BOOL)arg1 ;
-(BOOL)enableCoreImageDebugInputs;
-(double)autoPerspectiveMaxFaceSize;
-(BOOL)useAsynchronousRenderingPhotos;
-(double)autoStraightenMaxAngle;
-(void)setUseCALayerTileAssembly:(BOOL)arg1 ;
-(long long)renderPriority;
-(BOOL)pauseAfterMovingPlayhead;
-(double)cropSideMargins;
-(BOOL)enableEnterEditPortraitAutoCalc;
-(double)videoStabilizeMaxCropFraction;
-(void)setShowResetToolButton:(BOOL)arg1 ;
-(BOOL)enableModernPipeline;
-(void)setLoopBounceTrimAllowed:(BOOL)arg1 ;
-(BOOL)disableAsynchronousRenderingVideos;
-(void)setAlwaysShowPortraitV2:(BOOL)arg1 ;
-(void)setEnableCoreImageDebugTiming:(BOOL)arg1 ;
-(void)setPreviewOriginalDuration:(double)arg1 ;
-(BOOL)showStabilizationWatermark;
-(void)setCropSideMargins:(double)arg1 ;
-(void)setUseAsynchronousRenderingPhotos:(BOOL)arg1 ;
-(void)setShowVideoScrubberDebugOverlay:(BOOL)arg1 ;
-(void)setAlwaysAllowKeyPhotoEditing:(BOOL)arg1 ;
-(void)setAdjustmentLabelPlatterAlpha:(double)arg1 ;
-(BOOL)alwaysShowValueWhenAdjustmentIsSelected;
-(double)cropRecomposeDelay;
-(void)setEnablePerfDebugHUD:(BOOL)arg1 ;
-(BOOL)showResetToolButton;
-(void)setAllowApertureRedEye:(BOOL)arg1 ;
-(void)setTrackBallSize:(double)arg1 ;
-(BOOL)simulateDownloadFailure;
-(void)setEnableEnterEditSmartColorAutoCalc:(BOOL)arg1 ;
-(BOOL)attemptEditExtensionUndoAutoSetup;
-(void)setSkipPHContentEditingInputDisplaySizeImage:(BOOL)arg1 ;
-(void)setEnableVideoStabilizion:(BOOL)arg1 ;
-(double)autoPerspectiveMaxAngle;
-(void)setEnableEnterEditFilterThumbnailGeneration:(BOOL)arg1 ;
-(void)setShowStabilizationWatermark:(BOOL)arg1 ;
-(double)autoPerspectiveMaxYaw;
-(void)setCropMaskBlurred:(BOOL)arg1 ;
-(BOOL)enableEnterEditDepthEffectAutoCalc;
-(BOOL)skipPHContentEditingInputDisplaySizeImage;
-(BOOL)showVideoScrubberDebugOverlay;
-(BOOL)alwaysShowPortraitV2;
-(BOOL)alwaysAllowKeyPhotoEditing;
-(void)setAutoPerspectiveDisableOnPanos:(BOOL)arg1 ;
-(void)setCropRecomposeDelay:(double)arg1 ;
-(void)setEnableEnterEditDepthEffectAutoCalc:(BOOL)arg1 ;
-(id)parentSettings;
-(double)previewOriginalDuration;
-(void)setEnableEnterEditPerspectiveAutoCalc:(BOOL)arg1 ;
-(void)setAutoPerspectiveMaxFaceSize:(double)arg1 ;
-(BOOL)enableCoreImageDebugMode;
-(double)autoPerspectiveMaxPitch;
@end
