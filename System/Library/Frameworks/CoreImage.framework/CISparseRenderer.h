/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRenderer : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputDraftMode;
	NSNumber* inputAperture;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,copy) NSNumber * inputDraftMode; 
@property (nonatomic,copy) NSNumber * inputAperture; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(id)stepsLUT:(unsigned)arg1 ;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(id)stepsLUTGenerator;
-(id)baseVecsLUTGenerator;
-(BOOL)_useD2XRenderer;
-(id)baseVecsLUT:(unsigned)arg1 ;
-(id)_lutKernel:(BOOL)arg1 alpha:(BOOL)arg2 ;
-(id)_kernel:(BOOL)arg1 alpha:(BOOL)arg2 ;
-(id)_packageParams:(BOOL)arg1 extent:(CGRect)arg2 image:(id)arg3 haveAlpha:(BOOL)arg4 ;
@end
