/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WDNotificationPolicy.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAppDelegate : NSObject <WDNotificationPolicy, UIApplicationTestingDelegate> {

	 healthStore;

}
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(id)init;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
@end
