/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(unsigned long long)tileHeight;
-(BOOL)isDitherEnabled;
-(unsigned long long)imageblockSampleLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(void)setPointCoordYFlipEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setRenderTargetArrayLength:(unsigned long long)arg1 ;
-(void)setSamplePositions:(const SCD_Struct_MT96*)arg1 count:(unsigned long long)arg2 ;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(id)init;
-(id)sampleBufferAttachments;
-(unsigned long long)renderTargetWidth;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(void)setDefaultRasterSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)defaultRasterSampleCount;
-(BOOL)openGLModeEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)pointCoordYFlipEnabled;
-(id)depthAttachment;
-(unsigned long long)tileWidth;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(unsigned long long)renderTargetHeight;
-(id)stencilAttachment;
-(unsigned long long)defaultColorSampleCount;
-(void)setRasterizationRateMap:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)renderTargetArrayLength;
-(id)colorAttachments;
-(id)rasterizationRateMap;
-(unsigned long long)threadgroupMemoryLength;
-(id)visibilityResultBuffer;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT96*)arg1 count:(unsigned long long)arg2 ;
-(void)setDefaultColorSampleCount:(unsigned long long)arg1 ;
-(id)description;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(void)setVisibilityResultBuffer:(id)arg1 ;
@end
