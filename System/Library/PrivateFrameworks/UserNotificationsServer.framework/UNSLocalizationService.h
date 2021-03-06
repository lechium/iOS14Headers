/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSLocalizationService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _bundleIdentifierToBundle;
	NSMutableDictionary* _bundleIdentifierToBundleURL;

}
-(id)bundleWithIdentifier:(id)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(id)init;
-(void)_queue_notificationSourcesDidInstall:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(id)_queue_bundleWithIdentifier:(id)arg1 ;
@end

