/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface CDMonitorManager : NSObject {

	NSMutableDictionary* _monitors;
	NSMutableSet* _lazyMonitorNames;
	/*^block*/id _generalInstantHandler;
	/*^block*/id _generalHistoricalHandler;
	/*^block*/id _generalHistoricalDeletingHandler;
	/*^block*/id _generalShutdownHandler;
	NSMutableDictionary* _instantHandlerMap;
	NSMutableDictionary* _historicalHandlerMap;
	NSMutableSet* _shutdownHandlingMonitors;
	NSObject*<OS_dispatch_queue> _monitorWorkQueue;
	NSObject*<OS_dispatch_source> _SIGTERMHandlerSource;

}
+(id)monitorManagerForEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(void)setHistoricalDeletingHandler:(/*^block*/id)arg1 ;
-(void)_setHistoricalHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(id)_allStreamNames;
-(id)_currentEventForStreamName:(id)arg1 ;
-(void)addMonitor:(id)arg1 ;
-(void)_addMonitor:(id)arg1 forStreamName:(id)arg2 ;
-(id)lastUpdateForStream:(id)arg1 ;
-(void)loadMonitorManagers;
-(void)stopMonitorForStream:(id)arg1 ;
-(id)currentEventForStream:(id)arg1 ;
-(void)_removeMonitorForStreamName:(id)arg1 ;
-(id)_monitorForStreamName:(id)arg1 ;
-(void)setInstantHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)_setInstantHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(void)startMonitorForStream:(id)arg1 ;
-(BOOL)_hasMonitorForStreamName:(id)arg1 ;
-(void)removeMonitor:(id)arg1 ;
-(id)initWithEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(void)start;
-(void)update;
-(void)setInstantHandler:(/*^block*/id)arg1 ;
-(void)_stopMonitorForStreamName:(id)arg1 ;
-(void)setShutdownHandler:(/*^block*/id)arg1 ;
-(void)setHistoricalHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)updateForStream:(id)arg1 ;
-(id)_lastUpdateForStreamName:(id)arg1 ;
-(void)_startMonitorForStreamName:(id)arg1 ;
-(id)currentEvent;
-(BOOL)hasMonitor:(id)arg1 ;
-(id)lastUpdate;
-(id)_allMonitors;
-(void)handleShutdownNotification;
-(void)setHistoricalHandler:(/*^block*/id)arg1 ;
-(void)populateCurrentValueForStreamName:(id)arg1 ;
-(void)stop;
-(void)deliverNotificationEvent:(id)arg1 ;
-(void)_updateForStreamName:(id)arg1 ;
@end

