/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBPanGestureVelocitySample : NSObject {

	CGPoint start;
	CGPoint end;
	double dt;
	double force;
	double majorRadius;

}

@property (assign) CGPoint start; 
@property (assign) CGPoint end; 
@property (assign) double dt; 
@property (assign) double force; 
@property (assign) double majorRadius; 
-(double)dt;
-(double)force;
-(CGPoint)end;
-(void)setForce:(double)arg1 ;
-(double)majorRadius;
-(void)setStart:(CGPoint)arg1 ;
-(void)setEnd:(CGPoint)arg1 ;
-(CGPoint)start;
-(void)resetValues;
-(void)setMajorRadius:(double)arg1 ;
-(void)pullValuesFrom:(id)arg1 ;
-(void)setDt:(double)arg1 ;
@end
