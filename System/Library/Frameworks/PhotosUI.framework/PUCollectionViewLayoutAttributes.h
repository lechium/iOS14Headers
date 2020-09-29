/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGPoint _parallaxOffset;
	CGPoint _edgeParallaxOffset;

}

@property (assign,nonatomic) CGPoint parallaxOffset;                  //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) CGPoint edgeParallaxOffset;              //@synthesize edgeParallaxOffset=_edgeParallaxOffset - In the implementation block
-(CGPoint)parallaxOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParallaxOffset:(CGPoint)arg1 ;
-(CGPoint)edgeParallaxOffset;
-(void)setEdgeParallaxOffset:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
