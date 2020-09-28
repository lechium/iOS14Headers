/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSPSleepTracker <HDSPEnvironmentAware>
@property (assign,nonatomic,__weak) id<HDSPSleepTrackerDelegate> delegate; 
@optional
-(id)processedSessionForSession:(id)arg1;
-(void)previousSessionFinished;

@required
-(void)setDelegate:(id)arg1;
-(id<HDSPSleepTrackerDelegate>)delegate;

@end
