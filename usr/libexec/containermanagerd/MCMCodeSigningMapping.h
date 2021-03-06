//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMManagedPath, OS_dispatch_queue;

@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    MCMSQLiteDB *_codeSigningMappingDB;	// 16 = 0x10
    MCMUserIdentityCache *_userIdentityCache;	// 24 = 0x18
    id <MCMManagedPath> _library;	// 32 = 0x20
}

+ (id)systemGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x0000000100043b54
+ (id)appGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x0000000100043af0
+ (id)copyGroupEntitlementForIdentifier:(id)arg1 entitlements:(id)arg2 groupKey:(id)arg3;	// IMP=0x0000000100043728
+ (id)codeSignMappingWithError:(id *)arg1;	// IMP=0x0000000100043308
- (void).cxx_destruct;	// IMP=0x0000000100040f5c
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000010004076c
- (_Bool)registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000001000405f0
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x0000000100040568
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x0000000100040490
- (void)_onQueue_removeGroupContainersIfNeededforUserIdentity:(id)arg1 groupContainerClass:(unsigned long long)arg2 identifiers:(id)arg3 referenceCounts:(id)arg4 commandQueue:(id)arg5;	// IMP=0x00000001000400b4
- (void)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 ofType:(long long)arg2 commandQueue:(id)arg3;	// IMP=0x000000010003fd70
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 ofType:(long long)arg3 commandQueue:(id)arg4;	// IMP=0x000000010003fc18
- (id)_onQueue_copyReferenceCountSetOfType:(long long)arg1;	// IMP=0x000000010003fb20
- (id)copyReferenceCountSetOfType:(long long)arg1;	// IMP=0x000000010003fa24
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010003f914
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010003f7c8
- (id)_onQueue_identifiersWithError:(id *)arg1;	// IMP=0x000000010003f738
- (id)identifiersWithError:(id *)arg1;	// IMP=0x000000010003f5e4
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutBundleContainer;	// IMP=0x000000010003ed2c
- (id)entitlementsForIdentifier:(id)arg1;	// IMP=0x000000010003e798
- (id)getCodeSigningInfoForIdentifier:(id)arg1;	// IMP=0x000000010003e644
- (unsigned long long)processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 commandQueue:(id)arg4;	// IMP=0x000000010003e458
- (unsigned long long)processCallerRegisteredEntitlements:(id)arg1 forIdentifier:(id)arg2 commandQueue:(id)arg3;	// IMP=0x000000010003e0dc
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000010003e04c
- (id)appGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x000000010003dfbc
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000010003deb8
- (_Bool)identifierHasSystemContainer:(id)arg1;	// IMP=0x000000010003de60
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x000000010003dd5c
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010003dc28
- (id)parentIdentifierForChildIdentifier:(id)arg1;	// IMP=0x000000010003db00
- (id)childBundleIdentifiersForParentIdentifier:(id)arg1;	// IMP=0x000000010003d9d8
- (void)removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1 commandQueue:(id)arg2;	// IMP=0x000000010003d6a4
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d440
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003d398
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;	// IMP=0x000000010003d2e0
- (unsigned long long)_onQueue_processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 oldEntitlements:(id)arg4 commandQueue:(id)arg5;	// IMP=0x000000010003c05c
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000010003bdfc
- (_Bool)_entitlementsHasSystemContainer:(id)arg1;	// IMP=0x000000010003bda4
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x000000010003bb44
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010003b8f0
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;	// IMP=0x000000010003b890
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;	// IMP=0x000000010003b7d8
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000010003b72c
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000010003b4b0
- (id)_onQueue_parentIdentifierForChildIdentifier:(id)arg1;	// IMP=0x000000010003b274
- (id)_onQueue_childBundleIdentifiersForParentIdentifier:(id)arg1;	// IMP=0x000000010003b038
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x000000010003a878
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;	// IMP=0x000000010003a4ac
- (void)performAllCodeSigningMigrationAndReconciliationWithCommandQueue:(id)arg1;	// IMP=0x000000010003a378
- (void)_onQueue_reconcileSystemContainersWithCommandQueue:(id)arg1;	// IMP=0x0000000100039c24
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainers:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x00000001000392bc
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;	// IMP=0x0000000100038fb4
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;	// IMP=0x00000001000387bc
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;	// IMP=0x0000000100037e48
- (void)migrateAppGroupIdsFromDataContainersToFile;	// IMP=0x00000001000377ec
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;	// IMP=0x0000000100037200
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 library:(id)arg4;	// IMP=0x00000001000370b8

@end

