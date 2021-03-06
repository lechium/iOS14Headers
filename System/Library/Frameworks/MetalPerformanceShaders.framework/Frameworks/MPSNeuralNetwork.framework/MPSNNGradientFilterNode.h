/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNGradientFilterNode : MPSNNFilterNode
-(id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 binaryGradientState:(id)arg3 paddingPolicy:(id)arg4 ;
-(id)resultStates;
-(id)resultState;
-(id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 gradientState:(id)arg3 paddingPolicy:(id)arg4 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
@end

