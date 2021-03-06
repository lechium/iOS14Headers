/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying> {

	NSString* _notificationIdentifier;
	NSString* _bundleIdentifier;
	NSDate* _date;

}

@property (copy,readonly) NSString * notificationIdentifier;              //@synthesize notificationIdentifier=_notificationIdentifier - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
+(id)metadataForNotificationRequest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSString *)bundleIdentifier;
-(NSString *)notificationIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 date:(id)arg3 ;
@end

