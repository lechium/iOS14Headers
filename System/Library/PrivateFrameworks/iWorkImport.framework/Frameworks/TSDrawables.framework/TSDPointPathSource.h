/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDPathSource.h>
#import <TSDrawables/TSDMixing.h>
#import <TSDrawables/TSDSmartPathSource.h>

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	CGPoint mPoint;
	CGSize mNaturalSize;

}

@property (assign) int type; 
@property (assign) CGPoint point; 
@property (assign) CGSize naturalSize; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)rightSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)doubleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)starWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
+(id)leftSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)plusWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(CGPoint)point;
-(void)setPointValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(void)setPoint:(CGPoint)arg1 ;
-(id)init;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isRectangular;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(id)initWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
-(CGPoint)p_getControlKnobPointForArrow;
-(CGPoint)p_getControlKnobPointForStarPoints;
-(CGPoint)p_getControlKnobPointForStarInnerRadius;
-(CGPoint)p_getControlKnobPointForPlus;
-(void)p_setControlKnobPointForArrow:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarPoints:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarInnerRadius:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForPlus:(CGPoint)arg1 ;
-(CGPathRef)p_newArrowPath;
-(CGPathRef)p_newStarPath;
-(CGPathRef)p_newPlusPath;
-(BOOL)p_isRightFacingArrow;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGPoint)minPointValue;
-(CGPoint)maxPointValue;
-(CGSize)scaleFactorForInscribedRectangle;
-(BOOL)p_isFlippedDoubleArrow;
@end
