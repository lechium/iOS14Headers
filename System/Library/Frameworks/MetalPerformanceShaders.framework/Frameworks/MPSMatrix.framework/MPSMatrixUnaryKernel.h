/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixUnaryKernel : MPSKernel {

	unsigned long long _batchStart;
	unsigned long long _batchSize;
	SCD_Struct_MP0 _sourceMatrixOrigin;
	SCD_Struct_MP0 _resultMatrixOrigin;

}

@property (assign,nonatomic) SCD_Struct_MP0 sourceMatrixOrigin;              //@synthesize sourceMatrixOrigin=_sourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 resultMatrixOrigin;              //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                  //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setSourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)batchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_MP0)resultMatrixOrigin;
-(id)initWithDevice:(id)arg1 ;
-(SCD_Struct_MP0)sourceMatrixOrigin;
@end
