/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFLocalNotificationAccessResource : WFAccessResource {

	unsigned long long _globalLevelStatus;

}

@property (assign,nonatomic) unsigned long long globalLevelStatus;              //@synthesize globalLevelStatus=_globalLevelStatus - In the implementation block
+(void)initialize;
+(BOOL)isSystemResource;
+(void)requestLocalNotificationsAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)icon;
-(id)name;
-(void)refreshAvailability;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
-(void)setGlobalLevelStatus:(unsigned long long)arg1 ;
@end
