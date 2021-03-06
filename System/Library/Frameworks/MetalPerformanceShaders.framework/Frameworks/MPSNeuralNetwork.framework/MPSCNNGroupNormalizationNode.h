/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@protocol MPSCNNGroupNormalizationDataSource;
@class NSString;

@interface MPSCNNGroupNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode> {

	id<MPSCNNGroupNormalizationDataSource> _dataSource;
	unsigned long long _trainingStyle;

}

@property (assign,nonatomic) unsigned long long trainingStyle;              //@synthesize trainingStyle=_trainingStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeWithSource:(id)arg1 dataSource:(id)arg2 ;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithSource:(id)arg1 dataSource:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
@end

