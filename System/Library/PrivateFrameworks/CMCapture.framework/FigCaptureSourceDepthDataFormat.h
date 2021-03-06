/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:22 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) SCD_Struct_BW2 dimensions; 
@property (readonly) float minSupportedFrameRate; 
@property (readonly) float maxSupportedFrameRate; 
@property (readonly) float fieldOfView; 
@property (readonly) SCD_Struct_BW2 highResStillImageDimensions; 
@property (getter=isStillImageOnlyDepthData,readonly) BOOL stillImageOnlyDepthData; 
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor; 
@property (readonly) BOOL RGBIRStereoFusionSupported; 
@property (readonly) NSArray * supportedSemanticSegmentationMatteURNs; 
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(SCD_Struct_BW2)highResStillImageDimensions;
-(float)minSupportedFrameRate;
-(float)maxSupportedFrameRate;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(NSArray *)supportedSemanticSegmentationMatteURNs;
-(id)copyWithNewPixelFormat:(unsigned)arg1 ;
-(float)fieldOfView;
-(SCD_Struct_BW2)dimensions;
-(BOOL)isStillImageOnlyDepthData;
-(SCD_Struct_BW2)depthEngineOutputDimensions;
-(BOOL)RGBIRStereoFusionSupported;
@end

