//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADClientStateDelegate-Protocol.h"
#import "ADSSession_RPC-Protocol.h"

@class ADClientState, ADDeviceInfo, NSData, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSXPCConnection;

@interface ADSSession : NSObject <ADSSession_RPC, ADClientStateDelegate>
{
    _Bool _clientIsPrivileged;	// 8 = 0x8
    _Bool _hasNewsEntitlement;	// 9 = 0x9
    _Bool _canReceiveAdsInBackground;	// 10 = 0xa
    _Bool _hasMobileInstallationData;	// 11 = 0xb
    _Bool _actionInProgress;	// 12 = 0xc
    _Bool _isOpen;	// 13 = 0xd
    _Bool _policyEngineEnabled;	// 14 = 0xe
    unsigned int _state;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_appVersion;	// 32 = 0x20
    NSData *_clientAuditToken;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    double _connectTime;	// 56 = 0x38
    ADDeviceInfo *_deviceInfo;	// 64 = 0x40
    unsigned long long _adSpaceCount;	// 72 = 0x48
    NSString *_authenticationUserName;	// 80 = 0x50
    NSURL *_contentProxyURL;	// 88 = 0x58
    NSURL *_contentProxyURLConnect;	// 96 = 0x60
    NSString *_configVersion;	// 104 = 0x68
    long long _proxyType;	// 112 = 0x70
    ADClientState *_clientState;	// 120 = 0x78
    NSMutableDictionary *_adSpacesByCreativeType;	// 128 = 0x80
    NSMutableArray *_adSpaceControllers;	// 136 = 0x88
    NSString *_clientLinkedOnVersion;	// 144 = 0x90
    long long _clientApplicationRunState;	// 152 = 0x98
    NSString *_clientApplicationVersion;	// 160 = 0xa0
    NSMutableArray *_actionsAwaitingMobileInstallationData;	// 168 = 0xa8
    double _lastPolicyEngineEventTimestamp;	// 176 = 0xb0
    double _lastBannerEventTimestamp;	// 184 = 0xb8
    double _lastClientStateChangeTimestamp;	// 192 = 0xc0
    NSMutableArray *_outstandingStationEntryRecords;	// 200 = 0xc8
    NSMutableArray *_outstandingSongBeganRecords;	// 208 = 0xd0
    NSMutableDictionary *_reconstructingAdSpaces;	// 216 = 0xd8
}

