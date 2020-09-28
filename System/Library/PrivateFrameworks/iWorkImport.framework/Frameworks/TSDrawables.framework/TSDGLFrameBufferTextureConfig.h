/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSString, NSArray;

@interface TSDGLFrameBufferTextureConfig : NSObject {

	BOOL _isTextureNameGenerated;
	int _GLInternalFormat;
	unsigned _GLFormat;
	unsigned _GLType;
	unsigned _attachment;
	NSString* _name;
	NSArray* _textureParameters;
	IOSurfaceRef _backingSurface;
	CGSize _textureSize;

}

@property (nonatomic,readonly) CGSize size;                                              //@synthesize textureSize=_textureSize - In the implementation block
@property (getter=LInternalFormat,nonatomic,readonly) int GLInternalFormat;              //@synthesize GLInternalFormat=_GLInternalFormat - In the implementation block
@property (getter=LFormat,nonatomic,readonly) unsigned GLFormat;                         //@synthesize GLFormat=_GLFormat - In the implementation block
@property (getter=LType,nonatomic,readonly) unsigned GLType;                             //@synthesize GLType=_GLType - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned attachment;                                      //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) NSArray * textureParameters;                              //@synthesize textureParameters=_textureParameters - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef backingSurface;                              //@synthesize backingSurface=_backingSurface - In the implementation block
@property (nonatomic,readonly) unsigned target; 
+(id)textureConfigWithSize:(CGSize)arg1 attachment:(unsigned)arg2 textureParameters:(id)arg3 name:(id)arg4 ;
+(id)textureConfigWithSize:(CGSize)arg1 name:(id)arg2 ;
+(id)textureConfigWithSize:(CGSize)arg1 textureParameters:(id)arg2 name:(id)arg3 ;
+(id)textureConfigWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 textureParameters:(id)arg6 name:(id)arg7 backingSurface:(IOSurfaceRef)arg8 ;
+(id)textureConfigWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 textureParameters:(id)arg6 name:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned)attachment;
-(unsigned)GLType;
-(CGSize)size;
-(unsigned)target;
-(NSString *)name;
-(IOSurfaceRef)backingSurface;
-(id)initWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 textureParameters:(id)arg6 name:(id)arg7 backingSurface:(IOSurfaceRef)arg8 ;
-(int)GLInternalFormat;
-(unsigned)GLFormat;
-(NSArray *)textureParameters;
@end
