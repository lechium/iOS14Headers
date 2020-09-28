/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@interface MTMetrics : NSObject {

	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
+(id)_sharedPublicMetrics;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id<NAScheduler>)serializer;
-(void)logAlarmAdded:(BOOL)arg1 ;
-(void)logTimerRepeated;
-(void)logAlarmSnoozeAction:(unsigned long long)arg1 ;
-(void)logAlarmUpdated:(BOOL)arg1 ;
-(void)logTimerAdded;
-(void)logSyncCompleted;
-(id)init;
-(void)logTimerDeleted;
-(void)logTimerUpdated;
-(void)logAlarmDeleted:(BOOL)arg1 ;
-(void)logAlarmDismissAction:(unsigned long long)arg1 ;
-(void)logSyncFailedWithError:(id)arg1 ;
-(void)logTimerDismissed;
@end
