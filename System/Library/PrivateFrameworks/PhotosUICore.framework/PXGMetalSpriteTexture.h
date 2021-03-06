/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXGColorProgram;


@protocol PXGMetalSpriteTexture <PXGSpriteTexture>
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex; 
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@required
-(id<MTLTexture>)chromaTexture;
-(int)shaderFlags;
-(PXGColorProgram *)colorProgram;
-(void)setRenderPipelineIndex:(long long)arg1;
-(id<MTLTexture>)texture;
-(BOOL)isCaptureTexture;
-(BOOL)isAtlas;
-(void)cleanupAfterRender:(long long)arg1;
-(void)prepareForRender:(long long)arg1;
-(long long)renderPipelineIndex;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7;

@end

