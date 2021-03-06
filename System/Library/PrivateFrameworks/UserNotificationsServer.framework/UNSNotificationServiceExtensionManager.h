/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:51 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject {

	id _matchingContext;
	NSDictionary* _extensionIdentifierByContainingAppIdentifier;

}

@property (copy) NSDictionary * extensionIdentifierByContainingAppIdentifier;              //@synthesize extensionIdentifierByContainingAppIdentifier=_extensionIdentifierByContainingAppIdentifier - In the implementation block
-(id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)extensionIdentifierByContainingAppIdentifier;
-(void)dealloc;
-(id)init;
-(void)_startMonitoringExtensions;
-(void)setExtensionIdentifierByContainingAppIdentifier:(NSDictionary *)arg1 ;
-(void)_stopMonitoringExtensions;
@end

