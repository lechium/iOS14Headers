/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSDictionary, SKTextureAtlas, SKTexture, CLKDevice;

@interface NTKTickNodeFactory : NSObject {

	NSDictionary* _imagesDictionary;
	SKTextureAtlas* _tickTextureAtlas;
	SKTexture* _tickTexture;
	CLKDevice* _device;

}
+(id)sharedInstance;
+(void)_deallocInstance;
-(void)dealloc;
-(id)init;
-(void)_asyncDeallocInstance;
-(id)imagesDictionaryForDevice:(id)arg1 ;
-(id)_shaderWithTickWidth:(double)arg1 filterWidth:(double)arg2 forDevice:(id)arg3 ;
-(id)_tickTextureForDevice:(id)arg1 ;
-(void)layoutNodes:(id)arg1 forDevice:(id)arg2 offset:(unsigned long long)arg3 center:(CGPoint)arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(BOOL)arg8 round:(BOOL)arg9 ;
-(id)_shaderCacheForDevice:(id)arg1 ;
-(id)textureAtlasForDevice:(id)arg1 ;
-(id)ticks:(unsigned)arg1 forDevice:(id)arg2 center:(CGPoint)arg3 radius:(double)arg4 color1:(id)arg5 color2:(id)arg6 smallSize:(CGSize)arg7 largeSize:(CGSize)arg8 smallFilterWidth:(double)arg9 largeFilterWidth:(double)arg10 l1mod:(unsigned)arg11 l2mod:(unsigned)arg12 ;
-(void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(double)arg4 accentAlpha:(double)arg5 accentModulo:(long long)arg6 ;
-(void)setBackgroundColor:(id)arg1 onTicks:(id)arg2 ;
@end
