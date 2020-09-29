/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class FigM2MController;

@interface FigUtlROIProcessor : NSObject {

	int _originalWidth;
	int _originalHeight;
	CGRect _roiInPixels;
	CGRect _originalRectangle;
	int _orientation;
	FigM2MController* _m2m;
	int _width;
	int _height;
	CVBufferRef _pixelBuffer;
	CGRect _roiRectangle;
	SCD_Struct_BW81 _originalToRoiMatrix;
	SCD_Struct_BW81 _roiToOriginalMatrix;

}

@property (nonatomic,readonly) SCD_Struct_BW81 originalToRoiMatrix;              //@synthesize originalToRoiMatrix=_originalToRoiMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW81 roiToOriginalMatrix;              //@synthesize roiToOriginalMatrix=_roiToOriginalMatrix - In the implementation block
@property (nonatomic,readonly) CGRect roiRectangle;                              //@synthesize roiRectangle=_roiRectangle - In the implementation block
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                          //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) int width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                       //@synthesize height=_height - In the implementation block
-(int)width;
-(int)height;
-(void)dealloc;
-(id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)processImage:(CVBufferRef)arg1 orientation:(int)arg2 rect:(CGRect)arg3 ;
-(SCD_Struct_BW81)originalToRoiMatrix;
-(SCD_Struct_BW81)roiToOriginalMatrix;
-(CGPoint)roiToOriginal:(CGPoint)arg1 ;
-(CVBufferRef)pixelBuffer;
-(CGPoint)originalToRoi:(CGPoint)arg1 ;
-(SCD_Struct_BW81)matrix:(int)arg1 rectangle:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(SCD_Struct_BW81*)arg5 ;
-(CGPoint)originalToRoiPixels:(CGPoint)arg1 ;
-(CGPoint)roiToOriginalPixels:(CGPoint)arg1 ;
-(CGRect)roiRectangle;
@end
