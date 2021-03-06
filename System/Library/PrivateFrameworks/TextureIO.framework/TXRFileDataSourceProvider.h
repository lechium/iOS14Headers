/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRDataSourceProvider.h>

@protocol TXRBufferAllocator, OS_dispatch_queue, OS_dispatch_semaphore, TXRParser;
@class NSObject, TXRTextureInfo, NSString;

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider> {

	id<TXRBufferAllocator> _bufferAllocator;
	NSObject*<OS_dispatch_queue> _fileIOQueue;
	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	id<TXRParser> _parser;
	TXRTextureInfo* _textureInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)provideTextureInfo;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(unsigned long long)_determineFileType:(id)arg1 ;
-(id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

