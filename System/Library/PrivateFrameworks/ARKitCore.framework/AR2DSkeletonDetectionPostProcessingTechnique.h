/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonDetectionResult, NSObject, AR2DSkeletonRawEspressoResult;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {

	AR2DSkeletonDetectionPostProcessGPU* _postProcessorGPU;
	SkeletonJointFilter<float>* _extrapolationFilter2D;
	double _extrapolationTime;
	SkeletonJointFilter<float>* _extrapolationFilter2DForLiftingData;
	AR2DSkeletonDetectionResult* _previous3DSkeleton;
	NSObject*<OS_dispatch_semaphore> _previous3DSkeletonSemaphore;
	BOOL _shouldPush3DSupportSkeleton;
	BOOL _use3DSupportSkeletonForExtrapolation;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _deterministic;
	AR2DSkeletonRawEspressoResult* _previousRawEspressoResult;

}

@property (nonatomic,retain) AR2DSkeletonRawEspressoResult * previousRawEspressoResult;              //@synthesize previousRawEspressoResult=_previousRawEspressoResult - In the implementation block
-(id)processData:(id)arg1 ;
-(id)init;
-(void)prepare:(BOOL)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(AR2DSkeletonRawEspressoResult *)previousRawEspressoResult;
-(void)setPreviousRawEspressoResult:(AR2DSkeletonRawEspressoResult *)arg1 ;
@end

