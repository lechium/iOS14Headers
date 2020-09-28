//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ClientSession.h"

#import "FMFXPCInternalServerProtocol-Protocol.h"

@class NSMutableSet, NSNumber, NSObject, NSSet, NSString;
@protocol NSXPCProxyCreating><FMFXPCInternalClientProtocol, OS_dispatch_queue;

@interface FMFClientSession : ClientSession <FMFXPCInternalServerProtocol>
{
    _Bool _blockingDialogs;	// 8 = 0x8
    NSNumber *_clientPid;	// 16 = 0x10
    NSMutableSet *__handlesInternal;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_handlesQueue;	// 32 = 0x20
}

+ (id)sharedHandleTransactionQueue;	// IMP=0x0000000100016930
- (void).cxx_destruct;	// IMP=0x0000000100020380
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlesQueue; // @synthesize handlesQueue=_handlesQueue;
@property(nonatomic) _Bool blockingDialogs; // @synthesize blockingDialogs=_blockingDialogs;
@property(retain, nonatomic) NSMutableSet *_handlesInternal; // @synthesize _handlesInternal=__handlesInternal;
@property(retain, nonatomic) NSNumber *clientPid; // @synthesize clientPid=_clientPid;
- (oneway void)getFavoritesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000201b0
- (oneway void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ff54
- (oneway void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fc74
- (oneway void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010001fb10
- (oneway void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001f918
- (oneway void)fencesForHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f7b8
- (oneway void)getFences:(CDUnknownBlockType)arg1;	// IMP=0x000000010001f674
- (oneway void)deleteFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f44c
- (oneway void)addFence:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ef84
- (id)_encryptedData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001eb38
- (id)_encryptPayload:(id)arg1;	// IMP=0x000000010001e6c4
- (oneway void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e468
- (id)_decryptedData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001def8
- (id)_decryptPayload:(id)arg1 withToken:(id)arg2;	// IMP=0x000000010001d988
- (oneway void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d4ac
- (oneway void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d12c
- (oneway void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cce0
- (oneway void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c978
- (oneway void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c698
- (oneway void)showAirDropImportErrorAlert;	// IMP=0x000000010001c684
- (oneway void)showAirDropImportAlertForId:(id)arg1;	// IMP=0x000000010001c670
- (oneway void)notLoggedIntoiCloudAlert;	// IMP=0x000000010001c65c
- (oneway void)showNetworkOfflineDuringStopOfferAlert;	// IMP=0x000000010001c648
- (oneway void)showNetworkOfflineDuringOfferAlert;	// IMP=0x000000010001c634
- (oneway void)upselliCloudAlert;	// IMP=0x000000010001c620
- (oneway void)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c550
- (oneway void)showMeDeviceAlert;	// IMP=0x000000010001c458
- (oneway void)showGenericErrorAlert;	// IMP=0x000000010001c444
- (oneway void)show5XXDuringStopOfferAlert;	// IMP=0x000000010001c430
- (oneway void)show5XXDuringStartOfferAlert;	// IMP=0x000000010001c41c
- (oneway void)showForbiddenRegionAlert;	// IMP=0x000000010001c408
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;	// IMP=0x000000010001c3f4
- (oneway void)showShareMyLocationSystemServiceOffAlert;	// IMP=0x000000010001c3e0
- (oneway void)showLocationServicesSwitchOffAlert;	// IMP=0x000000010001c3cc
- (oneway void)showMaxFollowersLimitReachedAlert;	// IMP=0x000000010001c3b8
- (oneway void)showRestrictedAlert;	// IMP=0x000000010001c338
- (oneway void)showActiveDeviceChangedAlert;	// IMP=0x000000010001c324
- (oneway void)includeDeviceInAutomations:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c158
- (void)_refreshLocationsForHandles:(id)arg1;	// IMP=0x000000010001c058
- (oneway void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001bf04
- (oneway void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bd64
- (void)sendFMFIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000010001ba54
- (void)sendFMFIDSPacketsForHandleIdToMappingIdentifiers:(id)arg1;	// IMP=0x000000010001b8d0
- (oneway void)sessionHandleReport:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b5f0
- (oneway void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b1b0
- (oneway void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b0d8
- (oneway void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000010001b088
- (oneway void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b008
- (oneway void)exit5XXGracePeriod;	// IMP=0x000000010001af6c
- (oneway void)crashDaemon;	// IMP=0x000000010001aebc
- (oneway void)setSessionClientPid:(id)arg1;	// IMP=0x000000010001aeb0
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ae20
- (oneway void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad90
- (oneway void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aca4
- (oneway void)getRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001abc8
- (oneway void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab1c
- (oneway void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001aa80
- (oneway void)isNetworkReachable:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a9b4
- (oneway void)getMaxLocatingInterval:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a934
- (oneway void)allDevices:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a89c
- (oneway void)deviceSharingLocation:(CDUnknownBlockType)arg1;	// IMP=0x000000010001a42c
- (oneway void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a374
- (oneway void)setExpiredInitTimestamp;	// IMP=0x000000010001a32c
- (oneway void)sessionWasCreatedRefresh;	// IMP=0x000000010001a170
- (oneway void)forceRefresh;	// IMP=0x0000000100019fcc
- (oneway void)getAllLocations:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019e4c
- (oneway void)getAccountEmailAddress:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019db4
- (oneway void)isAllowFriendRequestsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019d30
- (oneway void)setAllowFriendRequestsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019ca8
- (oneway void)isMyLocationEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019c24
- (oneway void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019b9c
- (oneway void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019a3c
- (oneway void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001991c
- (oneway void)getHandlesSharingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019890
- (oneway void)getHandlesSharingMyLocation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019820
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019794
- (oneway void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019724
- (oneway void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019674
- (oneway void)fetchLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001946c
- (oneway void)fetchLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019244
- (oneway void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000191d4
- (oneway void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019040
- (oneway void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100018fd0
- (oneway void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100018bc8
- (oneway void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000187a8
- (oneway void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000186b0
- (oneway void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000185b8
- (oneway void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001838c
- (oneway void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100018160
- (void)dispayOfferAlertDialogsWithoutRepeatForError:(id)arg1;	// IMP=0x0000000100017ed4
- (oneway void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017c8c
- (oneway void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100017b90
- (oneway void)getCurrentTrackedHandles:(CDUnknownBlockType)arg1;	// IMP=0x00000001000179e0
- (oneway void)removeFriendHandles:(id)arg1;	// IMP=0x0000000100017844
- (oneway void)addFriendHandles:(id)arg1;	// IMP=0x00000001000172bc
@property(readonly, nonatomic) NSSet *handles;
- (double)_alertTimeoutInterval;	// IMP=0x00000001000170b4
- (void)upselliCloudIfNeeded;	// IMP=0x0000000100016f34
- (oneway void)importMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016c08
- (oneway void)invalidateMappingPackets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016b20
@property(readonly, nonatomic) id <NSXPCProxyCreating><FMFXPCInternalClientProtocol> clientProxy;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000169a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
