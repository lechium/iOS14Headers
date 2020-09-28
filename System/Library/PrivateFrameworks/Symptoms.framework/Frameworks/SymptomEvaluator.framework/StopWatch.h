/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface StopWatch : NSObject {

	NSDate* start;
	double cumul;

}
+(BOOL)nearlyEqualRun:(double)arg1 toRun:(double)arg2 fudgeFactor:(double)arg3 ;
-(BOOL)isRunning;
-(double)total;
-(void)start;
-(BOOL)wasRunningBefore:(id)arg1 ;
-(double)currentRun;
-(double)stop;
@end
