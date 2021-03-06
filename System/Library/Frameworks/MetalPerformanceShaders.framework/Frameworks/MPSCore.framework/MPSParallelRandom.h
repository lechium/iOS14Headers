/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSParallelRandom : MPSKernel {

	int _generatorType;
	unsigned _destinationDataType;
	unsigned long long _distributionType;

}

@property (assign,nonatomic) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (nonatomic,readonly) unsigned destinationDataType;                   //@synthesize destinationDataType=_destinationDataType - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned)destinationDataType;
-(unsigned long long)distributionType;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 stride:(unsigned)arg6 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 stride:(unsigned)arg5 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 generatorType:(int)arg3 distributionDescriptor:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setDistributionType:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
@end

