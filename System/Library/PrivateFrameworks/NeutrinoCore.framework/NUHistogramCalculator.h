/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU10 _range;
	SCD_Struct_NU12 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU10 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU12 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(SCD_Struct_NU10)range;
-(id)init;
-(void)setRange:(SCD_Struct_NU10)arg1 ;
-(SCD_Struct_NU12)colorMatrix;
-(long long)binCount;
-(void)setColorMatrix:(SCD_Struct_NU12)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferRGBAhHLG:(id)arg1 error:(out id*)arg2 ;
-(void)setBinCount:(long long)arg1 ;
@end

