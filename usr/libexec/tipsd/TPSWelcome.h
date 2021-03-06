//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TPSNotificationController, TPSTipsManager;
@protocol TPSWelcomeDelegate;

@interface TPSWelcome : NSObject
{
    _Bool _welcomeXPCActivityScheduleInProgress;	// 8 = 0x8
    id <TPSWelcomeDelegate> _delegate;	// 16 = 0x10
    TPSTipsManager *_tipsManager;	// 24 = 0x18
    TPSNotificationController *_notificationController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000066ec
@property(retain, nonatomic) TPSNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property(retain, nonatomic) TPSTipsManager *tipsManager; // @synthesize tipsManager=_tipsManager;
@property(nonatomic) _Bool welcomeXPCActivityScheduleInProgress; // @synthesize welcomeXPCActivityScheduleInProgress=_welcomeXPCActivityScheduleInProgress;
@property(nonatomic) __weak id <TPSWelcomeDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)stopWelcomeNotification;	// IMP=0x00000001000064a4
- (void)welcomeNotificationDisplayed;	// IMP=0x00000001000061f0
- (void)registerToNotifyWelcome;	// IMP=0x0000000100005f28
- (_Bool)setupCompleted;	// IMP=0x0000000100005f08
- (void)createWelcomeXPCActivity;	// IMP=0x0000000100005b7c
- (void)scheduleWelcomeNotificationActivity;	// IMP=0x0000000100005a04
- (id)getCurrentWelcomeActivityCritiera;	// IMP=0x000000010000580c
- (_Bool)shouldShowWelcomeNotification;	// IMP=0x0000000100005570
- (void)reconnectWelcomeIfNeeded:(_Bool)arg1;	// IMP=0x00000001000050dc
@property(readonly, nonatomic) unsigned long long reminderState;
- (id)initWithDelegate:(id)arg1 tipsManager:(id)arg2 notificationController:(id)arg3;	// IMP=0x0000000100004e90

@end

