/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaMarkItemInterface.h>

@class NSString, NSArray, CALayer, JSValue;

@interface CCVegaMarkItem : NSObject <CCVegaMarkItemInterface> {

	JSValue* _items;
	JSValue* mark;

}

@property (retain) JSValue * mark; 
@property (readonly) double cornerRadius; 
@property (readonly) NSString * shape; 
@property (readonly) NSString * orient; 
@property (readonly) double size; 
@property (readonly) NSString * baseline; 
@property (readonly) double radius; 
@property (readonly) double theta; 
@property (readonly) NSString * fontStyle; 
@property (readonly) double fontSize; 
@property (readonly) NSString * fontWeight; 
@property (readonly) NSString * font; 
@property (readonly) NSString * align; 
@property (readonly) double x; 
@property (readonly) double x2; 
@property (readonly) double dx; 
@property (readonly) double width; 
@property (readonly) double y; 
@property (readonly) double y2; 
@property (readonly) double dy; 
@property (readonly) double angle; 
@property (readonly) double height; 
@property (readonly) double opacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> fill; 
@property (readonly) double fillOpacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> stroke; 
@property (readonly) double strokeOpacity; 
@property (readonly) double strokeWidth; 
@property (readonly) NSString * strokeCap; 
@property (readonly) NSArray * strokeDash; 
@property (readonly) NSString * strokeJoin; 
@property (readonly) NSString * interpolate; 
@property (readonly) double strokeMiterLimit; 
@property (readonly) NSString * path; 
@property (readonly) double zindex; 
@property (readonly) BOOL clip; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
-(double)strokeWidth;
-(BOOL)isDirty;
-(double)x2;
-(double)dx;
-(double)y2;
-(double)dy;
-(NSObject*<CCVegaColorOrGradientInterface>)fill;
-(BOOL)clip;
-(NSString *)shape;
-(double)y;
-(double)angle;
-(NSObject*<CCVegaColorOrGradientInterface>)stroke;
-(JSValue *)mark;
-(double)cornerRadius;
-(CGRect)bounds;
-(NSString *)path;
-(double)width;
-(double)theta;
-(NSString *)align;
-(void)setIsDirty:(BOOL)arg1 ;
-(double)height;
-(void)setMark:(JSValue *)arg1 ;
-(NSString *)orient;
-(double)opacity;
-(double)radius;
-(NSString *)font;
-(double)zindex;
-(double)x;
-(CALayer *)caLayer;
-(NSString *)baseline;
-(BOOL)isEqual:(id)arg1 ;
-(double)fontSize;
-(double)size;
-(double)fillOpacity;
-(NSString *)fontWeight;
-(unsigned long long)itemCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSValue:(id)arg1 ;
-(BOOL)defined;
-(id)getText;
-(NSString *)fontStyle;
-(void)setCaLayer:(CALayer *)arg1 ;
-(double)getDouble:(id)arg1 defaultValue:(double)arg2 ;
-(CGPathRef)newPathByCallingShapeFunction;
-(id)getString:(id)arg1 defaultValue:(id)arg2 ;
-(id)getObject:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)getBoolean:(id)arg1 defaultValue:(BOOL)arg2 ;
-(double)strokeOpacity;
-(NSString *)strokeCap;
-(NSArray *)strokeDash;
-(NSString *)strokeJoin;
-(NSString *)interpolate;
-(double)strokeMiterLimit;
@end

