/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NCNotificationListComponent <NCLegibilitySettingsAdjusting,PLContentSizeCategoryAdjusting>
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated; 
@property (nonatomic,copy) NSString * logDescription; 
@required
-(unsigned long long)notificationCount;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
-(void)modifyNotificationRequest:(id)arg1;
-(void)setDeviceAuthenticated:(BOOL)arg1;
-(BOOL)isDeviceAuthenticated;
-(NSString *)logDescription;
-(void)reloadNotificationRequest:(id)arg1;
-(void)setLogDescription:(id)arg1;
-(void)removeNotificationRequest:(id)arg1;
-(void)insertNotificationRequest:(id)arg1;
-(unsigned long long)count;

@end

