/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputEV;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputEV; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputEV;
-(BOOL)_isIdentity;
-(id)outputImage;
-(void)setInputEV:(NSNumber *)arg1 ;
@end

