/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel {

	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;
	unsigned long long _sourceOutputFeatureChannels;
	double _alpha;

}

@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceOutputFeatureChannels;               //@synthesize sourceOutputFeatureChannels=_sourceOutputFeatureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) double alpha;                                                 //@synthesize alpha=_alpha - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeGradientForDataToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 weightMatrix:(id)arg3 resultGradientForDataMatrix:(id)arg4 ;
-(void)encodeGradientForWeightsAndBiasToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 resultGradientForWeightMatrix:(id)arg4 resultGradientForBiasVector:(id)arg5 ;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(void)setSourceOutputFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceInputFeatureChannels;
-(unsigned long long)sourceOutputFeatureChannels;
-(id)initWithDevice:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
@end

