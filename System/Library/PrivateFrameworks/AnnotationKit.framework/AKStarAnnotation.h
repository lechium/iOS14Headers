/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKPolygonAnnotation.h>

@interface AKStarAnnotation : AKPolygonAnnotation {

	double _innerRadiusFactor;

}

@property (assign) double innerRadiusFactor;              //@synthesize innerRadiusFactor=_innerRadiusFactor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)displayName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForAdornments;
-(double)innerRadiusFactor;
-(void)setInnerRadiusFactor:(double)arg1 ;
@end

