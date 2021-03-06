/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PVColorSpace : NSObject {

	int _type;

}

@property (nonatomic,readonly) unsigned jfx_getCVPixelFormatForDisplay; 
@property (nonatomic,readonly) unsigned jfx_getCVPixelFormatForExport; 
+(id)jfx_compareAndChooseGreaterColorSpace:(id)arg1 right:(id)arg2 ;
+(id)jfx_compareAndChooseLesserColorSpace:(id)arg1 right:(id)arg2 ;
+(id)jfx_getColorSpaceFromColorPrimaries:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(id)jfx_getColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(BOOL)JFX_isRec709Gamma:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(BOOL)JFX_isP3D65:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 ;
+(id)jfx_getColorSpaceFromPixelBuffer:(CVBufferRef)arg1 ;
+(id)JFX_nclcDictionaryForColorSpace:(id)arg1 ;
+(BOOL)JFX_compareTriplets:(CFStringRef)arg1 transferFunction:(CFStringRef)arg2 matrix:(const CFStringRef)arg3 validNCLCTriplets:(id)arg4 ;
+(id)jfx_getColorSpaceFromImageBuffer:(id)arg1 ;
+(id)jfx_getColorSpaceFromCaptureColorSpace:(long long)arg1 ;
+(id)sRGBColorSpace;
+(id)preferredDisplayColorSpace;
+(id)rec709GammaColorSpace;
+(id)preferredExportColorSpace;
+(id)p3d65GammaColorSpace;
+(id)p3HLGGammaColorSpace;
+(id)extendedSRGBColorSpace;
+(id)extendedLinearSRGBColorSpace;
+(id)pvColorSpaceFromCGColorSpace:(CGColorSpaceRef)arg1 ;
+(id)pvColorSpaceForCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)rec2020HLGColorSpace;
+(id)rec2020LinearColorSpace;
+(id)rec2100HLGColorSpace;
+(id)rec2100PQColorSpace;
+(id)p3PQGammaColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec709LinearColorSpace;
+(id)rec2020PQColorSpace;
-(unsigned)jfx_getCVPixelFormatForExport;
-(void)jfx_attachColorSpaceToPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned)jfx_getCVPixelFormatForDisplay;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)initWithType:(int)arg1 ;
-(id)description;
-(id)nclcTriplet;
-(BOOL)isWideGamutSpace;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isHDRSpace;
-(CGColorSpaceRef)cgColorSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isEqualToCGColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)isRec2100HLGColorSpace;
-(BOOL)isRec2100PQColorSpace;
-(BOOL)isExtendedLinearSRGBColorSpace;
-(BOOL)isRec2020LinearColorSpace;
-(BOOL)isP3HLGGammaColorSpace;
-(BOOL)isP3PQGammaColorSpace;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
-(BOOL)isRec2020HLGColorSpace;
-(BOOL)isRec2020PQColorSpace;
@end

