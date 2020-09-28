/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeAI/HomeAI-Structs.h>
@class NSArray;

@interface HMIFaceTrackerMotionRecord : NSObject {

	NSArray* _motionVectors;
	SCD_Struct_HM3 _time;
	CGRect _regionOfInterest;

}

@property (readonly) NSArray * motionVectors;              //@synthesize motionVectors=_motionVectors - In the implementation block
@property (readonly) CGRect regionOfInterest;              //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (readonly) SCD_Struct_HM3 time;                  //@synthesize time=_time - In the implementation block
-(SCD_Struct_HM3)time;
-(CGRect)regionOfInterest;
-(id)initWithMotionVectors:(id)arg1 regionOfInterest:(CGRect)arg2 time:(SCD_Struct_HM3)arg3 ;
-(NSArray *)motionVectors;
@end
