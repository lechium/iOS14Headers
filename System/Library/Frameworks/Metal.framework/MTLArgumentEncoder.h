/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLArgumentEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@required
-(id<MTLDevice>)device;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(unsigned long long)alignment;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
-(void*)constantDataAtIndex:(unsigned long long)arg1;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setComputePipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
-(void)setVisibleFunctionTables:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIntersectionFunctionTables:(const id*)arg1 withRange:(NSRange)arg2;

@end

