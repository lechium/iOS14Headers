/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFTimerHandler, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface WFTimer : NSObject {

	id<WFTimerHandler> _handler;
	double _duration;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;                 //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<WFTimerHandler> handler;                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) double duration;                                       //@synthesize duration=_duration - In the implementation block
-(void)cancel;
-(double)duration;
-(void)start;
-(void)restart;
-(id<WFTimerHandler>)handler;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithHandler:(id)arg1 duration:(double)arg2 ;
-(BOOL)shouldHaveTimeout;
@end
