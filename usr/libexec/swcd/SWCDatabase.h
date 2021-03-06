//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSURL, _SWCGeneration;
@protocol OS_dispatch_source;

@interface SWCDatabase : NSObject
{
    NSMutableOrderedSet *_entries;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_saveTimer;	// 24 = 0x18
    struct SWCBloomFilter _bloomFilter;	// 32 = 0x20
    unsigned int _shared:1;	// 288 = 0x120
    _SWCGeneration *_settingsGeneration;	// 296 = 0x128
    NSNumber *_launchServicesDatabaseGeneration;	// 304 = 0x130
    NSData *_enterpriseState;	// 312 = 0x138
}

+ (id)queue;	// IMP=0x00000001000122e8
+ (id)loadContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100011f84
+ (id)new;	// IMP=0x0000000100011f48
+ (id)sharedDatabase;	// IMP=0x0000000100011e88
+ (id)_archivedDataFromStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100015928
+ (id)_storageFromArchivedData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100015844
- (void).cxx_destruct;	// IMP=0x00000001000145f0
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(readonly) _SWCGeneration *settingsGeneration; // @synthesize settingsGeneration=_settingsGeneration;
- (void)scheduleNextSave;	// IMP=0x00000001000145b0
- (_Bool)saveReturningError:(id *)arg1;	// IMP=0x0000000100014268
- (void)cleanOldSettings;	// IMP=0x0000000100013e78
- (void)enumerateSettingsDictionariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013e68
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x0000000100013da0
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000001000139f8
- (void)setSettingsDictionary:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x0000000100013938
- (id)settingsDictionaryForServiceSpecifier:(id)arg1;	// IMP=0x0000000100013928
- (void)updateEntriesForDomain:(id)arg1 canonicalEntries:(id)arg2;	// IMP=0x000000010001357c
- (void)removeAllEntries;	// IMP=0x00000001000133bc
- (_Bool)removeEntries:(id)arg1;	// IMP=0x0000000100013338
- (_Bool)addEntries:(id)arg1;	// IMP=0x0000000100013164
- (id)entryMatchingServiceSpecifier:(id)arg1;	// IMP=0x000000010001306c
- (id)entryMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3;	// IMP=0x0000000100012d14
- (void)enumerateEntriesMatchingServiceSpecifierWithExactDomain:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012c20
- (void)enumerateEntriesMatchingService:(id)arg1 exactDomain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100012b08
- (void)enumerateEntriesMatchingServiceSpecifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012a0c
- (void)enumerateEntriesMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001000129ec
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001288c
- (void)enumerateEntries:(id)arg1 matchingServiceSpecifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012790
- (void)enumerateEntries:(id)arg1 matchingService:(id)arg2 domain:(id)arg3 appID:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000100012474
- (_Bool)mayContainEntryMatchingServiceSpecifier:(id)arg1;	// IMP=0x0000000100012424
- (id)entry:(id)arg1;	// IMP=0x0000000100012380
@property(readonly) NSURL *storageURL;
- (id)bloomFilterDebugDescription;	// IMP=0x00000001000122a8
- (void)receiveSIGTERMSignal;	// IMP=0x0000000100012188
- (id)init;	// IMP=0x0000000100011f54
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100015cd4
- (void)_scheduleSave;	// IMP=0x00000001000159f4
- (id)_storageForArchiving;	// IMP=0x0000000100015724
- (void)_removeSettingsForKeysNoSave:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x00000001000155e0
- (id)_initShared;	// IMP=0x000000010001504c
- (_Bool)_deleteStorageItemReturningError:(id *)arg1;	// IMP=0x000000010001655c
- (_Bool)_updateStorageItemWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000164c4
- (id)_dataFromStorageReturningError:(id *)arg1;	// IMP=0x0000000100016430
- (id)_dataURLReturningError:(id *)arg1;	// IMP=0x0000000100016024

@end

