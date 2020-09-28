/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSDictionary, NSString;

@interface CIPortraitBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurmapImage;
	CIImage* inputMatteImage;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	NSNumber* inputAperture;
	NSDictionary* inputTuningParameters;
	NSString* inputShape;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(id)outputImage;
-(NSNumber *)inputScale;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(id)_kernelMetal;
-(id)_kernelWithShapesMetal;
-(id)_kernelsWithShapes;
-(id)_ourBlendKernelMetal;
-(id)_ourBlendKernel;
-(id)outputImage:(BOOL)arg1 ;
-(id)outputImageV2;
-(id)outputImageV3;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
@end
