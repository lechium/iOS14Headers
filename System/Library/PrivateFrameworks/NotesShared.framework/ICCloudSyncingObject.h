/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>
#import <libobjc.A.dylib/ICLoggable.h>

@class NSMutableDictionary, CKRecord, CKShare, NSData, NSString, ICCloudState;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable> {

	BOOL _needsToLoadDecryptedValues;
	BOOL mergingUnappliedEncryptedRecord;
	NSMutableDictionary* _decryptedValues;
	CKRecord* _serverRecord;
	CKShare* _serverShare;
	CKRecord* _userSpecificServerRecord;

}

@property (assign) long long failedToSyncCount; 
@property (assign) long long numberOfPushAttemptsToWaitCount; 
@property (nonatomic,readonly) NSMutableDictionary * decryptedValues;                                                    //@synthesize decryptedValues=_decryptedValues - In the implementation block
@property (assign,nonatomic) BOOL needsToLoadDecryptedValues;                                                            //@synthesize needsToLoadDecryptedValues=_needsToLoadDecryptedValues - In the implementation block
@property (assign,nonatomic) long long minimumSupportedNotesVersion; 
@property (nonatomic,retain) NSData * serverRecordData; 
@property (nonatomic,retain) CKRecord * serverRecord;                                                                    //@synthesize serverRecord=_serverRecord - In the implementation block
@property (nonatomic,retain) NSData * serverShareData; 
@property (nonatomic,retain) CKShare * serverShare;                                                                      //@synthesize serverShare=_serverShare - In the implementation block
@property (nonatomic,retain) NSData * userSpecificServerRecordData; 
@property (nonatomic,retain) CKRecord * userSpecificServerRecord;                                                        //@synthesize userSpecificServerRecord=_userSpecificServerRecord - In the implementation block
@property (nonatomic,retain) NSString * zoneOwnerName; 
@property (nonatomic,retain) NSString * primitiveZoneOwnerName; 
@property (nonatomic,readonly) BOOL shouldBeIgnoredForSync; 
@property (nonatomic,retain) NSData * encryptedValuesJSON; 
@property (assign,getter=isMergingUnappliedEncryptedRecord,nonatomic) BOOL mergingUnappliedEncryptedRecord; 
@property (nonatomic,readonly) CKShare * serverShareCheckingParent; 
@property (nonatomic,readonly) BOOL canSyncPasswordProtectionFields; 
@property (nonatomic,retain) ICCloudState * cloudState; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL needsToBeFetchedFromCloud; 
@property (assign,nonatomic) BOOL needsToSaveUserSpecificRecord; 
@property (assign,nonatomic) BOOL needsInitialFetchFromCloud; 
@property (assign,nonatomic) BOOL markedForDeletion; 
@property (assign,nonatomic) BOOL isPasswordProtected; 
@property (assign,nonatomic) long long cryptoIterationCount; 
@property (nonatomic,retain) NSData * cryptoSalt; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (nonatomic,retain) NSData * cryptoWrappedKey; 
@property (nonatomic,retain) NSString * passwordHint; 
@property (nonatomic,retain) NSData * unappliedEncryptedRecord; 
@property (nonatomic,readonly) long long intrinsicNotesVersion; 
@property (nonatomic,readonly) BOOL shouldSyncMinimumSupportedNotesVersion; 
@property (nonatomic,readonly) BOOL isUnsupported; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resetAllDeletedByThisDeviceProperties;
+(id)allCloudObjectsInContext:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)objectsWithRecordID:(id)arg1 context:(id)arg2 ;
+(id)failureCountQueue;
+(id)failedToSyncCountsByIdentifier;
+(id)numberOfPushAttemptsToWaitByIdentifier;
+(id)assetForData:(id)arg1 ;
+(long long)currentNotesVersion;
+(BOOL)needsToReFetchServerRecordValue:(id)arg1 ;
+(void)deleteTemporaryAssetFilesForOperation:(id)arg1 ;
+(BOOL)supportsUserSpecificRecords;
+(id)temporaryAssets;
+(id)temporaryAssetDirectoryURL;
+(void)deleteTemporaryFilesForAsset:(id)arg1 ;
+(id)predicateForVisibleObjects;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)versionsByOperationQueue;
+(id)versionsByRecordIDByOperation;
+(id)deletedByThisDeviceOperationQueue;
+(id)deletedByThisDeviceSet;
+(id)recordSystemFieldsTransformer;
+(id)newObjectWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingIsSharedViaICloud;
+(id)shareSystemFieldsTransformer;
+(id)keyPathsForValuesAffectingCloudAccount;
+(id)objectWithRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)keyPathsForValuesAffectingZoneOwnerName;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+(void)deleteAllTemporaryAssetFilesForAllObjects;
+(id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+(id)keyPathsForValuesAffectingIsSharedReadOnly;
+(id)keyPathsForValuesAffectingServerShareCheckingParent;
+(id)allPasswordProtectedObjectsInContext:(id)arg1 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)willSave;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(id)shortLoggingDescription;
-(CKRecord *)serverRecord;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3 ;
-(void)didDeleteUserSpecificRecordID:(id)arg1 ;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1 ;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2 ;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(id)ic_loggingIdentifier;
-(BOOL)validateIdentifier:(inout id*)arg1 error:(out id*)arg2 ;
-(void)clearChangeCount;
-(void)incrementFailureCounts;
-(void)decrementFailureCounts;
-(void)markForDeletion;
-(id)recordZoneName;
-(BOOL)shouldBeIgnoredForSync;
-(void)unitTest_setMinimumSupportedNotesVersion:(long long)arg1 ;
-(void)setServerShareIfNewer:(id)arg1 ;
-(id)shareDescription;
-(id)valueForEncryptableKey:(id)arg1 ;
-(void)setValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(id)cryptoMasterKey;
-(void)setCryptoMasterKey:(id)arg1 ;
-(id)cryptoPassphraseVerifier;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(void)resetUniqueIdentifier;
-(void)deleteFromLocalDatabase;
-(void)resetToIntrinsicNotesVersionAndPropagateToChildObjects;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedReadOnly;
-(id)recordID;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(NSString *)debugDescription;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)setNeedsToBeFetchedFromCloud:(BOOL)arg1 ;
-(void)setNeedsToLoadDecryptedValues:(BOOL)arg1 ;
-(void)clearServerRecord;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(long long)numberOfPushAttemptsToWaitCount;
-(BOOL)supportsEncryptedValuesDictionary;
-(id)parentEncryptableObject;
-(void)setInCloud:(BOOL)arg1 ;
-(id)sharedOwnerName;
-(void)setNumberOfPushAttemptsToWaitCount:(long long)arg1 ;
-(long long)failedToSyncCount;
-(void)setFailedToSyncCount:(long long)arg1 ;
-(void)deleteChangeTokensAndReSync;
-(NSString *)zoneOwnerName;
-(BOOL)supportsDeletionByTTL;
-(BOOL)canSyncPasswordProtectionFields;
-(id)newlyCreatedRecord;
-(void)setCryptoSalt:(NSData *)arg1 ;
-(void)setCryptoIterationCount:(long long)arg1 ;
-(void)setServerShare:(CKShare *)arg1 ;
-(void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1 ;
-(void)mergeEncryptedDataFromRecord:(id)arg1 ;
-(BOOL)isMergingUnappliedEncryptedRecord;
-(void)loadDecryptedValuesIfNecessary;
-(void)setMergingUnappliedEncryptedRecord:(BOOL)arg1 ;
-(void)decryptAndMergeEncryptedJSON:(id)arg1 ;
-(void)saveEncryptedJSON;
-(BOOL)hasSuccessfullyPushedLatestVersionToCloud;
-(long long)isPushingSameOrLaterThanVersion:(long long)arg1 ;
-(void)setVersion:(long long)arg1 forOperation:(id)arg2 ;
-(BOOL)needsToFetchAfterServerRecordChanged:(id)arg1 ;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2 ;
-(void)fixBrokenReferences;
-(long long)versionForOperation:(id)arg1 ;
-(void)resetFailureCounts;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(void)updateParentReferenceIfNecessary;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;
-(id)userSpecificRecordType;
-(CKRecord *)userSpecificServerRecord;
-(id)userSpecificRecordID;
-(void)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(void)setUserSpecificServerRecord:(CKRecord *)arg1 ;
-(void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)deletedByThisDevice;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(void)setDeletedByThisDevice:(BOOL)arg1 ;
-(void)updateChangeCountsForUnsavedParentReferences;
-(CKShare *)serverShareCheckingParent;
-(id)shareDescriptionForShareParticipants:(id)arg1 ;
-(BOOL)isSharedRootObject;
-(BOOL)canBeSharedViaICloud;
-(void)initializeCryptoProperties;
-(void)initializeCryptoPropertiesFromObject:(id)arg1 ;
-(id)loggingDescription;
-(BOOL)needsToDeleteShare;
-(CKShare *)serverShare;
-(void)didAcceptShare:(id)arg1 ;
-(id)parentCloudObject;
-(id)childCloudObjects;
-(id)childCloudObjectsForMinimumSupportedVersionPropagation;
-(BOOL)canBeRootShareObject;
-(id)shareTitle;
-(BOOL)needsToLoadDecryptedValues;
-(BOOL)isEncryptableKeyBinaryData:(id)arg1 ;
-(NSMutableDictionary *)decryptedValues;
-(id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3 ;
-(id)primitiveValueForEncryptableKey:(id)arg1 ;
-(id)decryptedValueForKey:(id)arg1 ;
-(void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2 ;
-(void)setDecryptedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEncryptedValuesJSON:(NSData *)arg1 ;
-(long long)databaseScope;
-(void)setCryptoTag:(NSData *)arg1 ;
-(void)setCryptoInitializationVector:(NSData *)arg1 ;
-(BOOL)isUnsupported;
-(void)updateChangeCount;
-(void)unmarkForDeletion;
-(id)ic_loggingValues;
-(id)cloudAccount;
-(id)recordType;
-(id)shareType;
-(long long)intrinsicNotesVersion;
-(void)mergeUnappliedEncryptedRecord;
-(BOOL)hasAllMandatoryFields;
-(id)recordName;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1 ;
-(BOOL)wantsUserSpecificRecord;
-(id)newlyCreatedUserSpecificRecord;
-(void)didSaveUserSpecificRecord:(id)arg1 ;
-(BOOL)isValidObject;
-(BOOL)isVisible;
-(void)saveAndClearDecryptedDataIfNecessary;
-(NSString *)description;
-(BOOL)isDeletable;
-(void)didTurnIntoFault;
-(void)saveAndClearDecryptedData;
-(void)setCryptoWrappedKey:(NSData *)arg1 ;
-(BOOL)isOwnedByCurrentUser;
-(BOOL)isInCloud;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)requireMinimumSupportedVersionAndPropagateToChildObjects:(long long)arg1 ;
@end
