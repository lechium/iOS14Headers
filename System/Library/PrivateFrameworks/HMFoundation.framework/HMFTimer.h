/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, HMFTimerDelegate, OS_dispatch_source;
@class NSObject, NSDate;

@interface HMFTimer : HMFObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	double _timeInterval;
	long long _leeway;
	BOOL _running;
	NSDate* _fireDate;
	id<HMFTimerDelegate> _delegate;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (__weak) id<HMFTimerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) double timeInterval;                              //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long leeway; 
@property (getter=isRunning,readonly) BOOL running; 
@property (copy,readonly) NSDate * fireDate;                                     //@synthesize fireDate=_fireDate - In the implementation block
+(id)shortDescription;
-(double)timeInterval;
-(BOOL)isRunning;
-(unsigned long long)leeway;
-(id)attributeDescriptions;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)options;
-(void)dealloc;
-(void)__fire;
-(void)__handleExpiration;
-(void)suspend;
-(void)kick;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id<HMFTimerDelegate>)arg1 ;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(void)resume;
-(NSDate *)fireDate;
-(id<HMFTimerDelegate>)delegate;
-(void)fire;
@end
