//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, CKServerChangeToken, GKCloudPlayer, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKSessionCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheUserQueue;	// 16 = 0x10
    _Bool _userHasSubscription;	// 24 = 0x18
    _Bool _friendRecordNeedsUpdate;	// 25 = 0x19
    CKRecordID *_userRecordID;	// 32 = 0x20
    double _lastSaveTimeStamp;	// 40 = 0x28
    NSMutableDictionary *_bundleIDsByContainerName;	// 48 = 0x30
    NSMutableDictionary *_bundleIDExpirations;	// 56 = 0x38
    struct sqlite3 *_database;	// 64 = 0x40
    NSString *_databasePath;	// 72 = 0x48
    NSDate *_expiration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001b23b4
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSMutableDictionary *bundleIDExpirations; // @synthesize bundleIDExpirations=_bundleIDExpirations;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsByContainerName; // @synthesize bundleIDsByContainerName=_bundleIDsByContainerName;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (double)doubleFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001b233c
- (int)intFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001b2330
- (id)stringFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001b2300
- (id)dataFromRowStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00000001001b22a4
- (_Bool)stepStatement:(id)arg1 parameters:(id)arg2 rowHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b1e68
- (_Bool)executeStatement:(id)arg1;	// IMP=0x00000001001b1d64
- (void)closeDatabase;	// IMP=0x00000001001b1d3c
- (_Bool)openDatabase;	// IMP=0x00000001001b1d00
- (id)sessionWithIdentifier:(id)arg1;	// IMP=0x00000001001b1ac0
- (id)sessionsInContainer:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001b178c
- (id)sessionsInContainer:(id)arg1;	// IMP=0x00000001001b177c
- (id)sessionWithRecordID:(id)arg1;	// IMP=0x00000001001b1714
- (id)sessionFromData:(id)arg1;	// IMP=0x00000001001b166c
- (void)updateWithChangedSessions:(id)arg1 removedSessions:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b0a24
- (void)setFriendPlayers:(id)arg1 withEmails:(id)arg2;	// IMP=0x00000001001b05f8
@property(readonly, nonatomic) NSDictionary *friendEmailsByID; // @dynamic friendEmailsByID;
@property(readonly, nonatomic) NSArray *friendPlayers; // @dynamic friendPlayers;
- (void)_setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x00000001001afe98
- (void)updateWithChangedTokens:(id)arg1 removedTokenZoneIDs:(id)arg2;	// IMP=0x00000001001afaf8
- (void)setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3;	// IMP=0x00000001001af9a0
- (id)tokenForContainerName:(id)arg1 ownerName:(id)arg2;	// IMP=0x00000001001af710
@property(retain, nonatomic) CKServerChangeToken *sharedDBToken; // @dynamic sharedDBToken;
@property(retain, nonatomic) CKServerChangeToken *privateDBToken; // @dynamic privateDBToken;
- (void)setToken:(id)arg1 forZoneID:(id)arg2;	// IMP=0x00000001001af5e8
- (id)tokenForZoneID:(id)arg1;	// IMP=0x00000001001af540
- (id)tokenFromData:(id)arg1;	// IMP=0x00000001001af498
@property(nonatomic) double lastSaveTimeStamp; // @synthesize lastSaveTimeStamp=_lastSaveTimeStamp;
@property(nonatomic) _Bool friendRecordNeedsUpdate; // @synthesize friendRecordNeedsUpdate=_friendRecordNeedsUpdate;
@property(nonatomic) _Bool userHasSubscription; // @synthesize userHasSubscription=_userHasSubscription;
- (_Bool)saveUserInfo;	// IMP=0x00000001001aefb8
- (void)readUserInfoFromDatabase;	// IMP=0x00000001001aee38
- (void)writeBundleIDsToDisk;	// IMP=0x00000001001aecd0
- (void)readBundleIDsFromDisk;	// IMP=0x00000001001aeb50
- (id)bundleIDCacheURL;	// IMP=0x00000001001aeaa0
- (void)updateBundleIDs:(id)arg1 forContainerName:(id)arg2;	// IMP=0x00000001001ae900
- (id)bundleIDsForContainerName:(id)arg1;	// IMP=0x00000001001ae744
- (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ae1b4
@property(readonly, nonatomic) GKCloudPlayer *userPlayer; // @dynamic userPlayer;
- (void)createDatabaseIfNeeded;	// IMP=0x00000001001adcfc
- (void)updateDatabasePath;	// IMP=0x00000001001adbcc
@property(nonatomic) _Bool isValid; // @dynamic isValid;
- (void)clearWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ad944
- (id)init;	// IMP=0x00000001001ad858

@end

