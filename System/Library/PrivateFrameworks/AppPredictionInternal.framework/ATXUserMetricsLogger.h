/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXUserMetricsLoggerTarget;
@class NSObject;

@interface ATXUserMetricsLogger : NSObject {

	NSObject*<ATXUserMetricsLoggerTarget> _target;

}
-(void)storeUserMetric:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(id)init;
-(void)storeUserMetric:(id)arg1 forceUserId:(id)arg2 ;
@end
