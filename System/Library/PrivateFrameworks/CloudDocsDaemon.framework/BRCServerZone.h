/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobsMatching.h>
#import <libobjc.A.dylib/BRCZone.h>

@class BRCZoneRowID, BRCPQLConnection, NSMutableDictionary, BRCServerChangeState, BRCAccountSession, NSString, BRCClientZone, BRCSyncContext, BRCPendingChangesStream, CKRecordZoneID, BRMangledID;

@interface BRCServerZone : NSObject <BRCJobsMatching, BRCZone> {

	BRCServerChangeState* _changeState;
	BRCAccountSession* _session;
	BRCPQLConnection* _db;
	NSString* _zoneName;
	BRCZoneRowID* _dbRowID;
	BRCClientZone* _clientZone;
	unsigned _state;
	BRCSyncContext* _syncContext;
	BRCSyncContext* _metadataSyncContext;
	BOOL _needsSave;
	BRCPendingChangesStream* _pendingChanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BRCServerChangeState * changeState;                                  //@synthesize changeState=_changeState - In the implementation block
@property (nonatomic,readonly) BRCClientZone * clientZone;                                //@synthesize clientZone=_clientZone - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * zoneName;                                       //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,readonly) BRCSyncContext * metadataSyncContext; 
@property (nonatomic,readonly) BRCSyncContext * metadataSyncContextIfExists; 
@property (nonatomic,readonly) BRMangledID * mangledID; 
@property (nonatomic,readonly) BRCPendingChangesStream * pendingChanges;                  //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) unsigned state;                                            //@synthesize state=_state - In the implementation block
@property (readonly) BOOL isCloudDocsZone; 
@property (assign,nonatomic) BOOL needsSave;                                              //@synthesize needsSave=_needsSave - In the implementation block
@property (nonatomic,retain) BRCZoneRowID * dbRowID;                                      //@synthesize dbRowID=_dbRowID - In the implementation block
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCPQLConnection * db;                                     //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * plist; 
-(BRCPQLConnection *)db;
-(BOOL)needsSave;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(BRCAccountSession *)session;
-(CKRecordZoneID *)zoneID;
-(NSMutableDictionary *)plist;
-(NSString *)ownerName;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)zoneName;
-(BRCZoneRowID *)dbRowID;
-(void)setNeedsSave:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)state;
-(NSString *)description;
-(BRCPendingChangesStream *)pendingChanges;
-(BRCClientZone *)clientZone;
-(BOOL)isSharedZone;
-(id)asSharedZone;
-(BRMangledID *)mangledID;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)allocateRanksWhenCaughtUp:(BOOL)arg1 ;
-(id)syncContext;
-(id)itemByItemID:(id)arg1 db:(id)arg2 ;
-(BOOL)isPrivateZone;
-(id)itemByItemID:(id)arg1 ;
-(void)setDbRowID:(BRCZoneRowID *)arg1 ;
-(id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4 ;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id*)arg3 ;
-(id)matchingJobsWhereSQLClause;
-(id)jobsDescription;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BRCSyncContext *)metadataSyncContext;
-(BRCServerChangeState *)changeState;
-(void)removeForegroundClient:(id)arg1 ;
-(void)addForegroundClient:(id)arg1 ;
-(BOOL)setStateBits:(unsigned)arg1 ;
-(void)clearStateBits:(unsigned)arg1 ;
-(BOOL)isCloudDocsZone;
-(BOOL)resetServerTruth;
-(void)destroyPendingChangesDBOnQueue:(BOOL)arg1 ;
-(void)deleteAllContentsOnServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)forceMoveToCloudDocs;
-(void)scheduleMoveToCloudDocs;
-(BOOL)serverZoneIsCreated;
-(BOOL)shouldRecreateServerZoneAfterError:(id)arg1 ;
-(BOOL)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 origName:(id)arg5 base:(id)arg6 no:(id)arg7 ext:(id)arg8 ;
-(BOOL)_saveItemID:(id)arg1 stat:(id)arg2 serverMetrics:(id)arg3 record:(id)arg4 error:(id*)arg5 ;
-(BOOL)_saveItemID:(id)arg1 version:(id)arg2 record:(id)arg3 iWorkSharingOptions:(unsigned long long)arg4 ;
-(BOOL)_saveEditedDirOrDocStructureRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveEditedAliasRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id*)arg3 ;
-(BOOL)_saveEditedSymlinkRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveEditedFinderBookmarkRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveEditedDocumentContentRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveEditedShareRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveEditedRecord:(id)arg1 zonesNeedingAllocRanks:(id)arg2 error:(id*)arg3 ;
-(void)_reportCantSaveProblem:(id)arg1 record:(id)arg2 ;
-(BOOL)_markItemDeadForRecordID:(id)arg1 ;
-(BOOL)_markShareIDDead:(id)arg1 ;
-(id)_structurePrefixForType:(char)arg1 ;
-(void)handleBrokenStructure;
-(BOOL)_recoverFromCorruptShareOptionsWithItemType:(char)arg1 itemID:(id)arg2 parentID:(id)arg3 sharingOptions:(unsigned long long)arg4 ;
-(unsigned long long)_saveInconsistentStateWithRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 syncStatus:(long long)arg6 ;
-(BOOL)_savePendingChangesEditedStructureRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_savePendingChangesDeletedRecordIDsIgnoringRecordIDs:(id)arg1 ;
-(BOOL)_saveEditedStructureRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_saveDeletedRecordIDs:(id)arg1 ;
-(BOOL)_savePendingChangesEditedContentRecordsIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_saveEditedContentRecords:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_savePendingChangesSharesIgnoringRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_saveEditedShareRecords:(id)arg1 deletedShareRecordIDs:(id)arg2 zonesNeedingAllocRanks:(id)arg3 ;
-(void)_collectTombstoneForRank:(unsigned long long)arg1 ;
-(BOOL)resetServerTruthAndDestroyZone:(BOOL)arg1 ;
-(id)asPrivateZone;
-(BRCSyncContext *)metadataSyncContextIfExists;
-(void)activateWithClientZone:(id)arg1 offline:(BOOL)arg2 ;
-(void)deactivateFromClientZone;
-(BOOL)hasXattrWithSignature:(id)arg1 ;
-(BOOL)storeXattr:(id)arg1 ;
-(id)xattrForSignature:(id)arg1 ;
-(unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 deletedShareRecordIDs:(id)arg5 movedZoneNames:(id)arg6 allocRankZones:(id*)arg7 syncStatus:(long long)arg8 savedDirectly:(BOOL*)arg9 ;
-(void)collectTombstoneRanks:(id)arg1 ;
-(id)deleteAllContentsOperation;
-(void)saveQueryRecords:(id)arg1 ;
-(id)itemsEnumeratorWithDB:(id)arg1 ;
-(id)directDirectoryChildItemIDsOfParentEnumerator:(id)arg1 ;
@end
