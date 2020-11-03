//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DNDBehaviorSettings, DNDBypassSettings, DNDScheduleSettings, DNDSettingsService;

@protocol DNDSettingsUpdateListener <NSObject>

@optional
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)settingsService:(DNDSettingsService *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
@end
