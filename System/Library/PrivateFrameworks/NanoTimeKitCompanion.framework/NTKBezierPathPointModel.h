/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class UIBezierPath, NSArray, NSDictionary;

@interface NTKBezierPathPointModel : NSObject {

	UIBezierPath* _path;
	NSArray* _pathElements;
	NSDictionary* _horizontalPercentageCache;

}

@property (nonatomic,readonly) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(UIBezierPath *)path;
-(id)_buildHorizontalPercentageCache;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2 ;
-(double)_estimatePercentageForEndPadding:(double)arg1 ;
-(CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1 ;
-(double)_computeDistanceBetweenPointA:(CGPoint)arg1 andPointB:(CGPoint)arg2 ;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
@end
