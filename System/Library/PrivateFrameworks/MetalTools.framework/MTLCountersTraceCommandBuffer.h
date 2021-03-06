/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <MetalTools/MetalTools-Structs.h>
@class NSMutableArray;

@interface MTLCountersTraceCommandBuffer : NSObject {

	BinaryBuffer* _commands;
	NSMutableArray* _encoders;
	AppendBuffer* _samples;
	unsigned long long _flags;
	unsigned long long _timestamp;

}
-(void)waitUntilScheduled;
-(void)presentDrawable:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)waitUntilCompleted;
-(void)dealloc;
-(id)renderCommandEncoder;
-(id)init:(BOOL)arg1 ;
-(id)resourceStateCommandEncoder;
-(id)blitCommandEncoder;
-(id)computeCommandEncoder;
-(void)appendSamples:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)saveCommandBuffer:(const void*)arg1 queue:(id)arg2 profilingResults:(id)arg3 ;
@end

