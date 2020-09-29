/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxTexture : FxImage <NSCopying> {

	FxTexturePriv* _texturePriv;

}
-(void)enable;
-(void)draw;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)bind;
-(void)dealloc;
-(void)setData:(void*)arg1 ;
-(void)disable;
-(id)init;
-(unsigned)target;
-(void)setTarget:(unsigned)arg1 ;
-(BOOL)_verifyImage;
-(unsigned)textureId;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 textureId:(unsigned)arg2 andTarget:(unsigned)arg3 ;
-(BOOL)isInputImage;
-(void)setTextureId:(unsigned)arg1 ;
-(void)setIsInputImage:(BOOL)arg1 ;
-(void*)createData:(unsigned)arg1 withType:(unsigned)arg2 ;
-(void)setAsActiveTexture;
-(void)getTextureCoords:(double*)arg1 right:(double*)arg2 bottom:(double*)arg3 top:(double*)arg4 ;
@end
