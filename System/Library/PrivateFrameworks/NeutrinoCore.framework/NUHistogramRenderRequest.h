/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NUHistogramParameters, NUColorSpace, NSString;

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased> {

	NUHistogramParameters* _parameters;
	NUColorSpace* _histogramCalculationColorSpace;

}

@property (nonatomic,copy) NUHistogramParameters * parameters; 
@property (nonatomic,retain) NUColorSpace * histogramCalculationColorSpace;              //@synthesize histogramCalculationColorSpace=_histogramCalculationColorSpace - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParameters:(NUHistogramParameters *)arg1 ;
-(NUHistogramParameters *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(NUColorSpace *)histogramCalculationColorSpace;
-(void)setHistogramCalculationColorSpace:(NUColorSpace *)arg1 ;
@end
