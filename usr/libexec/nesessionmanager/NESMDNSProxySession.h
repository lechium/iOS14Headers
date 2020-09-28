//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMFlowDivertSession.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface NESMDNSProxySession : NESMFlowDivertSession
{
    _Bool _installed;	// 8 = 0x8
    _Bool _externallyStopped;	// 9 = 0x9
    unsigned long long _pluginStartTicks;	// 16 = 0x10
    unsigned long long _restartIntervalSecs;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_restartTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100028534
@property(retain, nonatomic) NSObject<OS_dispatch_source> *restartTimer; // @synthesize restartTimer=_restartTimer;
@property unsigned long long restartIntervalSecs; // @synthesize restartIntervalSecs=_restartIntervalSecs;
@property unsigned long long pluginStartTicks; // @synthesize pluginStartTicks=_pluginStartTicks;
@property _Bool externallyStopped; // @synthesize externallyStopped=_externallyStopped;
@property(getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
- (void)handleUserLogin;	// IMP=0x0000000100028488
- (void)sendSystemDNSSettings;	// IMP=0x00000001000281bc
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x00000001000281b8
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x00000001000280f0
- (void)uninstall;	// IMP=0x0000000100028020
- (void)install;	// IMP=0x0000000100027e18
- (void)prepareNetwork;	// IMP=0x0000000100027dd0
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x0000000100027d54
- (void)handleStartMessage:(id)arg1;	// IMP=0x0000000100027cec
- (void)setStatus:(int)arg1;	// IMP=0x00000001000277d0
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x00000001000274b8
- (void)handleCaptiveNetworkPluginsChanged;	// IMP=0x00000001000273fc
- (void)handleInstalledAppsChanged;	// IMP=0x0000000100027340
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x000000010002728c
- (void)createConnectParametersWithStartMessage:(id)arg1;	// IMP=0x000000010002715c
- (void)resetProviderDesignatedRequirementInConfiguration:(id)arg1;	// IMP=0x00000001000270a4
- (void)setProviderDesignatedRequirement:(id)arg1;	// IMP=0x0000000100027038
- (id)providerDesignatedRequirement;	// IMP=0x0000000100026fe4
- (id)authenticationPluginBundleIdentifier;	// IMP=0x0000000100026fdc
- (id)providerBundleIdentifier;	// IMP=0x0000000100026f88
- (long long)agentPluginClass;	// IMP=0x0000000100026f80
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4;	// IMP=0x0000000100026e64

@end
