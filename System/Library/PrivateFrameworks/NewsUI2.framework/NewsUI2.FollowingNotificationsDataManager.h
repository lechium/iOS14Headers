/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCNewsletterSubscriptionObserver.h>

@interface NewsUI2.FollowingNotificationsDataManager : NSObject <FCUserInfoObserving, FCNewsletterSubscriptionObserver> {

	 delegate;
	 subscriptionService;
	 tagService;
	 userNotificationCenter;
	 configurationManager;
	 newsletterManager;

}
-(void)newsletterSubscriptionChangedFromSubscription:(long long)arg1 ;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)init;
-(void)determineSystemNotificationSettingsStatus;
@end
