/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolygonGroup, MKMultiPolygon;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {

	const CGPath* _paths;
	unsigned long long _pathsCount;
	VKVectorOverlayPolygonGroup* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (assign,setter=_setStrokeStart:,getter=_strokeStart,nonatomic) double strokeStart; 
@property (assign,setter=_setStrokeEnd:,getter=_strokeEnd,nonatomic) double strokeEnd; 
@property (nonatomic,readonly) MKMultiPolygon * multiPolygon; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)_canProvideVectorGeometry;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)_performInitialConfiguration;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)_updateRenderColors;
-(void)setLineJoin:(int)arg1 ;
-(double)_strokeStart;
-(double)_strokeEnd;
-(id)_vectorGeometry;
-(id)initWithMultiPolygon:(id)arg1 ;
-(MKMultiPolygon *)multiPolygon;
-(void)_setStrokeStart:(double)arg1 ;
-(void)_setStrokeEnd:(double)arg1 ;
-(void)createPath;
-(void)setAlpha:(double)arg1 ;
@end

