/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture {

	BOOL _isOpaque;
	unsigned _orientation;
	CGImageRef _imageRef;

}

@property (nonatomic,readonly) CGImageRef imageRef;               //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(long long)estimatedByteSize;
-(BOOL)isOpaque;
-(int)presentationType;
-(CGImageRef)imageRef;
-(CGSize)pixelSize;
-(id)initWithImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned)orientation;
@end

