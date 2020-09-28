/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, CKRecordID, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {

	BOOL _checkForDeletions;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _changeTagsByRecordID;
	NSArray* _desiredKeys;
	CKRecordID* _canaryRecordID;
	/*^block*/id _refreshRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableSet* _refreshedRecordIDs;
	NSMutableDictionary* _updatedRecordsByRecordID;
	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;                   //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableSet * refreshedRecordIDs;                           //@synthesize refreshedRecordIDs=_refreshedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedRecordsByRecordID;              //@synthesize updatedRecordsByRecordID=_updatedRecordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedRecordIDs;                             //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                      //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                    //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                           //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * changeTagsByRecordID;                           //@synthesize changeTagsByRecordID=_changeTagsByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                         //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL checkForDeletions;                                      //@synthesize checkForDeletions=_checkForDeletions - In the implementation block
@property (nonatomic,copy) CKRecordID * canaryRecordID;                                   //@synthesize canaryRecordID=_canaryRecordID - In the implementation block
@property (nonatomic,copy) id refreshRecordsCompletionBlock;                              //@synthesize refreshRecordsCompletionBlock=_refreshRecordsCompletionBlock - In the implementation block
-(NSError *)operationError;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setOperationError:(NSError *)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)_continueRefreshing;
-(void)performOperation;
-(NSMutableDictionary *)updatedRecordsByRecordID;
-(FCCKContentDatabase *)database;
-(NSArray *)recordIDs;
-(NSMutableArray *)remainingRecordIDBatches;
-(BOOL)validateOperation;
-(void)setChangeTagsByRecordID:(NSDictionary *)arg1 ;
-(void)resetForRetry;
-(void)prepareOperation;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setDeletedRecordIDs:(NSMutableSet *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSDictionary *)changeTagsByRecordID;
-(NSMutableDictionary *)errorsByRecordID;
-(NSMutableSet *)deletedRecordIDs;
-(void)setCanaryRecordID:(CKRecordID *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setUpdatedRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setRefreshedRecordIDs:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)refreshedRecordIDs;
-(void)setRefreshRecordsCompletionBlock:(id)arg1 ;
-(void)setCheckForDeletions:(BOOL)arg1 ;
-(BOOL)checkForDeletions;
-(CKRecordID *)canaryRecordID;
-(id)refreshRecordsCompletionBlock;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
@end
