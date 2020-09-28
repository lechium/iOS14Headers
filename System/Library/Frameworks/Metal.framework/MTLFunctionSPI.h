/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(NSString *)filePath;
-(long long)lineNumber;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(unsigned long long)renderTargetArrayIndexType;
-(NSArray *)arguments;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(MTLType *)returnType;
-(NSString *)unpackedFilePath;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(const SCD_Struct_MT19*)bitCodeHash;
-(id)bitcodeData;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;

@end
