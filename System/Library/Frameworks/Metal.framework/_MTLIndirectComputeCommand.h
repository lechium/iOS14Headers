/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLIndirectComputeCommandSPI.h>

@class NSString;

@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComputePipelineState:(id)arg1 ;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)reset;
-(void)setStageInRegion:(SCD_Struct_MT51)arg1 ;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void)setBarrier;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT31)arg1 threadsPerThreadgroup:(SCD_Struct_MT31)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT31)arg1 threadsPerThreadgroup:(SCD_Struct_MT31)arg2 ;
-(void)clearBarrier;
-(BOOL)hasBarrier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1 ;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MT51)getStageInRegion;
-(id)getImageBlockSize;
-(void)setKernelArgument:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
@end

