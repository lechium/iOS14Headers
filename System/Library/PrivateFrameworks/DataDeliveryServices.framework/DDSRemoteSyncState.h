/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DDSBackgroundActivitySchedulerDelegate.h>

@protocol DDSRemoteSyncStateDelegate;
@class NSDate, NSString, DDSBackgroundActivityScheduler;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate> {

	id<DDSRemoteSyncStateDelegate> _delegate;
	long long _syncStatus;
	NSDate* _date;
	unsigned long long _attemptCount;
	NSString* _buildVersion;
	DDSBackgroundActivityScheduler* _scheduler;

}

@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long syncStatus;                                        //@synthesize syncStatus=_syncStatus - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;                             //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSString * buildVersion;                                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) DDSBackgroundActivityScheduler * scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (assign,nonatomic,__weak) id<DDSRemoteSyncStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildVersionString;
+(double)timeIntervalUntilNextRegularUpdate;
-(void)resetState;
-(void)setScheduler:(DDSBackgroundActivityScheduler *)arg1 ;
-(void)requestUpdate;
-(DDSBackgroundActivityScheduler *)scheduler;
-(unsigned long long)attemptCount;
-(void)saveState;
-(void)loadState;
-(void)setDate:(NSDate *)arg1 ;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(NSDate *)date;
-(void)setBuildVersion:(NSString *)arg1 ;
-(long long)syncStatus;
-(id)init;
-(void)setDelegate:(id<DDSRemoteSyncStateDelegate>)arg1 ;
-(id<DDSRemoteSyncStateDelegate>)delegate;
-(NSString *)buildVersion;
-(void)performScheduledActivityWithIdentifier:(id)arg1 ;
-(BOOL)shouldInitiateRegularUpdateCycle;
-(void)scheduleRegularUpdate;
-(double)timeBetweenSyncs;
-(double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)arg1 ;
-(void)setSyncStatus:(long long)arg1 ;
-(void)scheduleRetry;
-(void)requestRetry;
-(void)beganUpdateCycle;
-(void)completedUpdateCycleWithError:(id)arg1 ;
@end

