/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSNotificationScheduleRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_dateFormatter;
-(void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)scheduleForBundleIdentifier:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(void)performMigration;
-(id)allBundleIdentifiers;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeScheduleForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg1 ;
-(id)_queue_scheduleForBundleIdentifier:(id)arg1 ;
@end

