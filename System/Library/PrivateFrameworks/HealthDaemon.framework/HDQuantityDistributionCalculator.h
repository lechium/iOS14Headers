/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDQuantityDistributionCalculator : NSObject {

	HistogramState* _histogramState;

}
-(void)_initializeWideBucketDatesFromStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6 ;
-(void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)quantityDistributionsWithUnit:(id)arg1 ;
-(BOOL)validateDateSequenceForTesting:(id)arg1 ;
-(BOOL)_isWideIntervalComponents:(id)arg1 ;
-(double)_dateComponentsToInterval:(id)arg1 ;
@end
