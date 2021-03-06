/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLComputePipelineState, MTLResourceGroupSPI;
@interface CVAFilterInfimumConvolution : ImageSaverRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLPipelineLibrarySPI> _pipelineLibrary;
	unsigned long long _width;
	unsigned long long _height;
	id<MTLTexture> _tmpBlurHalf;
	id<MTLTexture> _tmpOutHalf[2];
	id<MTLComputePipelineState> _infimumKernel;
	id<MTLComputePipelineState> _infimumConvolutionKernel;
	id<MTLResourceGroupSPI> _tmpTextureGroup;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 bufferWidth:(unsigned long long)arg4 bufferHeight:(unsigned long long)arg5 error:(id*)arg6 ;
-(void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 config:(InfimumConvolutionConfigRef)arg4 ;
-(void)encodeInfimumToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 orientation:(float)arg5 majorRadius:(float)arg6 minorRadius:(float)arg7 iterations:(unsigned)arg8 ;
@end

