/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo {

	UIEdgeInsets _cropInsets;

}

@property (assign,setter=_setCropInsets:,nonatomic) UIEdgeInsets cropInsets;              //@synthesize cropInsets=_cropInsets - In the implementation block
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 coordinateSystem:(id)arg8 ;
-(id)clone;
-(UIEdgeInsets)cropInsets;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 cropInsets:(UIEdgeInsets)arg4 alpha:(double)arg5 transform:(CGAffineTransform)arg6 zPosition:(double)arg7 contentsRect:(CGRect)arg8 coordinateSystem:(id)arg9 ;
-(void)_setCropInsets:(UIEdgeInsets)arg1 ;
-(id)description;
@end
