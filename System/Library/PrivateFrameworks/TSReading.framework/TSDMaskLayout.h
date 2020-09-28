/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:35 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>

@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {

	struct {
		unsigned path : 1;
		unsigned tightPathBounds : 1;
	}  mMaskInvalidFlags;
	CGPathRef mCachedPath;
	CGPathRef mCachedPathNoScale;
	CGRect mCachedTightPathBounds;
	CGRect mCachedTightPathBoundsNoScale;
	double mPathScale;
	TSDInfoGeometry* mDynamicInfoGeometry;
	TSDPathSource* mDynamicPathSource;
	TSDPathSource* mPathSourceWithProvidedSize;
	BOOL mScalingInMaskMode;

}

@property (assign,nonatomic) double pathScale; 
@property (nonatomic,readonly) BOOL hasSmartPath; 
@property (nonatomic,readonly) TSDImageLayout * imageLayout; 
-(void)invalidate;
-(CGPathRef)path;
-(void)dealloc;
-(void)dragBy:(CGPoint)arg1 ;
-(void)invalidatePath;
-(id)initWithInfo:(id)arg1 ;
-(CGRect)pathBounds;
-(id)computeLayoutGeometry;
-(BOOL)shouldDisplayGuides;
-(void)processChangedProperty:(int)arg1 ;
-(id)infoGeometry;
-(TSDImageLayout *)imageLayout;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(id)dependentLayouts;
-(CGRect)alignmentFrame;
-(CGAffineTransform)originalTransformForProvidingGuides;
-(CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1 ;
-(void)resizeWithTransform:(CGAffineTransform)arg1 asChild:(BOOL)arg2 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)shouldSnapWhileResizing;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(id)pathSource;
-(CGPathRef)p_cachedPath;
-(id)maskInfo;
-(CGAffineTransform)affineTransformForTightPathBounds;
-(BOOL)hasSmartPath;
-(void)setPathScale:(double)arg1 ;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg1 ;
-(void)maskModeScaleDidBegin;
-(void)maskModeScaleDidEnd;
-(CGRect)p_cachedTightPathBoundsNoScale;
-(CGRect)p_cachedTightPathBounds;
-(double)pathScale;
-(void)p_calculateCachedPathIfNecessary;
-(CGPathRef)p_cachedPathNoScale;
-(void)p_calculateTightPathBoundsIfNecessary;
-(void)takeScaledMaskGeometry:(id)arg1 ;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
@end
