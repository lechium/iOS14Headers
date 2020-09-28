/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMorphologyRectangle : CIFilter {

	CIImage* inputImage;
	NSNumber* inputWidth;
	NSNumber* inputHeight;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputHeight; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(BOOL)_isIdentity;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputHeight;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(BOOL)_doMinimum;
@end
