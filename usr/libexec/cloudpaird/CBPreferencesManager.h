//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CBPreferencesManager : NSObject
{
}

+ (_Bool)isRunningInRecovery;	// IMP=0x0000000100053db0
+ (id)deviceName;	// IMP=0x0000000100053d90
+ (void)setuserPreference:(id)arg1 value:(in bycopy id)arg2 sync:(_Bool)arg3;	// IMP=0x0000000100053c24
+ (id)readUserPreference:(id)arg1;	// IMP=0x0000000100053be8

@end
