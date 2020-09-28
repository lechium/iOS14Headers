/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Quagga.framework/Quagga
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLCommandBuffer;
#import <Quagga/Quagga-Structs.h>
@interface _MRCMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	id<MTLCommandBuffer> _currentCommandBuffer;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLLibrary> library;                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;                       //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLCommandBuffer> currentCommandBuffer;              //@synthesize currentCommandBuffer=_currentCommandBuffer - In the implementation block
-(id<MTLDevice>)device;
-(id<MTLLibrary>)library;
-(id<MTLCommandQueue>)commandQueue;
-(id)init;
-(id)beginCommandBufferWithError:(id*)arg1 ;
-(void)commitCommandBufferShouldWaitUntilCompleted:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 libraryURL:(id)arg2 error:(id*)arg3 ;
-(id)beginCommandBuffer;
-(void)commitCommandBuffer;
-(id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id)newTextureByBindingIOSurface:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 usage:(unsigned long long)arg5 plane:(unsigned long long)arg6 error:(id*)arg7 ;
-(id<MTLCommandBuffer>)currentCommandBuffer;
@end
