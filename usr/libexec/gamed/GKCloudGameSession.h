//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKRecord, GKCloudPlayer, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface GKCloudGameSession : NSObject <NSSecureCoding>
{
    CKRecord *_record;	// 8 = 0x8
    NSDictionary *_playersByIdentifier;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSURL *_url;	// 32 = 0x20
}

+ (void)badgeCountForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100112914
+ (void)updateBadgeCountsForContainerName:(id)arg1 useCacheDirectly:(_Bool)arg2;	// IMP=0x000000010011256c
+ (void)updateBadgeCountsForContainerName:(id)arg1;	// IMP=0x000000010011255c
+ (void)deleteInviteRecordWithRecordID:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x00000001001122f8
+ (void)searchAndSaveIdentityForRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100111334
+ (void)saveInviteRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100110a34
+ (id)getAssociatedAccounts;	// IMP=0x00000001001108bc
+ (void)generateAndStoreInviteBulletinForRecord:(id)arg1 database:(id)arg2;	// IMP=0x000000010010ff1c
+ (id)packFakeTurnBasedBulletinWithZoneData:(id)arg1;	// IMP=0x000000010010fa44
+ (id)packFakeRealTimeBulletinWithZoneData:(id)arg1;	// IMP=0x000000010010ef14
+ (void)reportPlayerStateChangesToClients:(id)arg1 forUpdatedSession:(id)arg2 oldSession:(id)arg3;	// IMP=0x000000010010dcc0
+ (void)openStoreForBundleID:(id)arg1;	// IMP=0x000000010010c6f8
+ (void)launchOrOpenAppStoreForBundleID:(id)arg1;	// IMP=0x000000010010c6a0
+ (void)acceptShareMetadata:(id)arg1 retryCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010c098
+ (void)showAcceptAlertWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010bed8
+ (void)handleLegacyShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010b500
+ (void)handleSessionShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010ac9c
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010a4bc
+ (void)acceptShareURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010a1d4
+ (void)saveInformationForPrimaryUserForSessionWithShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001098ac
+ (void)fetchShareMetadataForURL:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001093f8
+ (void)fetchShareRecordsWithRecordIDs:(id)arg1 inDatabase:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001092d4
+ (id)cloudKitOperationConfigurationForSocialGamingSessionsContainer;	// IMP=0x00000001001080e8
+ (id)cloudKitOperationConfigurationForContainer:(id)arg1;	// IMP=0x0000000100108058
+ (void)subscribeToAllDBwithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100107b30
+ (void)getZoneNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100107540
+ (void)createZoneWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100107330
+ (void)bundleIDsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100106114
+ (void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001058b0
+ (void)createSessionWithContainerName:(id)arg1 title:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100104c70
+ (_Bool)isCloudDriveEnabledForBundleID:(id)arg1;	// IMP=0x00000001001049d4
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x0000000100104984
+ (id)databaseForSession:(id)arg1;	// IMP=0x0000000100104930
+ (id)sharedDatabase;	// IMP=0x00000001001048cc
+ (id)privateDatabase;	// IMP=0x0000000100104868
+ (_Bool)isOwnZoneID:(id)arg1;	// IMP=0x0000000100104738
+ (_Bool)isOwnRecordID:(id)arg1;	// IMP=0x00000001001046dc
+ (id)recordIDForSessionIdentifier:(id)arg1;	// IMP=0x0000000100104498
+ (id)sessionIdentifierForRecordID:(id)arg1;	// IMP=0x0000000100104298
+ (id)allowedCharacterSet;	// IMP=0x00000001001041c4
+ (void)getFriendPlayersWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100103ba0
+ (void)updateFriendRecordIfNeeded;	// IMP=0x00000001001034cc
+ (void)updateFriendsWithRecord:(id)arg1;	// IMP=0x00000001001030a4
+ (void)updateCacheForFriendZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100102aa4
+ (void)updatePlayersForSessions:(id)arg1 sharesByRecordID:(id)arg2 inDatabase:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010010186c
+ (void)primaryPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001017a0
+ (id)playerIdentifierForUserRecordName:(id)arg1;	// IMP=0x00000001001016dc
+ (id)localPlayerAlias;	// IMP=0x0000000100101460
+ (void)determinePlayerChangesIn:(id)arg1 newSession:(id)arg2 notifyClients:(id)arg3;	// IMP=0x0000000100100e28
+ (void)reportChangesForSessions:(id)arg1 shareChangedSessions:(id)arg2 removedSessions:(id)arg3 zoneID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100100174
+ (id)allChangedSessionsFromRecordChangedSessions:(id)arg1 shareChangedSessions:(id)arg2;	// IMP=0x00000001000ffdd8
+ (void)updateCacheForDatabase:(id)arg1 zoneIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000fe574
+ (void)updateCacheForDatabaseScope:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd11c
+ (void)updateCacheForZoneID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fcd34
+ (void)updateSessionCacheDatabasesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fc97c
+ (void)updateSessionCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fc500
+ (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fc494
+ (void)fetchUserRecordIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fc41c
+ (id)friendEmailsByID;	// IMP=0x00000001000fc3c8
+ (void)sessionForShareMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc314
+ (void)sessionsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbf48
+ (void)sessionForIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fbb88
+ (id)cacheQueue;	// IMP=0x00000001000fbb18
+ (id)sessionCache;	// IMP=0x00000001000fbaac
+ (id)AES128Operation:(unsigned int)arg1 key:(id)arg2 data:(id)arg3;	// IMP=0x00000001000fb944
+ (id)AES128DecryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x00000001000fb8dc
+ (id)AES128EncryptedVersionOfData:(id)arg1 withKey:(id)arg2;	// IMP=0x00000001000fb874
+ (id)playerIdentifierForObfuscatedIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x00000001000fb778
+ (id)obfuscatedIdentifierForPlayerIdentifier:(id)arg1 containerName:(id)arg2;	// IMP=0x00000001000fb680
+ (id)mutablePlistFromPlayerStatesData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000fa93c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000f9d4c
- (void).cxx_destruct;	// IMP=0x00000001001139c4
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001130f4
- (void)saveConnectionState:(long long)arg1 forPlayerWithID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010e664
- (void)tempEmailFixForPlayerID:(id)arg1;	// IMP=0x000000010010e4d0
@property(readonly, nonatomic) NSArray *connectedPlayerIDs;
- (void)removePlayers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010010d1c0
- (void)deleteShareWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010010cdfc
- (void)fetchShareRecordWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001090bc
- (void)saveShare:(id)arg1 isNewShare:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100108c90
- (void)setupShareWithRecordID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001089c4
- (void)getShareURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001081d4
- (void)saveWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100107010
- (void)saveData:(id)arg1 changeTag:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010010673c
@property(readonly, nonatomic) NSString *containerName;
- (id)playersForGKGameSession;	// IMP=0x0000000100102510
- (id)players;	// IMP=0x00000001001024bc
- (void)setPlayers:(id)arg1;	// IMP=0x0000000100102308
- (void)updatePlayersWithIdentities:(id)arg1;	// IMP=0x000000010010206c
- (id)createGKGameSession;	// IMP=0x00000001000fb008
@property(retain, nonatomic) NSMutableDictionary *nicknamesByIdentifier; // @dynamic nicknamesByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *emailsByCKID;
@property(readonly, nonatomic) NSDictionary *playersByEmail;
- (id)playerStates;	// IMP=0x00000001000fa990
- (void)setPlayerStates:(id)arg1;	// IMP=0x00000001000fa8c8
@property(readonly, nonatomic) NSString *serverChangeTag;
@property(readonly, nonatomic) GKCloudPlayer *lastModifiedPlayer;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(retain, nonatomic) NSData *data;
@property(nonatomic) long long maxConnectedPlayers;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isOwnedByUser;	// IMP=0x00000001000fa258
- (id)description;	// IMP=0x00000001000fa110
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000fa01c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000f9d54
- (id)initWithRecord:(id)arg1;	// IMP=0x00000001000f9cd8
- (id)initWithContainerName:(id)arg1;	// IMP=0x00000001000f9c1c

@end
