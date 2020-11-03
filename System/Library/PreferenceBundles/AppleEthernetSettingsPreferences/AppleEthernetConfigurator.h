//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppleEthernetProtocolConfiguratorDelegate-Protocol.h"

@class AppleEthernetInterface, NSArray, WFNetworkSettingsConfig;
@protocol OS_dispatch_queue, SettingsDelegate;

@interface AppleEthernetConfigurator : NSObject <AppleEthernetProtocolConfiguratorDelegate>
{
    id <SettingsDelegate> _settingsDelegate;	// 8 = 0x8
    struct __SCPreferences *_preferences;	// 16 = 0x10
    struct __SCDynamicStore *_dynamicStore;	// 24 = 0x18
    NSArray *_configurators;	// 32 = 0x20
    AppleEthernetInterface *_interface;	// 40 = 0x28
    WFNetworkSettingsConfig *_previousState;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000050b4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) WFNetworkSettingsConfig *previousState; // @synthesize previousState=_previousState;
@property(retain, nonatomic) AppleEthernetInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSArray *configurators; // @synthesize configurators=_configurators;
@property(nonatomic) struct __SCDynamicStore *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property(nonatomic) struct __SCPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <SettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
- (struct __SCNetworkService *)findServiceForInterface:(id)arg1;	// IMP=0x0000000000004e10
- (int)commitAndApplyChangesToPreferences;	// IMP=0x0000000000004dcc
- (int)unlockPreferences;	// IMP=0x0000000000004da4
- (int)lockPreferences;	// IMP=0x0000000000004d50
- (id)getSettingsForKey:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2 withManualMode:(_Bool)arg3;	// IMP=0x0000000000004c84
- (id)getManualSettingsForKey:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;	// IMP=0x0000000000004c74
- (id)getDynamicSettingsForKey:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;	// IMP=0x0000000000004c64
- (id)getPersistentSettingsForKey:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2;	// IMP=0x0000000000004c14
- (_Bool)updatePreferencesForService:(struct __SCNetworkService *)arg1 withConfig:(id)arg2;	// IMP=0x0000000000004a8c
- (void)saveConfig:(id)arg1;	// IMP=0x0000000000004910
- (void)renewLease;	// IMP=0x0000000000004818
- (id)currentConfig;	// IMP=0x0000000000004640
- (_Bool)setNotificationKeys;	// IMP=0x00000000000042e4
- (void)dealloc;	// IMP=0x0000000000004278
- (id)initWithInterface:(id)arg1;	// IMP=0x0000000000003e4c

@end
