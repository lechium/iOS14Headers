/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTransform : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(CIVector *)inputTopLeft;
-(CIVector *)inputTopRight;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
@end
