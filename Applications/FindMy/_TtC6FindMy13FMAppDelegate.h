//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationTestingDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class MISSING_TYPE, UIWindow;

@interface _TtC6FindMy13FMAppDelegate : UIResponder <UIApplicationTestingDelegate, UNUserNotificationCenterDelegate>
{
    MISSING_TYPE *application;	// 8 = 0x8
    MISSING_TYPE *window;	// 16 = 0x10
    MISSING_TYPE *mediator;	// 24 = 0x18
    MISSING_TYPE *alertQueue;	// 32 = 0x20
    MISSING_TYPE *isShowingAlert;	// 40 = 0x28
    MISSING_TYPE *mainViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100150958
- (id)init;	// IMP=0x0000000100150aa0
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001001508c4
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100150878
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010014ff1c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010014feb8
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000010014fe6c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000010014fe08
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010014fd54
@property(nonatomic, retain) UIWindow *window; // @synthesize window;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b4dc
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x000000010006a7ac
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012da4c
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100128424

@end

