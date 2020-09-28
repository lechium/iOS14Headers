/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSNDArray.h>

@protocol MTLCommandBuffer;
@interface MPSTemporaryNDArray : MPSNDArray {

	unsigned long long _readCount;
	id<MTLCommandBuffer> _commandBuffer;
	unsigned long long _childRefCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
+(id)defaultAllocator;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 buffer:(id)arg3 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(unsigned long long)readCount;
@end
