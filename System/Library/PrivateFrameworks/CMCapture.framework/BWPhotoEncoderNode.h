/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FigCapturePixelConverter, NSDictionary, BWInferenceEngine, NSString;

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {

	NSObject*<OS_dispatch_queue> _previewGenerationQueue;
	NSObject*<OS_dispatch_queue> _prewarmQueue;
	NSObject*<OS_dispatch_group> _previewGenerationGroup;
	FigCapturePixelConverter* _previewPixelConverter;
	FigCapturePixelConverter* _thumbnailPixelConverter;
	FigCapturePixelConverter* _clientThumbnailPixelConverter;
	BOOL _cameraSupportsFlash;
	BOOL _zeroShutterLagEnabled;
	FigPhotoCompressionSessionRef _compressionSession;
	FigCapturePixelConverter* _jpegPixelConverter;
	int _portraitRenderQuality;
	NSDictionary* _inputColorInfo;
	BOOL _usesHighEncodingPriority;
	unsigned long long _heifThumbnailMaxPixelSize;
	float _heifQualityOverride;
	BOOL _heifForceEmbedThumb;
	BOOL _heifForceCABAC;
	BOOL _heifForceHEVC;
	BOOL _heifUseTiling;
	int _heifTileWidth;
	int _heifTileHeight;
	long long _prewarmedSettingsID;
	BOOL _allowHEIFPrewarming;
	BOOL _prewarmingOngoing;
	float _segmentationDownscalingFactor;
	void* _prewarmQueueID;
	BWInferenceEngine* _inferenceEngine;
	BOOL _preparedInferenceEngine;
	AB _opportunisticInferenceCompleted;
	BOOL _alwaysAwaitInference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_updateMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 scaleFactor:(float)arg3 ;
+(CGRect)_cropRectForSampleBuffer:(opaqueCMSampleBufferRef)arg1 scaleFactorOut:(float*)arg2 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)inputColorInfo;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithNodeConfiguration:(id)arg1 personSegmentationEnabled:(BOOL)arg2 inferenceScheduler:(id)arg3 portraitRenderQuality:(int)arg4 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(int)_containerFormatForEncodingScheme:(int)arg1 ;
-(id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned)arg2 ;
-(BOOL)_addDepthFromSampleBufferIfAvailable:(opaqueCMSampleBufferRef)arg1 ;
-(id)nodeType;
-(BOOL)usesHighEncodingPriority;
-(void)setSegmentationDownscalingFactor:(float)arg1 ;
-(BOOL)_addPortraitEffectsMatteFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)_performInferenceWithBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(IOSurfaceRef)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1 ;
-(int)_resolveEncodingSchemeForRequestedSettings:(id)arg1 captureSettings:(id)arg2 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 toDimensions:(SCD_Struct_BW2)arg2 colorSpaceProperties:(int)arg3 cropRect:(CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(_CVBuffer*)arg7 ;
-(BOOL)cameraSupportsFlash;
-(int)_defaultJPEGIndexedQTableForPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(BOOL*)arg5 ;
-(int)_encodePhotoForEncodingScheme:(int)arg1 pixelBuffer:(CVBufferRef)arg2 imageDimensions:(SCD_Struct_BW2)arg3 metadata:(id)arg4 thumbnailOptions:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 cropRect:(CGRect)arg8 usePixelsOutsideCrop:(BOOL)arg9 outputSurfaceImageSize:(CGSize*)arg10 ;
-(void)_addQualityOptionsToDictionary:(id)arg1 codecType:(unsigned)arg2 pixelBuffer:(CVBufferRef)arg3 imageDimensions:(SCD_Struct_BW2)arg4 metadata:(id)arg5 requestedStillImageCaptureSettings:(id)arg6 resolvedStillImageCaptureSettings:(id)arg7 enableHEIFTiling:(BOOL)arg8 enableHEIFOrientation:(BOOL)arg9 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned)_codecTypeForEncodingScheme:(int)arg1 ;
-(int)_addThumbnailToJPEGImageFromBuffer:(CVBufferRef)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(CGRect)arg5 codecType:(unsigned)arg6 maxPixelSize:(unsigned long long)arg7 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)_arrayInColumnMajorOrderFrom3x3MatrixData:(SCD_Struct_BW81)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1 ;
-(float)segmentationDownscalingFactor;
-(int)_addSemanticMatteSampleBuffer:(opaqueCMSampleBufferRef)arg1 withCustomURN:(id)arg2 ;
-(BOOL)_isSupportedThumbnailCodecType:(unsigned)arg1 forEncodingScheme:(int)arg2 ;
-(int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned)arg4 ;
-(id)_stringFromEncodingScheme:(int)arg1 ;
-(void)setInputColorInfo:(id)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(int)_fileTypeForEncodingScheme:(int)arg1 ;
-(BOOL)_addSemanticMattesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(int)_generatePreviewForSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(CGRect)arg3 previewPixelBuffer:(_CVBuffer*)arg4 ;
-(CGImageMetadataRef)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1 ;
-(id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)setCameraSupportsFlash:(BOOL)arg1 ;
-(void)setUsesHighEncodingPriority:(BOOL)arg1 ;
-(id)_arrayInColumnMajorOrderFrom3x4MatrixData:(SCD_Struct_BW14)arg1 ;
-(int)_addValue:(id)arg1 toAuxiliaryImageProperties:(CGImageMetadataRef)arg2 namespace:(CFStringRef)arg3 prefix:(CFStringRef)arg4 key:(CFStringRef)arg5 ;
-(int)_addMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 ;
-(id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(CGRect)arg4 codecType:(unsigned)arg5 maxPixelSize:(unsigned long long)arg6 ;
@end

