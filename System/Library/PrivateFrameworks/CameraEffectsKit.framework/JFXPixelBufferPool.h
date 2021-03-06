/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXPixelBufferPool : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	unsigned _type;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned)type;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(CVBufferRef)createPixelBuffer;
-(id)initWithSize:(CGSize)arg1 type:(unsigned)arg2 ;
@end

