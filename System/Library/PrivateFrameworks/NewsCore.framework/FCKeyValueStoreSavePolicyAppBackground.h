/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCKeyValueStoreSavePolicy.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@protocol FCBackgroundTaskable, OS_dispatch_queue;
@class NSObject, NSString;

@interface FCKeyValueStoreSavePolicyAppBackground : FCKeyValueStoreSavePolicy <FCAppActivityObserving> {

	id<FCBackgroundTaskable> _backgroundTaskable;
	BOOL _inBackground;
	NSObject*<OS_dispatch_queue> _pendingQueue;
	/*^block*/id _pendingHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activityObservingApplicationDidEnterBackground;
-(void)_saveIfNeeded;
-(id)initWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2 ;
-(void)scheduleSaveOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)activityObservingApplicationWillEnterForeground;
-(void)activityObservingApplicationWillTerminate;
@end

