/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;
@class NSObject, BKSApplicationStateMonitor, NSMutableDictionary, NSCountedSet, NSMutableSet, NSSet;

@interface FPDProcessMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	BKSApplicationStateMonitor* _monitor;
	NSMutableDictionary* _bundleIDForPID;
	NSCountedSet* _bundleIDs;
	NSCountedSet* _pids;
	NSMutableSet* _foregroundBundleIDs;
	NSSet* _excludedBundleIDs;
	id<FPDProcessMonitorDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (__weak) id<FPDProcessMonitorDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isForeground;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)invalidate;
-(void)_handleAppStateChange:(id)arg1 ;
-(id)_createAppMonitor;
-(void)addPIDToObserve:(int)arg1 ;
-(void)removePIDToObserve:(int)arg1 ;
-(id)prettyDescription;
-(void)setDelegate:(id<FPDProcessMonitorDelegate>)arg1 ;
-(id<FPDProcessMonitorDelegate>)delegate;
-(void)_addPIDToObserve:(int)arg1 ;
-(void)process:(int)arg1 didBecomeForeground:(BOOL)arg2 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateMonitoredBundleIDs;
-(id)initWithExcludedBundleIDs:(id)arg1 ;
-(id)description;
-(void)_removePIDToObserve:(int)arg1 ;
@end