+ (void)closeCheck:(id)arg1;	// IMP=0x000000010001a378
- (void).cxx_destruct;	// IMP=0x0000000100025278
@property(retain, nonatomic) NSMutableDictionary *reconstructingAdSpaces; // @synthesize reconstructingAdSpaces=_reconstructingAdSpaces;
@property(readonly, nonatomic) NSMutableArray *outstandingSongBeganRecords; // @synthesize outstandingSongBeganRecords=_outstandingSongBeganRecords;
@property(readonly, nonatomic) NSMutableArray *outstandingStationEntryRecords; // @synthesize outstandingStationEntryRecords=_outstandingStationEntryRecords;
@property(nonatomic) _Bool policyEngineEnabled; // @synthesize policyEngineEnabled=_policyEngineEnabled;
@property(nonatomic) double lastClientStateChangeTimestamp; // @synthesize lastClientStateChangeTimestamp=_lastClientStateChangeTimestamp;
@property(nonatomic) double lastBannerEventTimestamp; // @synthesize lastBannerEventTimestamp=_lastBannerEventTimestamp;
@property(nonatomic) double lastPolicyEngineEventTimestamp; // @synthesize lastPolicyEngineEventTimestamp=_lastPolicyEngineEventTimestamp;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(readonly, nonatomic) _Bool actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property(retain, nonatomic) NSMutableArray *actionsAwaitingMobileInstallationData; // @synthesize actionsAwaitingMobileInstallationData=_actionsAwaitingMobileInstallationData;
@property(nonatomic) _Bool hasMobileInstallationData; // @synthesize hasMobileInstallationData=_hasMobileInstallationData;
@property(copy, nonatomic) NSString *clientApplicationVersion; // @synthesize clientApplicationVersion=_clientApplicationVersion;
@property(nonatomic) long long clientApplicationRunState; // @synthesize clientApplicationRunState=_clientApplicationRunState;
@property(copy, nonatomic) NSString *clientLinkedOnVersion; // @synthesize clientLinkedOnVersion=_clientLinkedOnVersion;
@property(nonatomic) _Bool canReceiveAdsInBackground; // @synthesize canReceiveAdsInBackground=_canReceiveAdsInBackground;
@property(retain, nonatomic) NSMutableArray *adSpaceControllers; // @synthesize adSpaceControllers=_adSpaceControllers;
@property(retain, nonatomic) NSMutableDictionary *adSpacesByCreativeType; // @synthesize adSpacesByCreativeType=_adSpacesByCreativeType;
@property(retain, nonatomic) ADClientState *clientState; // @synthesize clientState=_clientState;
@property(nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;
@property(copy, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(copy, nonatomic) NSURL *contentProxyURLConnect; // @synthesize contentProxyURLConnect=_contentProxyURLConnect;
@property(copy, nonatomic) NSURL *contentProxyURL; // @synthesize contentProxyURL=_contentProxyURL;
@property(nonatomic) _Bool hasNewsEntitlement; // @synthesize hasNewsEntitlement=_hasNewsEntitlement;
@property(readonly, nonatomic) _Bool clientIsPrivileged; // @synthesize clientIsPrivileged=_clientIsPrivileged;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned long long adSpaceCount; // @synthesize adSpaceCount=_adSpaceCount;
@property(retain, nonatomic) ADDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) double connectTime; // @synthesize connectTime=_connectTime;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSData *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *description;
- (void)_test_closeUnassignedBannerControllers;	// IMP=0x0000000100024cdc
- (void)_test_clearCurrentAdSpaceControllerAds;	// IMP=0x0000000100024c5c
- (void)_remote_reportErrorEvent:(int)arg1 forAdSpaceWithIdentifier:(id)arg2 errorDetails:(id)arg3 badURLs:(id)arg4;	// IMP=0x0000000100024a18
- (void)_remote_captureAnalytics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024608
- (void)_remote_segmentDataForSignedInUser:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024134
- (void)_remote_addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;	// IMP=0x0000000100023c84
- (void)_remote_creativeControllerNavigationAttemptBlockedDueToAccidentalTapForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100023b24
- (void)_remote_creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvokedForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x00000001000239c4
- (void)_remote_signatureForRequestData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023840
- (void)_remote_reportPrivacyAdMarkWasTappedForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x00000001000236ec
- (void)_remote_reportPrivacyAdTransparencyDidLinkOutForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100023598
- (void)_remote_reportPrivacyAdTransparencyDidRenderTransparencyForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100023444
- (void)_remote_reportPrivacyAdTransparencyDidDisappearForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x00000001000232f0
- (void)_remote_reportPrivacyAdTransparencyDidAppearForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x000000010002319c
- (void)_remote_reportContentImpressionForAdSpaceWithIdenfier:(id)arg1;	// IMP=0x0000000100023048
- (void)_remote_actionCompletedWithSystemEvent:(int)arg1 forAdSpaceWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022e48
- (void)_remote_reportSystemEvent:(int)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100022cb0
- (void)_remote_bannerBeginActionForAdSpaceWithIdentifier:(id)arg1 fromFrame:(id)arg2 tapLocation:(id)arg3 reportAnyway:(_Bool)arg4;	// IMP=0x0000000100022a6c
- (void)_remote_determineActionForAdSpaceWithIdentifier:(id)arg1 ForTapAtLocation:(id)arg2 inFrame:(id)arg3 withMRAIDAction:(id)arg4 completeHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000226c8
- (void)_remote_reportPreRollDidStopForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100022574
- (void)_remote_reportPreRollDidStartForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100022420
- (void)_remote_userDidSkipPrerollForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x00000001000222cc
- (void)_priv_adSpaceDidDisappearForAdSpaceIdentifier:(id)arg1;	// IMP=0x000000010002216c
- (void)_priv_adSpaceDidAppearForAdSpaceIdentifier:(id)arg1;	// IMP=0x000000010002200c
- (void)_priv_setServerURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100021e28
- (void)_remote_reportNativeClickEventForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100021cd4
- (void)_remote_bannerRefuseActionForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100021b74
- (void)_remote_bannerCancelActionForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100021a14
- (void)_remote_setSelectedAdFrame:(id)arg1 withContentFrame:(id)arg2 atScale:(float)arg3 forAdSpaceWithIdentifier:(id)arg4;	// IMP=0x00000001000217c8
- (void)_remote_setAdSpaceType:(int)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100021630
- (void)_remote_sendAdspaceStatusEventForAdSpaceWithIdentifier:(id)arg1 withAdSpaceInfo:(id)arg2;	// IMP=0x0000000100021414
- (void)_remote_setVisibility:(long long)arg1 forAdSpaceWithIdentifier:(id)arg2 withAdSpaceInfo:(id)arg3;	// IMP=0x00000001000211a8
- (void)_remote_setAuthenticationUserName:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100020fc4
- (void)_remote_setSection:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100020de0
- (void)_remote_closeAdSpaceWithIdentifier:(id)arg1;	// IMP=0x0000000100020c80
- (void)_remote_reportTotalCreativeRequestCount:(long long)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x0000000100020ae8
- (void)_remote_requestAdSpaceWithConfiguration:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x000000010002090c
- (void)_remote_reportPrerollRequest;	// IMP=0x0000000100020840
- (void)_reportSubscriptionEventWithType:(long long)arg1 withQToken:(id)arg2 sourceIdentifier:(id)arg3 eventTime:(double)arg4 info:(id)arg5;	// IMP=0x0000000100020590
- (void)_remote_disablePolicyEngine;	// IMP=0x00000001000204ac
- (void)_remote_enablePolicyEngine;	// IMP=0x000000010002027c
- (void)remoteDismissViewControllerForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x000000010002016c
- (void)remoteDismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ffe8
- (void)remoteActionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x000000010001fed8
- (void)remoteRequestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 adSpaceWithIdentifier:(id)arg3;	// IMP=0x000000010001fd54
- (void)remoteOpenURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x000000010001fc0c
- (void)remoteSetRequiresFastVisibility:(_Bool)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010001faf0
- (void)remoteCloseAdSpaceWithIdentifier:(id)arg1;	// IMP=0x000000010001f9e0
- (void)adImpressionDidReportForAdSpaceWithIdentifier:(id)arg1;	// IMP=0x000000010001f8d0
- (void)creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010001f788
- (void)adImpressionDidLoadWithPublicAttributes:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;	// IMP=0x000000010001f640
@property(readonly, nonatomic) _Bool applicationStateAllowsAds;
@property(readonly, nonatomic) _Bool clientIsVisible;
- (_Bool)_canReceiveAdsInState:(unsigned int)arg1;	// IMP=0x000000010001ea50
- (void)adSpaceControllerDidClose:(id)arg1;	// IMP=0x000000010001e99c
- (id)requestProperties;	// IMP=0x000000010001e6a4
- (void)adSpaceConstructionComplete:(id)arg1 withIdentifier:(id)arg2 andAdResponseID:(id)arg3;	// IMP=0x000000010001e314
- (void)attemptToReconstructAdSpaceWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d9f4
- (void)deferAdRequestUntilConstructionComplete:(id)arg1;	// IMP=0x000000010001d85c
- (_Bool)adSpaceUnderConstruction:(id)arg1;	// IMP=0x000000010001d798
- (void)adSpaceWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d3b8
- (void)registerAdSpace:(id)arg1;	// IMP=0x000000010001d1bc
- (void)_remote_setClientLinkedOnVersion:(id)arg1;	// IMP=0x000000010001d0d0
- (void)_remote_didBecomeActive;	// IMP=0x000000010001cff4
- (void)_remote_willResignActive;	// IMP=0x000000010001cf18
- (void)close;	// IMP=0x000000010001cb34
- (void)closeAllAdSpaces;	// IMP=0x000000010001c8e8
- (void)considerClosing;	// IMP=0x000000010001c83c
@property(readonly, nonatomic) _Bool shouldClose;
- (void)_didReceiveMemoryWarning;	// IMP=0x000000010001c38c
- (void)willLoadAdForType:(int)arg1 section:(id)arg2 serverURL:(id)arg3;	// IMP=0x000000010001c1e0
- (id)adSpaceControllerDetailsMatchingServerURL:(id)arg1 section:(id)arg2 adType:(int)arg3;	// IMP=0x000000010001bf6c
- (_Bool)_adSpaceController:(id)arg1 matchesServerURL:(id)arg2 section:(id)arg3 adType:(int)arg4;	// IMP=0x000000010001bcb0
- (void)closeAdSpace:(id)arg1;	// IMP=0x000000010001bb10
- (void)reassignAdSpaceControllersForCreativeType:(int)arg1;	// IMP=0x000000010001b3e8
- (id)_sortedAdSpacesForCreativeType:(int)arg1;	// IMP=0x000000010001b130
- (long long)_countOfControllersForCreativeType:(int)arg1;	// IMP=0x000000010001af68
- (id)_unassignedAdSpaceControllerForCreativeType:(int)arg1;	// IMP=0x000000010001ad94
- (id)adSpaceForImpressionIdentifier:(id)arg1 forCreativetype:(int)arg2;	// IMP=0x000000010001aae4
- (void)clientStateDidChange:(id)arg1;	// IMP=0x000000010001a96c
- (void)_lookupMobileInstallationData;	// IMP=0x000000010001a89c
- (void)_handleMobileInstallationDataVersion:(id)arg1 runState:(int)arg2;	// IMP=0x000000010001a684
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 version:(id)arg3;	// IMP=0x000000010001947c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
