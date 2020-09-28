/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLIndirectArgumentEncoder.h>

@interface IOGPUMetalIndirectArgumentEncoder : _MTLIndirectArgumentEncoder

@property (readonly) unsigned long long encodedLength; 
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)encodedLength;
-(void*)constantDataAtIndex:(unsigned long long)arg1 ;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setVisibleFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIntersectionFunctionTables:(const id*)arg1 withRange:(NSRange)arg2 ;
@end
