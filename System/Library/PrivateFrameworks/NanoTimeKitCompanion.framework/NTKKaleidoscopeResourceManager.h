/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSBundle, NTKPromise;

@interface NTKKaleidoscopeResourceManager : NSObject {

	NSBundle* _bundle;
	id<MTLDevice> _device;
	unsigned long long _clients;
	unsigned long long _viewMtlPixelFormat;
	NTKPromise* _renderPipelines[4][2];
	NTKPromise* _mtlBuffer;

}
+(void)_deallocInstance:(id)arg1 ;
+(id)sharedInstanceWithPixelFormat:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithPixelFormat:(unsigned long long)arg1 ;
-(void)_asyncDeallocInstance;
-(void)_loadMTLBufferData;
-(void)_loadPrograms;
-(void)addClient;
-(void)removeClient;
-(void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5 ;
-(id)getPipelineForShaderType:(unsigned long long)arg1 blending:(BOOL)arg2 ;
-(id)getGeometryBuffer;
@end
