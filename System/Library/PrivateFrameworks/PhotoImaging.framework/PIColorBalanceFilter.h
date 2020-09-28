/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _inputWarmTemp;
	NSNumber* _inputWarmTint;
	NSNumber* _inputStrength;
	NSNumber* _inputHasFace;
	NSNumber* _inputIsRaw;

}

@property (nonatomic,retain) CIImage * inputImage;                  //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSNumber * inputWarmTemp;              //@synthesize inputWarmTemp=_inputWarmTemp - In the implementation block
@property (nonatomic,retain) NSNumber * inputWarmTint;              //@synthesize inputWarmTint=_inputWarmTint - In the implementation block
@property (nonatomic,retain) NSNumber * inputStrength;              //@synthesize inputStrength=_inputStrength - In the implementation block
@property (nonatomic,retain) NSNumber * inputHasFace;               //@synthesize inputHasFace=_inputHasFace - In the implementation block
@property (nonatomic,retain) NSNumber * inputIsRaw;                 //@synthesize inputIsRaw=_inputIsRaw - In the implementation block
+(id)customAttributes;
+(CGColorSpaceRef)linearWideGamutColorSpace;
+(id)colorBalanceKernels;
+(id)gHDRtoPPKernel;
+(id)PPtogHDRKernel;
+(id)colorBalanceKernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)outputImage;
-(id)applyInputConversion:(id)arg1 ;
-(id)applyOutputConversion:(id)arg1 ;
-(NSNumber *)inputWarmTemp;
-(void)setInputWarmTemp:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmTint;
-(void)setInputWarmTint:(NSNumber *)arg1 ;
-(NSNumber *)inputHasFace;
-(void)setInputHasFace:(NSNumber *)arg1 ;
-(NSNumber *)inputIsRaw;
-(void)setInputIsRaw:(NSNumber *)arg1 ;
@end
