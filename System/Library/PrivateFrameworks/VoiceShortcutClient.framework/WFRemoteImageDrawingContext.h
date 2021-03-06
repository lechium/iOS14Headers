/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFRemoteImageDrawingContext : NSObject <NSSecureCoding> {

	BOOL _drawAlphaOnly;
	unsigned long long _imageCount;
	double _scale;
	CGColorSpaceRef _colorSpace;
	unsigned long long _bitsPerComponent;
	void* _buffer;
	unsigned long long _bufferSize;
	CGSize _singleImageSize;

}

@property (nonatomic,readonly) unsigned long long bitsPerComponent;                //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfComponents; 
@property (nonatomic,readonly) unsigned bitmapInfo; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) unsigned long long sizePerImage; 
@property (nonatomic,readonly) void* buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferSize;                      //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long imageCount;                      //@synthesize imageCount=_imageCount - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize singleImageSize;                             //@synthesize singleImageSize=_singleImageSize - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef colorSpace;                         //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) BOOL drawAlphaOnly;                                 //@synthesize drawAlphaOnly=_drawAlphaOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGColorSpaceRef)colorSpace;
-(void*)buffer;
-(double)scale;
-(void)dealloc;
-(unsigned long long)bufferSize;
-(CGImageRef)imageAtIndex:(unsigned long long)arg1 ;
-(double)screenScale;
-(unsigned long long)sizePerImage;
-(BOOL)drawAlphaOnly;
-(unsigned)bitmapInfo;
-(id)initWithAlphaOnlyImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 ;
-(id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(BOOL)allocateSharedBuffer;
-(CGSize)singleImageSize;
-(id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(CGSize)arg2 scale:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 buffer:(void*)arg5 bufferSize:(unsigned long long)arg6 drawAlphaOnly:(BOOL)arg7 ;
-(void)accessBitmapContextForImageAtIndex:(unsigned long long)arg1 accessBlock:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfComponents;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)bitsPerComponent;
-(unsigned long long)imageCount;
@end

