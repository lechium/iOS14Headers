//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "CoreTelephonyClientCarrierBundleDelegate-Protocol.h"

@class CoreTelephonyClient, NSMutableDictionary, NSObject, NSString, NWPathEvaluator;
@protocol OS_xpc_object;

@interface NESMAlwaysOnSession : NESMSession <CoreTelephonyClientCarrierBundleDelegate>
{
    _Bool _carrierBundleIMSUseIPSec;	// 8 = 0x8
    _Bool _stopped;	// 9 = 0x9
    unsigned int _carrierBundleNATKeepAliveIntervalOverCell;	// 12 = 0xc
    NWPathEvaluator *_IDSNexusPathEvaluator;	// 16 = 0x10
    unsigned long long _IDSNexusIfIndex;	// 24 = 0x18
    NSString *_IDSNexusDomain;	// 32 = 0x20
    CoreTelephonyClient *_CTClient;	// 40 = 0x28
    NSObject<OS_xpc_object> *_lastStartMessage;	// 48 = 0x30
    NSMutableDictionary *_VPNSessions;	// 56 = 0x38
    NSMutableDictionary *_VPNSessionRetryCounters;	// 64 = 0x40
    long long _retryIntervalMin;	// 72 = 0x48
    long long _retryIntervalMax;	// 80 = 0x50
    long long _retryIntervalMultipler;	// 88 = 0x58
    long long _retriesMax;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100009d4c
@property long long retriesMax; // @synthesize retriesMax=_retriesMax;
@property long long retryIntervalMultipler; // @synthesize retryIntervalMultipler=_retryIntervalMultipler;
@property long long retryIntervalMax; // @synthesize retryIntervalMax=_retryIntervalMax;
@property long long retryIntervalMin; // @synthesize retryIntervalMin=_retryIntervalMin;
@property(retain) NSMutableDictionary *VPNSessionRetryCounters; // @synthesize VPNSessionRetryCounters=_VPNSessionRetryCounters;
@property(retain) NSMutableDictionary *VPNSessions; // @synthesize VPNSessions=_VPNSessions;
@property(retain) NSObject<OS_xpc_object> *lastStartMessage; // @synthesize lastStartMessage=_lastStartMessage;
@property _Bool stopped; // @synthesize stopped=_stopped;
@property _Bool carrierBundleIMSUseIPSec; // @synthesize carrierBundleIMSUseIPSec=_carrierBundleIMSUseIPSec;
@property(retain) CoreTelephonyClient *CTClient; // @synthesize CTClient=_CTClient;
@property(retain) NSString *IDSNexusDomain; // @synthesize IDSNexusDomain=_IDSNexusDomain;
@property unsigned long long IDSNexusIfIndex; // @synthesize IDSNexusIfIndex=_IDSNexusIfIndex;
@property(retain) NWPathEvaluator *IDSNexusPathEvaluator; // @synthesize IDSNexusPathEvaluator=_IDSNexusPathEvaluator;
@property unsigned int carrierBundleNATKeepAliveIntervalOverCell; // @synthesize carrierBundleNATKeepAliveIntervalOverCell=_carrierBundleNATKeepAliveIntervalOverCell;
- (void)carrierBundleChange:(id)arg1;	// IMP=0x0000000100009ab4
- (void)reloadCarrierBundleSettings;	// IMP=0x000000010000967c
- (void)handleInstalledAppsChanged;	// IMP=0x000000010000966c
- (void)handleCaptiveNetworkPluginsChanged;	// IMP=0x000000010000965c
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x0000000100009584
- (void)applyControlPolicies;	// IMP=0x0000000100008ee8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100008b04
- (void)unwatchIDSNexusPath;	// IMP=0x00000001000089dc
- (void)watchIDSNexusPath;	// IMP=0x000000010000883c
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x0000000100008638
- (void)resetRetryCounterForSession:(id)arg1;	// IMP=0x0000000100008500
- (long long)nextRetryIntervalForSession:(id)arg1;	// IMP=0x00000001000081f8
- (long long)getRetryIntervalForSession:(id)arg1;	// IMP=0x00000001000080cc
- (void)setStatusFromSession:(id)arg1 andStatus:(int)arg2;	// IMP=0x0000000100007e98
- (void)alwaysOnRetry:(id)arg1;	// IMP=0x0000000100007af8
- (void)cleanUpSessionForDispose:(id)arg1;	// IMP=0x0000000100007960
- (void)addDefaultDropPolicyForSession:(id)arg1 pluginUUIDs:(id)arg2;	// IMP=0x00000001000077fc
- (void)uninstallForSession:(id)arg1;	// IMP=0x000000010000764c
- (void)installForSession:(id)arg1;	// IMP=0x00000001000074a4
- (_Bool)applyTunnelDataPolicyForSession:(id)arg1;	// IMP=0x00000001000071ac
- (void)didStartWithPIDForSession:(id)arg1 andVPNSession:(id)arg2 andPID:(int)arg3 error:(id)arg4;	// IMP=0x0000000100006e68
- (void)setStatus:(int)arg1;	// IMP=0x0000000100006744
- (void)handleNetworkPrepareResult:(id)arg1;	// IMP=0x0000000100006740
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100005aec
- (void)resetPrimaryTunnel;	// IMP=0x0000000100005810
- (id)copyExtendedStatus;	// IMP=0x00000001000055b8
- (id)copyStatistics;	// IMP=0x0000000100004d14
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100004c44
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100004778
- (void)handleWakeup;	// IMP=0x00000001000044d8
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x0000000100004294
- (void)handleStartMessage:(id)arg1;	// IMP=0x0000000100004008
- (void)handleInitializeState;	// IMP=0x0000000100003dec
- (int)type;	// IMP=0x0000000100003de4
- (void)dealloc;	// IMP=0x0000000100003d98
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x00000001000035bc
- (unsigned char)isVirtualInterface:(id)arg1;	// IMP=0x0000000100003378
- (id)createVPNSession:(id)arg1;	// IMP=0x00000001000030ec
- (id)getConfigurationIndex:(id)arg1;	// IMP=0x0000000100002f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
