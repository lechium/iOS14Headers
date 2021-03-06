/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface WBSPeriodicActivityScheduler : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	double _interval;
	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;

}
-(void)invalidate;
-(id)init;
-(void)_timerDidFire:(id)arg1 ;
-(void)_performActivity;
-(id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_scheduleActivityWithInterval:(double)arg1 ;
@end

