/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSDictionary, NSString, NSArray, NSURL;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) NSString * processedFileType; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (readonly) NSString * rawFileType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoRedEyeReductionEnabled,nonatomic) BOOL autoRedEyeReductionEnabled; 
@property (assign,nonatomic) long long photoQualityPrioritization; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoVirtualDeviceFusionEnabled,nonatomic) BOOL autoVirtualDeviceFusionEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) BOOL autoDualCameraFusionEnabled; 
@property (nonatomic,copy) NSArray * virtualDeviceConstituentPhotoDeliveryEnabledDevices; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) BOOL highResolutionPhotoEnabled; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsDepthDataInPhoto; 
@property (assign,getter=isDepthDataFiltered,nonatomic) BOOL depthDataFiltered; 
@property (assign,getter=isCameraCalibrationDataDeliveryEnabled,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled; 
@property (assign,getter=isPortraitEffectsMatteDeliveryEnabled,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsPortraitEffectsMatteInPhoto; 
@property (nonatomic,copy) NSArray * enabledSemanticSegmentationMatteTypes; 
@property (assign,nonatomic) BOOL embedsSemanticSegmentationMattesInPhoto; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSString * livePhotoVideoCodecType; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableRawEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * rawEmbeddedThumbnailPhotoFormat; 
+(void)initialize;
+(long long)uniqueID;
+(id)photoSettings;
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)burstQualityPhotoSettings;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 ;
+(id)photoSettingsFromPhotoInitiationSettings:(id)arg1 format:(id)arg2 ;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
+(id)photoSettingsFromMomentCaptureSettings:(id)arg1 withFormat:(id)arg2 ;
-(id)videoFormat;
-(void)setHDRMode:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(NSDictionary *)format;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)digitalFlashMode;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(long long)photoQualityPrioritization;
-(NSDictionary *)metadata;
-(id)debugDescription;
-(id)spatialOverCaptureGroupIdentifier;
-(void)dealloc;
-(void)setEnabledSemanticSegmentationMatteTypes:(NSArray *)arg1 ;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(BOOL)isAutoSpatialOverCaptureEnabled;
-(NSDictionary *)rawEmbeddedThumbnailPhotoFormat;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(NSArray *)virtualDeviceConstituentPhotoDeliveryEnabledDevices;
-(BOOL)isDepthDataFiltered;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSArray *)availableRawEmbeddedThumbnailPhotoCodecTypes;
-(NSArray *)availableEmbeddedThumbnailPhotoCodecTypes;
-(NSString *)processedFileType;
-(NSArray *)enabledSemanticSegmentationMatteTypes;
-(long long)uniqueID;
-(id)init;
-(long long)HDRMode;
-(unsigned)rawPhotoPixelFormatType;
-(NSString *)rawFileType;
-(BOOL)photoQualityPrioritizationIsSetByClient;
-(BOOL)embedsDepthDataInPhoto;
-(BOOL)embedsPortraitEffectsMatteInPhoto;
-(BOOL)embedsSemanticSegmentationMattesInPhoto;
-(NSString *)livePhotoVideoCodecType;
-(NSDictionary *)previewPhotoFormat;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(id)photoFilters;
-(id)adjustedPhotoFilters;
-(unsigned)shutterSound;
-(unsigned long long)userInitiatedPhotoRequestTime;
-(id)HEICSFileURL;
-(id)videoFileMetadata;
-(id)spatialOverCaptureMetadata;
-(id)livePhotoContentIdentifier;
-(id)spatialOverCaptureLivePhotoMovieFileURL;
-(id)spatialOverCaptureLivePhotoMovieMetadata;
-(id)spatialOverCaptureLivePhotoContentIdentifier;
-(id)spatialOverCaptureMetadataForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
-(id)spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
-(unsigned)formatFourCC;
-(id)spatialOverCaptureGroupIdentifierForOriginalPhoto;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(BOOL)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)_setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1 ;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setAutoVirtualDeviceFusionEnabled:(BOOL)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabledDevices:(NSArray *)arg1 ;
-(void)setHighResolutionPhotoEnabled:(BOOL)arg1 ;
-(void)setEmbedsDepthDataInPhoto:(BOOL)arg1 ;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(void)setEmbedsPortraitEffectsMatteInPhoto:(BOOL)arg1 ;
-(void)setEmbedsSemanticSegmentationMattesInPhoto:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoVideoCodecType:(NSString *)arg1 ;
-(void)setPhotoFilters:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(void)setEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(void)setRawEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setAdjustedPhotoFilters:(id)arg1 ;
-(void)setHEICSFileURL:(id)arg1 ;
-(void)setVideoFormat:(id)arg1 ;
-(void)setVideoFileMetadata:(id)arg1 ;
-(void)setAutoSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(void)setSpatialOverCaptureMetadata:(id)arg1 ;
-(void)setSpatialOverCaptureLivePhotoMovieFileURL:(id)arg1 ;
-(void)setSpatialOverCaptureLivePhotoMovieMetadata:(id)arg1 ;
-(void)setSpatialOverCaptureMetadataForOriginalPhoto:(id)arg1 ;
-(void)setSpatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setSpatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setProcessedPhotoZoomWithoutUpscalingEnabled:(BOOL)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setTurboModeEnabled:(BOOL)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(unsigned)embeddedThumbnailFormatFourCC;
-(unsigned)rawEmbeddedThumbnailFormatFourCC;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(BOOL)isAutoRedEyeReductionEnabled;
-(BOOL)isAutoDeferredProcessingEnabled;
-(void)setAutoDeferredProcessingEnabled:(BOOL)arg1 ;
-(void)_setPropertiesFromMomentCaptureSettings:(id)arg1 ;
-(BOOL)isTurboModeEnabled;
-(BOOL)isBurstQualityCaptureEnabled;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(BOOL)isAutoVirtualDeviceFusionEnabled;
-(CGSize)previewCGSize;
-(BOOL)isAutoDualCameraFusionEnabled;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(BOOL)isHighResolutionPhotoEnabled;
-(id)metadataForOriginalPhoto;
-(BOOL)isSquareCropEnabled;
-(unsigned)previewFormatFourCC;
-(CGSize)embeddedThumbnailCGSize;
-(CGSize)rawEmbeddedThumbnailCGSize;
-(BOOL)isProcessedPhotoZoomWithoutUpscalingEnabled;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(void)setVideoFileURL:(id)arg1 ;
-(NSURL *)livePhotoMovieFileURL;
-(id)description;
-(id)videoFileURL;
@end
