/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleDepth/AppleDepth-Structs.h>
#import <AppleDepth/ADExecutor.h>

@class ADJasperColorPipeline, ADLKTExecutor, ADCameraCalibration, ADJasperColorExecutorParameters;

@interface ADJasperColorExecutor : ADExecutor {

	ADJasperColorPipeline* _pipeline;
	ADLKTExecutor* _lktExecutor;
	CVBufferRef _itmCroppedScaledColor;
	CVBufferRef _itmRotatedColor;
	CVBufferRef _itmPreProcessedColor;
	CVBufferRef _itmPreProcessedJasper;
	CVBufferRef _itmUnprocessedDepth;
	CVBufferRef _itmPostProcessedDepth;
	CVBufferRef _itmUnprocessedConf;
	CVBufferRef _itmPostProcessedConf;
	CVBufferRef _itmUnprocessedNormals;
	CVBufferRef _itmPostProcessedNormals;
	CVBufferRef _itmUnprocessedAlpha;
	CVBufferRef _itmWarpedPrevDepth;
	CVBufferRef _itmWarpedPrevConf;
	CVBufferRef _itmOpticalFlow;
	CVBufferRef _itmPrevProcessedFusedDepth;
	CVBufferRef _itmCurrProcessedFusedDepth;
	CVBufferRef _itmPrevProcessedFusedConf;
	CVBufferRef _itmCurrProcessedFusedConf;
	CVBufferRef _itmPrevProcessedFusedNormals;
	CVBufferRef _itmCurrProcessedFusedNormals;
	BOOL _firstTimeExecution;
	BOOL _opticalFlowEnabled;
	SCD_Struct_AD1 _prevPose;
	ADCameraCalibration* _prevCamCalib;
	ADJasperColorExecutorParameters* _executorParameters;

}

@property (nonatomic,retain) ADJasperColorExecutorParameters * executorParameters;              //@synthesize executorParameters=_executorParameters - In the implementation block
-(void)dealloc;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)getIntermediates;
-(long long)numberOfExecutionSteps;
-(void)deallocateEspressoBuffers;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 useTemporalConsistency:(BOOL)arg4 rotationPreference:(unsigned long long)arg5 ;
-(long long)allocateIntermediateBuffers;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 outNormalsMap:(_CVBuffer*)arg5 worldToCameraTransform:(SCD_Struct_AD1)arg6 cameraCalibration:(id)arg7 ;
-(ADJasperColorExecutorParameters *)executorParameters;
-(long long)prepareForEngineType:(unsigned long long)arg1 roi:(CGRect)arg2 exifOrientation:(unsigned)arg3 useTemporalConsistency:(BOOL)arg4 ;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 ;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 worldToCameraTransform:(SCD_Struct_AD1)arg5 cameraCalibration:(id)arg6 ;
-(long long)executeWithColor:(CVBufferRef)arg1 pointCloud:(id)arg2 outDepthMap:(_CVBuffer*)arg3 outConfMap:(_CVBuffer*)arg4 outNormalsMap:(_CVBuffer*)arg5 ;
-(void)setExecutorParameters:(ADJasperColorExecutorParameters *)arg1 ;
@end

