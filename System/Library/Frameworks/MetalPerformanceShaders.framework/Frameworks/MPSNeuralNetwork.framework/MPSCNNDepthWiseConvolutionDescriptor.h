/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionDescriptor.h>

@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor

@property (nonatomic,readonly) unsigned long long channelMultiplier; 
-(id)debugDescription;
-(unsigned long long)channelMultiplier;
-(id)init;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 ;
@end

