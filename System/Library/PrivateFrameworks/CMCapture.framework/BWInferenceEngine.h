/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceResourceProvider.h>

@class BWInferenceScheduler, BWInferenceDependencyProvider, BWEspressoInferenceAdapter, BWEspressoInferenceContext, BWVisionInferenceAdapter, BWVisionInferenceContext, BWVideoProcessingInferenceAdapter, BWFigVideoCaptureDevice, BWFigCaptureISPProcessingSession, NSMutableArray, NSMutableDictionary, NSMutableSet, NSDictionary, NSString;

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider> {

	BWInferenceScheduler* _scheduler;
	unsigned long long _connection;
	unsigned _priority;
	BWInferenceDependencyProvider* _dependencyProvider;
	BWEspressoInferenceAdapter* _espressoAdapter;
	BWEspressoInferenceContext* _cpuContext;
	BWEspressoInferenceContext* _gpuContext;
	BWEspressoInferenceContext* _convContext;
	BWEspressoInferenceContext* _aneContext;
	BWVisionInferenceAdapter* _visionAdapter;
	BWVisionInferenceContext* _visionContext;
	BWVideoProcessingInferenceAdapter* _videoProcessingAdapter;
	BWFigVideoCaptureDevice* _captureDevice;
	BWFigCaptureISPProcessingSession* _ispProcessingSession;
	NSMutableArray* _inferenceRequirements;
	NSMutableArray* _videoRequirementsPossiblyReceivingAttachedMedia;
	NSMutableArray* _videoRequirementsPossiblyProvidingAttachedMedia;
	NSMutableDictionary* _lazyInputVideoRequirementsByAttachedMediaKey;
	NSMutableDictionary* _lazyOutputVideoRequirementsByAttachedMediaKey;
	NSMutableDictionary* _scalingRequirementByVideoFormatByAttachedMediaKey;
	NSMutableSet* _unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
	BOOL _requiresDeviceOrientationMetadata;

}

@property (nonatomic,copy,readonly) NSDictionary * providedVideoRequirementsByAttachedMediaKey; 
@property (nonatomic,readonly) BOOL requiresDeviceOrientationMetadata;                                       //@synthesize requiresDeviceOrientationMetadata=_requiresDeviceOrientationMetadata - In the implementation block
@property (getter=isConfiguredForInference,nonatomic,readonly) BOOL configuredForInference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(int)allowedPixelBufferCompressionType;
+(unsigned)allowedBufferCompressionDirectionForExecutionTarget:(int)arg1 ;
+(BOOL)isConvolutionEngineSupported;
+(BOOL)isNeuralEngineSupported;
-(id)espressoContextForExecutionTarget:(int)arg1 ;
-(int)prewarmInferencesUsingLimitedMemory:(BOOL)arg1 ;
-(int)prepareForInferenceWithFormatProvider:(id)arg1 ;
-(int)performInferencesOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)dealloc;
-(void)_invalidateProcessingSessionIfNecessary;
-(void)_prepareProvidedVideoRequirementsIfNecessary;
-(void)_prepareDependenciesByRequirementIfNecessary;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)_prepareProcessingSessionIfNecessary;
-(void)_addInferenceRequirementForProvider:(id)arg1 configuration:(id)arg2 ;
-(id)visionContextForExecutionTarget:(int)arg1 ;
-(BOOL)requiresDeviceOrientationMetadata;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 shareIntermediateBuffer:(BOOL)arg4 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW55)arg2 configuration:(id)arg3 ;
-(int)prepareForInputVideoFormat:(id)arg1 attachedMediaKey:(id)arg2 ;
-(NSDictionary *)providedVideoRequirementsByAttachedMediaKey;
-(BOOL)isConfiguredForInference;
-(int)performInferencesOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingResultsToSampleBuffer:(opaqueCMSampleBufferRef)arg2 skippingInferencesWithTypes:(id)arg3 ;
-(id)ispProcessingSessionForExecutionTarget:(int)arg1 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg1 ;
-(int)prepareForInferenceWithFormatProvider:(id)arg1 pixelBufferPoolProvider:(id)arg2 ;
@end
