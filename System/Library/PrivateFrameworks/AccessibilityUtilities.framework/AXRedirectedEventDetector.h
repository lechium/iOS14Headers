/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, AXDispatchTimer;

@interface AXRedirectedEventDetector : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentEvents;
	AXDispatchTimer* _flushEventsTimer;

}

@property (nonatomic,retain) NSMutableArray * recentEvents;                   //@synthesize recentEvents=_recentEvents - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * flushEventsTimer;              //@synthesize flushEventsTimer=_flushEventsTimer - In the implementation block
+(void)setFlushEventsTimerDelay:(double)arg1 ;
+(void)flushEvents;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(NSMutableArray *)recentEvents;
-(void)_flushEventsIfNecessary;
-(AXDispatchTimer *)flushEventsTimer;
-(double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)isRedirectedEvent:(id)arg1 ;
-(void)setRecentEvents:(NSMutableArray *)arg1 ;
-(void)setFlushEventsTimer:(AXDispatchTimer *)arg1 ;
@end

