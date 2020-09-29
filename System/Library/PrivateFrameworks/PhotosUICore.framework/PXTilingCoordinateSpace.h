/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpace : NSObject {

	PXTilingCoordinateSpace* _parentSpace;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) void* identifier; 
@property (assign,nonatomic,__weak) PXTilingCoordinateSpace * parentSpace;              //@synthesize parentSpace=_parentSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                               //@synthesize transform=_transform - In the implementation block
-(void*)identifier;
-(PXTilingCoordinateSpace *)parentSpace;
-(void)setParentSpace:(PXTilingCoordinateSpace *)arg1 ;
-(id)init;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
@end
