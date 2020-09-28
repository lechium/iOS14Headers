/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordZoneChangesOperationCallbacks.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, CKFetchRecordZoneChangesOperationInfo;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks> {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	BOOL _shouldReportAllPerItemFailures;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _perRecordChangeCompletionBlock;
	/*^block*/id _recordWithIDWasDeletedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableSet* _zoneIDsWithPendingArchivedRecords;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID; 
@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                                                       //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsWithPendingArchivedRecords;                                           //@synthesize zoneIDsWithPendingArchivedRecords=_zoneIDsWithPendingArchivedRecords - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                                              //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                        //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;                                      //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,copy) id perRecordChangeCompletionBlock;                                                            //@synthesize perRecordChangeCompletionBlock=_perRecordChangeCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                                        //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (nonatomic,readonly) id<CKFetchRecordZoneChangesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordZoneChangesOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                      //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * configurationsByRecordZoneID;                                                  //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                                       //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordChangedBlock;                                                                        //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id recordWithIDWasDeletedBlock;                                                               //@synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                                        //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                                            //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;                                                     //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)performCKOperation;
-(void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 recordChangesStatus:(long long)arg4 hasPendingArchivedRecords:(BOOL)arg5 error:(id)arg6 reply:(/*^block*/id)arg7 ;
-(long long)changeTypesFromSetCallbacks;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(id)recordChangedBlock;
-(id)recordWithIDWasDeletedBlock;
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(NSMutableSet *)zoneIDsWithPendingArchivedRecords;
-(id)perRecordChangeCompletionBlock;
-(id)fetchRecordZoneChangesCompletionBlock;
-(id)partialFailureForItemsInZone:(id)arg1 ;
-(void)setPerRecordChangeCompletionBlock:(id)arg1 ;
-(void)handleDeleteForRecordID:(id)arg1 recordType:(id)arg2 ;
-(BOOL)shouldReportAllPerItemFailures;
-(id)recordZoneChangesStatusByZoneID;
-(id)recordZoneIDsWithPendingArchivedRecords;
-(void)setZoneIDsWithPendingArchivedRecords:(NSMutableSet *)arg1 ;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(NSDictionary *)optionsByRecordZoneID;
-(id)init;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(void)setRecordWithIDWasDeletedBlock:(id)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordZoneIDs;
-(NSMutableDictionary *)perItemErrors;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(NSMutableDictionary *)statusByZoneID;
-(NSDictionary *)configurationsByRecordZoneID;
-(BOOL)shouldFetchAssetContents;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(id)recordZoneFetchCompletionBlock;
-(id)recordZoneChangeTokensUpdatedBlock;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2 ;
@end
