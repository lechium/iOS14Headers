/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MLCompute/MLCompute-Structs.h>
@interface MLCGPUHelper : NSObject
+(void)synchronizeResource:(id)arg1 commandBuffer:(id)arg2 ;
+(unsigned long long)mtlStorageMode;
+(unsigned long long)mtlResourceOptions;
+(void)didModifyRange:(NSRange)arg1 buffer:(id)arg2 ;
+(void)concatChannelsForwardWithParams:(ConcatParams)arg1 sourceImageBatch:(id)arg2 resultImageBatch:(id)arg3 commandBuffer:(id)arg4 device:(id)arg5 deviceIndex:(unsigned long long)arg6 ;
+(void)copyMPSImageBatchToMatrixBatch:(id)arg1 commandBuffer:(id)arg2 sourceImageBatch:(id)arg3 destinationMatrixBatch:(id)arg4 ;
+(void)copyMatrixBatchToMPSImageBatch:(id)arg1 commandBuffer:(id)arg2 sourceMatrixBatch:(id)arg3 destinationImageBatch:(id)arg4 ;
@end
