/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSString, NSArray;


@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) BOOL disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@required
-(id<MTLDevice>)device;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(NSArray *)pipelineNames;
-(void)setDisableRunTimeCompilation:(BOOL)arg1;
-(id<MTLPipelineCache>)pipelineCache;
-(BOOL)disableRunTimeCompilation;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(id<MTLPipelineCache>)functionCache;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;

@end
