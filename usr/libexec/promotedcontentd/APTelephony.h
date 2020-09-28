//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSError, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface APTelephony : NSObject
{
    _Bool _canReachTheNetwork;	// 8 = 0x8
    _Bool _internationalRoaming;	// 9 = 0x9
    _Bool _hasDeterminedRoamingStatus;	// 10 = 0xa
    _Bool _updatingNetworkStatus;	// 11 = 0xb
    _Bool _updatingTelephonyStatus;	// 12 = 0xc
    _Bool _telephonyUpdateScheduled;	// 13 = 0xd
    unsigned int _reachabilityFlags;	// 16 = 0x10
    NSString *_homeCarrierMCC;	// 24 = 0x18
    NSString *_homeCarrierMNC;	// 32 = 0x20
    long long _networkType;	// 40 = 0x28
    CoreTelephonyClient *_ctClient;	// 48 = 0x30
    CTXPCServiceSubscriptionContext *_ctSubscriptionContext;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSError *_networkError;	// 72 = 0x48
    NSError *_telephonyError;	// 80 = 0x50
    struct __SCNetworkReachability *_reachability;	// 88 = 0x58
}

+ (id)telephony;	// IMP=0x0000000100059a8c
- (void).cxx_destruct;	// IMP=0x000000010005b264
@property unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSError *telephonyError; // @synthesize telephonyError=_telephonyError;
@property _Bool telephonyUpdateScheduled; // @synthesize telephonyUpdateScheduled=_telephonyUpdateScheduled;
@property _Bool updatingTelephonyStatus; // @synthesize updatingTelephonyStatus=_updatingTelephonyStatus;
@property(retain) NSError *networkError; // @synthesize networkError=_networkError;
@property _Bool updatingNetworkStatus; // @synthesize updatingNetworkStatus=_updatingNetworkStatus;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) CTXPCServiceSubscriptionContext *ctSubscriptionContext; // @synthesize ctSubscriptionContext=_ctSubscriptionContext;
@property(retain) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property long long networkType; // @synthesize networkType=_networkType;
@property _Bool hasDeterminedRoamingStatus; // @synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus;
@property _Bool internationalRoaming; // @synthesize internationalRoaming=_internationalRoaming;
@property(retain) NSString *homeCarrierMNC; // @synthesize homeCarrierMNC=_homeCarrierMNC;
@property(retain) NSString *homeCarrierMCC; // @synthesize homeCarrierMCC=_homeCarrierMCC;
@property(readonly) NSNumber *signalStrength;
- (long long)dataIndicatorToConnectionType:(int)arg1;	// IMP=0x000000010005af38
- (void)_checkForNetworkAndNotify;	// IMP=0x000000010005abf8
@property _Bool canReachTheNetwork;
- (void)_startMonitoringNetwork;	// IMP=0x000000010005a850
- (void)gatherTelephonyProperties;	// IMP=0x000000010005a0b8
- (void)networkDidChange:(id)arg1;	// IMP=0x0000000100059ee8
- (void)_startMonitoringTelephony;	// IMP=0x0000000100059d34
@property(readonly) _Bool networkDataValid;
@property(readonly) _Bool telephonyDataValid;
- (void)dealloc;	// IMP=0x0000000100059c48
- (id)init;	// IMP=0x0000000100059af8

@end
