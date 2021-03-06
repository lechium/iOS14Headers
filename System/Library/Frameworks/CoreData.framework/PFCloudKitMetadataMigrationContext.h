/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSManagedObjectModel, NSSQLModel, NSNumber, NSDictionary, NSArray;

@interface PFCloudKitMetadataMigrationContext : NSObject {

	NSMutableArray* _migrationStatements;
	NSMutableArray* _sqlEntitiesToCreate;
	BOOL _hasWorkToDo;
	BOOL _needsMetdataMigrationToNSCKRecordMetadata;
	BOOL _needsOldTableDrop;
	BOOL _needsMirroredRelationshipsLinkedToZone;
	BOOL _needsImportAfterClientMigration;
	BOOL _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
	BOOL _needsAnalyzedHistoryCheck;
	NSManagedObjectModel* _currentModel;
	NSSQLModel* _sqlModel;
	NSManagedObjectModel* _storeMetadataModel;
	NSSQLModel* _storeSQLModel;
	NSNumber* _storeMetadataVersion;
	NSDictionary* _storeMetadataVersionHashes;

}

@property (nonatomic,readonly) NSArray * migrationStatements;                                             //@synthesize migrationStatements=_migrationStatements - In the implementation block
@property (nonatomic,readonly) NSArray * sqlEntitiesToCreate;                                             //@synthesize sqlEntitiesToCreate=_sqlEntitiesToCreate - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkToDo;                                                          //@synthesize hasWorkToDo=_hasWorkToDo - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * currentModel;                                         //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * sqlModel;                                                       //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * storeMetadataModel;                                   //@synthesize storeMetadataModel=_storeMetadataModel - In the implementation block
@property (nonatomic,retain) NSSQLModel * storeSQLModel;                                                  //@synthesize storeSQLModel=_storeSQLModel - In the implementation block
@property (nonatomic,retain) NSNumber * storeMetadataVersion;                                             //@synthesize storeMetadataVersion=_storeMetadataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * storeMetadataVersionHashes;                                   //@synthesize storeMetadataVersionHashes=_storeMetadataVersionHashes - In the implementation block
@property (assign,nonatomic) BOOL needsMetdataMigrationToNSCKRecordMetadata;                              //@synthesize needsMetdataMigrationToNSCKRecordMetadata=_needsMetdataMigrationToNSCKRecordMetadata - In the implementation block
@property (assign,nonatomic) BOOL needsOldTableDrop;                                                      //@synthesize needsOldTableDrop=_needsOldTableDrop - In the implementation block
@property (assign,nonatomic) BOOL needsMirroredRelationshipsLinkedToZone;                                 //@synthesize needsMirroredRelationshipsLinkedToZone=_needsMirroredRelationshipsLinkedToZone - In the implementation block
@property (assign,nonatomic) BOOL needsImportAfterClientMigration;                                        //@synthesize needsImportAfterClientMigration=_needsImportAfterClientMigration - In the implementation block
@property (assign,nonatomic) BOOL needsBatchUpdateForSystemFieldsAndLastExportedTransaction;              //@synthesize needsBatchUpdateForSystemFieldsAndLastExportedTransaction=_needsBatchUpdateForSystemFieldsAndLastExportedTransaction - In the implementation block
@property (assign,nonatomic) BOOL needsAnalyzedHistoryCheck;                                              //@synthesize needsAnalyzedHistoryCheck=_needsAnalyzedHistoryCheck - In the implementation block
-(void)setNeedsOldTableDrop:(BOOL)arg1 ;
-(void)setNeedsBatchUpdateForSystemFieldsAndLastExportedTransaction:(BOOL)arg1 ;
-(BOOL)needsMirroredRelationshipsLinkedToZone;
-(BOOL)hasWorkToDo;
-(void)setNeedsMetdataMigrationToNSCKRecordMetadata:(BOOL)arg1 ;
-(void)setStoreMetadataModel:(NSManagedObjectModel *)arg1 ;
-(NSDictionary *)storeMetadataVersionHashes;
-(void)setNeedsMirroredRelationshipsLinkedToZone:(BOOL)arg1 ;
-(BOOL)needsMetdataMigrationToNSCKRecordMetadata;
-(void)dealloc;
-(NSSQLModel *)sqlModel;
-(void)setStoreMetadataVersion:(NSNumber *)arg1 ;
-(BOOL)needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
-(id)init;
-(NSArray *)migrationStatements;
-(void)setCurrentModel:(NSManagedObjectModel *)arg1 ;
-(NSArray *)sqlEntitiesToCreate;
-(void)addSQLEntityToCreate:(id)arg1 ;
-(NSSQLModel *)storeSQLModel;
-(BOOL)needsOldTableDrop;
-(NSManagedObjectModel *)currentModel;
-(void)setNeedsImportAfterClientMigration:(BOOL)arg1 ;
-(void)setStoreMetadataVersionHashes:(NSDictionary *)arg1 ;
-(BOOL)needsImportAfterClientMigration;
-(void)setNeedsAnalyzedHistoryCheck:(BOOL)arg1 ;
-(void)setSqlModel:(NSSQLModel *)arg1 ;
-(BOOL)needsAnalyzedHistoryCheck;
-(NSManagedObjectModel *)storeMetadataModel;
-(void)setStoreSQLModel:(NSSQLModel *)arg1 ;
-(void)addMigrationStatement:(id)arg1 ;
-(NSNumber *)storeMetadataVersion;
@end

