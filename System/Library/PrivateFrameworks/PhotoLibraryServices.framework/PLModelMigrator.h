/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLXPCTransaction, NSDictionary, PLPhotoLibraryPathManager, PLPhotoLibrary, PLLazyObject, NSObject, NSFileManager, PLCoreAnalyticsEventManager, PLDeviceRestoreMigrationPostProcessingSupport, PLDeviceRestoreMigrationSupport;

@interface PLModelMigrator : NSObject {

	double _startTime;
	PLXPCTransaction* _transaction;
	NSDictionary* _syncedPropertiesByUUID;
	PLPhotoLibraryPathManager* _pathManager;
	PLPhotoLibrary* _photoLibrary;
	PLLazyObject* _lazyThumbnailManager;
	PLLazyObject* _lazyCoreAnalysticsEventManager;
	PLLazyObject* _lazyDeviceRestoreMigrationSupport;
	PLLazyObject* _lazyDeviceRestoreMigrationPostProcessingSupport;
	BOOL _didCreateSqliteErrorFileForLightweightMigration;
	BOOL _isPostProcessingLightWeightMigration;
	NSObject*<OS_dispatch_queue> _fileSystemLoadQueue;
	NSObject*<OS_dispatch_group> _fileSystemLoadGroup;
	os_unfair_lock_s _containedObjectsLock;
	os_unfair_lock_s _storeMetadataLock;
	os_unfair_lock_s _lightweightMigrationLock;
	NSDictionary* _options;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;                                                        //@synthesize fileManager=_fileManager - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s containedObjectsLock;                                              //@synthesize containedObjectsLock=_containedObjectsLock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s storeMetadataLock;                                                 //@synthesize storeMetadataLock=_storeMetadataLock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lightweightMigrationLock;                                          //@synthesize lightweightMigrationLock=_lightweightMigrationLock - In the implementation block
@property (nonatomic,__weak,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;                                          //@synthesize pathManager=_pathManager - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (copy) NSDictionary * options;                                                                         //@synthesize options=_options - In the implementation block
@property (readonly) PLCoreAnalyticsEventManager * analyticsEventManager; 
@property (nonatomic,readonly) PLDeviceRestoreMigrationPostProcessingSupport * postProcessingToken; 
@property (readonly) PLDeviceRestoreMigrationSupport * deviceRestoreMigrationSupport; 
+(BOOL)_readBooleanFlagWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3 ;
+(id)schemaIncompatibilityDetailsForStoreMetadata:(id)arg1 model:(id)arg2 ;
+(BOOL)enumerateObjectsWithIncrementalSaveDefaultBatchSizeFetchRequest:(id)arg1 managedObjectContext:(id)arg2 count:(unsigned long long*)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
+(sqlite3Ref)_openSQLTransactionWithDBPath:(const char*)arg1 ;
+(BOOL)_writeNumber:(id)arg1 forKey:(id)arg2 pathManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)resetThumbnailIndexesAndInitiateRebuildRequestIfSuccessfulForThumbnailManager:(id)arg1 ;
+(BOOL)waitForDataMigratorToExit;
+(id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1 ;
+(BOOL)_commitSQLTransactionAndCloseDB:(sqlite3Ref)arg1 ;
+(id)_readNumberWithKey:(id)arg1 fromMetadataWithMOC:(id)arg2 pathManager:(id)arg3 error:(id*)arg4 ;
+(int)currentModelVersion;
+(BOOL)executeBatchDeleteWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3 ;
+(BOOL)shouldImportAssetsFromDCIMSubDirectoryAtURL:(id)arg1 assetsKind:(int*)arg2 ;
+(BOOL)_rollbackSQLTransactionAndCloseDB:(sqlite3Ref)arg1 ;
-(NSFileManager *)fileManager;
-(PLPhotoLibraryPathManager *)pathManager;
-(BOOL)isPostProcessingLightweightMigration;
-(BOOL)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)arg1 ;
-(BOOL)_verifyCloudAssetsLocalAvailability:(id)arg1 ;
-(BOOL)deleteAnalysisStatesInStore:(id)arg1 forWorkerType:(short)arg2 ;
-(unsigned long long)_assetCountForLibrary:(id)arg1 ;
-(void)_printMigrationSummaryInStore:(id)arg1 ;
-(BOOL)_populateAdjustmentTimestampsOnAssets:(id)arg1 ;
-(BOOL)_fixupSyncedAssetAttributesInStore:(id)arg1 ;
-(BOOL)_deletePersonsMissingUUIDInStore:(id)arg1 ;
-(void)_repairMetadataAndSingletonsForMigrationType:(long long)arg1 forceRebuildReason:(id)arg2 journalRebuildRequired:(BOOL)arg3 ;
-(BOOL)_verifyAndFixBrokenLocalAvailabilityForResourceWithFileIDsInStore:(id)arg1 ;
-(void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1 ;
-(BOOL)_setupRootFolderInStore:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)_unquarantinedQuarantinedItems:(id)arg1 ;
-(BOOL)deleteAllAssetAnalysisStatesInStore:(id)arg1 ;
-(BOOL)_populateVideoCpFieldsInStagedStore:(id)arg1 ;
-(void)_forceDupeAnalysis;
-(BOOL)_unquarantineClass:(Class)arg1 inManagedObject:(id)arg2 ;
-(void)repairSingletonObjectsInDatabase;
-(BOOL)_fixVideoDimensionsInStore:(id)arg1 ;
-(BOOL)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)arg1 ;
-(BOOL)_populateRepresentativeAssets:(id)arg1 ;
-(BOOL)_resetFailedCloudMasters:(id)arg1 ;
-(void)_fixPathForResource:(id)arg1 withPath:(id)arg2 ;
-(BOOL)_resetThumbnailsAndInitiateRebuildRequestIfNeeded:(BOOL)arg1 ;
-(BOOL)resetRejectedFacesOnAllPersonsInStore:(id)arg1 ;
-(BOOL)_processDeletesForUUIDs:(id)arg1 ;
-(void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1 ;
-(void)applyDataProtectionToPhotosPaths:(id)arg1 fromKeyClass:(int)arg2 toKeyClass:(int)arg3 ;
-(BOOL)_revalidateImportSessionDates:(id)arg1 ;
-(BOOL)_fixupKeyAssetsForAlbumsInStore:(id)arg1 ;
-(id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(BOOL)arg1 ;
-(BOOL)_storeContainsFaceCrops:(id)arg1 success:(BOOL*)arg2 ;
-(BOOL)_recordCurrentVersionMetadataInPersistentStore:(id)arg1 migrationType:(long long)arg2 forceRebuildReason:(id)arg3 sourceModelVersion:(id)arg4 updateLegacyMigrationState:(BOOL)arg5 journalRebuildRequred:(BOOL)arg6 ;
-(id)managedObjectContextForMigrationWithName:(const char*)arg1 persistentStoreCoordinator:(id)arg2 concurrencyType:(unsigned long long)arg3 ;
-(os_unfair_lock_s)containedObjectsLock;
-(BOOL)_fixAdjustedFingerprintsInStore:(id)arg1 ;
-(id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg1 ;
-(BOOL)_repersistDuplicatedAssets:(id)arg1 ;
-(BOOL)_resetUploadAttempts:(id)arg1 ;
-(BOOL)shouldCreateDatabase;
-(BOOL)_fixIncorrectHeifMetadataInStore:(id)arg1 ;
-(BOOL)_emptyResourceTablesInStagedStore:(id)arg1 ;
-(BOOL)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)arg1 ;
-(void)_convertImplicitDownloadAndKeepOriginalsEnabledToExplicit;
-(void)_resetICPLPrompt;
-(void)_handleCreateOptionsUsingContext:(id)arg1 ;
-(BOOL)_deleteOrphanedExtendedAttributes:(id)arg1 ;
-(BOOL)_resetAnalysisStateForVideosInStore:(id)arg1 ;
-(BOOL)_performChangesOnBatchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)_fixEmptyVideoResourcePathsInStore:(id)arg1 ;
-(id)_syncedPropertiesForAssetUUID:(id)arg1 ;
-(BOOL)_shouldTriggerLightweightMigrationFailureForInternalTesting;
-(BOOL)_resetDeferredRepairAdjustmentFailureAndCloudRecoveryStateInStore:(id)arg1 ;
-(void)loadFileSystemAssetsNotifyEnter;
-(BOOL)isCloudPhotoLibraryEnabled;
-(void)setOptions:(NSDictionary *)arg1 ;
-(long long)legacyMigrationState;
-(BOOL)_copyAssetDescriptionToAccessibilityDescription:(id)arg1 ;
-(BOOL)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1 ;
-(long long)createNewDatabaseWithMigrationType:(long long)arg1 forceRebuildReason:(id)arg2 error:(id*)arg3 ;
-(BOOL)_fixVideoJPGPath:(id)arg1 ;
-(BOOL)_addCameraCaptureDeviceForAssetsInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithError:(id)arg1 ;
-(BOOL)_persistImportSessionAlbumType:(id)arg1 ;
-(BOOL)resetAnalysisStateForVideosWithMoc:(id)arg1 ;
-(BOOL)_move1kResourcesOutOfMastersDir:(id)arg1 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_LOCKED;
-(BOOL)_regenerateSharedStreamsDataStoreKeysDataInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithRepairError:(id)arg1 ;
-(BOOL)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2 ;
-(BOOL)_deleteCloudSharedAndSynced:(BOOL)arg1 assetReferencesInStore:(id)arg2 ;
-(BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_ungroupDuplicateGroupedAssetsInStore:(id)arg1 ;
-(BOOL)_migrateRejectedFacesGroupInStagedStore:(id)arg1 ;
-(BOOL)_repairCTMOriginalVideosWithSOCAvailableBitInStore:(id)arg1 ;
-(BOOL)_invalidateZeroHDRGainInStore:(id)arg1 ;
-(BOOL)_migrateTransformableUUIDsToStringsInStore:(id)arg1 ;
-(BOOL)_forceSoftResetSync;
-(BOOL)_updateQualitySortForResourcesWithCPLResourceTypeVideoFullSizeInStore:(id)arg1 ;
-(BOOL)_fixInitialSyncMarker;
-(BOOL)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)arg1 assumeAdjustedIrisIsVisible:(BOOL)arg2 ;
-(BOOL)fixPossiblyIncorrectAddedDateForAsset:(id)arg1 ;
-(BOOL)_populateNilOriginalFilenameOnMaster:(id)arg1 ;
-(BOOL)_fixUTIforSlowMoInStore:(id)arg1 ;
-(void)_validateCurrentModelVersionAttempt:(long long)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreTimeoutError;
-(BOOL)_postProcessFromVersion6006Store:(id)arg1 ;
-(NSDictionary *)options;
-(void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)arg1 context:(id)arg2 ;
-(void)_fixIncorrectHeifMetadataForAsset:(id)arg1 ;
-(unsigned long long)_assetCountForStore:(id)arg1 ;
-(PLDeviceRestoreMigrationPostProcessingSupport *)postProcessingToken;
-(BOOL)_fixFaceAlgorithmVersion:(id)arg1 ;
-(BOOL)_refactorLargeVideoRecipeResourcesInStore:(id)arg1 ;
-(void)_repairPotentialModelCorruption;
-(BOOL)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1 ;
-(BOOL)_repairLegacyMigrationDuplicateVersionCloudResources:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_FULL;
-(BOOL)_removeCameraRollInStore:(id)arg1 ;
-(void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1 progress:(id)arg2 ;
-(BOOL)_executeBatchUpdateWithEntityName:(id)arg1 predicate:(id)arg2 propertiesToUpdate:(id)arg3 managedObjectContext:(id)arg4 ;
-(BOOL)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1 ;
-(BOOL)_fixupResourceTypeUnknownInStore:(id)arg1 ;
-(BOOL)_persistPersonsInStore:(id)arg1 ;
-(BOOL)_trimInvalidAlbumAssetsMappingRecords;
-(BOOL)_fixupImportedEventsInStore:(id)arg1 ;
-(void)_importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_tagScreenshotsForAssetsInStore:(id)arg1 ;
-(void)_shouldRepromptUserIfNeeded;
-(BOOL)_resetLimitedLibraryFilterDataInStore:(id)arg1 ;
-(BOOL)_fixOriginalAlternateImageOrientationForResourcesInStore:(id)arg1 ;
-(BOOL)relocateOriginalUBFPaths:(id)arg1 ;
-(BOOL)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(BOOL)arg2 ;
-(BOOL)_runMigrationStepWithPrettyFunction:(const char*)arg1 store:(id)arg2 migrationHandler:(/*^block*/id)arg3 ;
-(BOOL)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1 ;
-(id)archivedAssetUUIDForURL:(id)arg1 ;
-(BOOL)_removeUntrackedPersonMetadataInStore:(id)arg1 ;
-(void)_migratePersonContactInfo;
-(BOOL)_persistStoreUUIDToMobileCPLPlist:(id)arg1 ;
-(BOOL)_migrateOriginalColorSpaceInStagedStore:(id)arg1 ;
-(void)pausePhotoStreams;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CORRUPT;
-(BOOL)touchAnalysisStateSortTokensInStoreInStore:(id)arg1 ;
-(BOOL)_fixupCloudResourcesInStore:(id)arg1 ;
-(BOOL)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStoreAndClearSceneprints:(id)arg1 ;
-(BOOL)_repairReframedAssetsWithoutSOCAvailableBitWithStore:(id)arg1 ;
-(BOOL)rebuildAllMomentsInStore:(id)arg1 ;
-(void)filesystemImportResultsUpdateKeywordWithImportedAssets:(id)arg1 ;
-(BOOL)_moveGpsHorizontalAccuracyToNewAttribute:(id)arg1 ;
-(BOOL)_fixAssetMasterResources:(id)arg1 ;
-(id)_iTunesPhotosLastSyncMetadata;
-(id)thumbnailManager;
-(BOOL)_fixNilCloudMasterGUID:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_ERROR;
-(BOOL)_rebuildWideCaptureThumbsInStore:(id)arg1 ;
-(void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2 ;
-(BOOL)_runMigrationStepWithName:(id)arg1 fetchRequest:(id)arg2 store:(id)arg3 migrationHandler:(/*^block*/id)arg4 ;
-(BOOL)_fixWhitelistOwnerForPendingInvitationsInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithMissingDatabaseFile;
-(void)_loadFacesFileSystemDataIntoDatabase;
-(BOOL)_fixNonDuplicatedAssets:(id)arg1 adjusted:(BOOL)arg2 ;
-(BOOL)_populateCloudResourceLocalStateInStor:(id)arg1 ;
-(BOOL)_resetDupesAnalysisInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeOtherCoreDataError;
-(BOOL)_addRAWPackedBadgeAttributeForAllRAWAssetsInStore:(id)arg1 ;
-(BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)isPhotoLibraryDatabaseReadyForOpen;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_PERM;
-(long long)migrateOrCreateDatabaseIfNecessaryWithPersistentContainer:(id)arg1 migrationPolicy:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isLoadingFacesFromFileSystem;
-(BOOL)_renumberLocalAvailabilityAndLocalAvailabilityTargetsInStore:(id)arg1 ;
-(BOOL)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1 ;
-(void)setStoreMetadataLock:(os_unfair_lock_s)arg1 ;
-(void)_failed_repairSingletonObjectsInNewDatabaseWithNoPersistentStores;
-(BOOL)_removeResourceModelManualIdentityConstraintInStore:(id)arg1 ;
-(id)_loadOriginalVideoMetadataFromAsset:(id)arg1 timeZoneLookup:(id)arg2 error:(id*)arg3 ;
-(BOOL)_recoverSingleBurstPhotos:(id)arg1 ;
-(BOOL)_repushAssetsWithNewGroupingPropertiesInStore:(id)arg1 ;
-(BOOL)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4 ;
-(BOOL)_scavengeCameraProcessingAdjustmentMetadataForAssetsInStore:(id)arg1 ;
-(BOOL)_populateGroupingStateOnAllGroupedAssetsInStore:(id)arg1 ;
-(BOOL)_markMigrationVerifiedTypePersonsInStore:(id)arg1 ;
-(BOOL)_deleteAllMemoriesInStore:(id)arg1 ;
-(PLDeviceRestoreMigrationSupport *)deviceRestoreMigrationSupport;
-(void)resumePhotoStreams;
-(BOOL)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(BOOL)arg2 ;
-(BOOL)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsInNewDatabaseWithNilContextError:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithNilContextError:(id)arg1 ;
-(BOOL)_retryQuarantinedAssetsAndFixResourceRelation:(id)arg1 ;
-(BOOL)_persistVideoComplPropertiesInStore:(id)arg1 ;
-(BOOL)_clearAvalancheUUIDOnCloudSharedAssetsWithStore:(id)arg1 ;
-(id)_dateWithiTunesTimeInterval:(double)arg1 ;
-(BOOL)_fixupSharedStreamOrientationsInStore:(id)arg1 ;
-(BOOL)_populateNilOriginalFilename:(id)arg1 ;
-(BOOL)_markAssetsForFaceProcessingByMediaAnalysisWithStore:(id)arg1 ;
-(id)_stagedVersions;
-(BOOL)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)_fixLastPrefetchDateInStore:(id)arg1 ;
-(BOOL)_populateLatLongInAsset:(id)arg1 ;
-(BOOL)_fixCustomRenderedValues:(id)arg1 ;
-(os_unfair_lock_s)lightweightMigrationLock;
-(BOOL)_fixCloudSharedGIFsInStore:(id)arg1 ;
-(void)_populateFaceRegionsForAsset:(id)arg1 ;
-(BOOL)_requestAvailabilityChangeForAssetsMissing1kResourcesInStore:(id)arg1 ;
-(BOOL)_applyDataProtectionToDCIMFromClassBToClassC;
-(id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1 ;
-(BOOL)_removeDuplicatedCloudSharedComments:(id)arg1 ;
-(BOOL)_persistMemoriesInStore:(id)arg1 ;
-(BOOL)_createImportSessionAlbums:(id)arg1 ;
-(BOOL)_updateKeyAssetInMemory:(id)arg1 ;
-(BOOL)_setImportedByInPLCloudMaster:(id)arg1 ;
-(BOOL)_fixupImportedAssetsInStore:(id)arg1 ;
-(BOOL)_fixUploadedButNotRemotelyAvailalbeCPLResourcesInStore:(id)arg1 ;
-(BOOL)validateModelEntityNames:(out id*)arg1 ;
-(BOOL)resetManualOrderForNonFavoritePeopleInStore:(id)arg1 ;
-(void)_validateCurrentModelVersionFailedWithMismatchedVersion:(long long)arg1 ;
-(BOOL)_fixRawWithZeroDimensions:(id)arg1 ;
-(void)_importAllDCIMAssets:(id)arg1 progressFraction:(id)arg2 ;
-(BOOL)_repushAssetsMatchingPredicate:(id)arg1 inStore:(id)arg2 withMaster:(BOOL)arg3 ;
-(BOOL)_fixCloudSharedVideosInStore:(id)arg1 ;
-(PLCoreAnalyticsEventManager *)analyticsEventManager;
-(id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;
-(BOOL)_identifyVariationsAndDepthAdjustmentsForAsset:(id)arg1 ;
-(BOOL)_fixPersonAndFaceGroup:(id)arg1 ;
-(id)_newSyncedPropertiesByAssetUUIDs:(BOOL)arg1 ;
-(BOOL)_removeAllLocalVideoKeyFrameResourcesRevert14037InStore:(id)arg1 ;
-(unsigned long long)_assetCountForContext:(id)arg1 ;
-(void)_printCountsForEntityName:(id)arg1 groupByProperties:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(BOOL)_populateUserKeyFacePickSourceForPersonInStore:(id)arg1 ;
-(BOOL)_repushPersonsWithMergeTargetInStore:(id)arg1 ;
-(BOOL)fixupUnknownAnalysisStatesInStore:(id)arg1 ;
-(BOOL)_fixupBrokenBurstPicksInStore:(id)arg1 ;
-(BOOL)_forceAlbumMetadataToDiskInStore:(id)arg1 ;
-(void)loadFacesFileSystemDataIntoDatabase;
-(BOOL)_fixCorruptedOrientationsInStore:(id)arg1 ;
-(BOOL)_resetFailedAssets:(id)arg1 ;
-(BOOL)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)arg1 ;
-(BOOL)_nukeWallpaperRemnantsInStore:(id)arg1 ;
-(BOOL)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(BOOL*)arg1 ;
-(BOOL)_fixAdjustedAssets:(id)arg1 ;
-(BOOL)migratePurgeableResources;
-(BOOL)_removeEvents:(id)arg1 ;
-(void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 fixAddedDate:(BOOL)arg2 ;
-(BOOL)_populateCloudNameSourceOnFacesInStore:(id)arg1 ;
-(BOOL)reconsiderAllowedForAnalysisOnAssetsMarkedNotAllowedInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_CANTOPEN;
-(BOOL)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)arg1 withStartingWorkerFlags:(int)arg2 inStore:(id)arg3 ;
-(BOOL)_repairOrphanedProjectAlbumsInStore:(id)arg1 ;
-(long long)faceMigrationResetLevelRequiredForPreviousStoreVersion:(unsigned long long)arg1 ;
-(BOOL)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)arg1 ;
-(BOOL)clearVisionWorkerCache;
-(void)loadFileSystemAssetsNotifyCompleted:(/*^block*/id)arg1 ;
-(BOOL)_deleteVideoThumbsMadeFromPreferredFrameInStore:(id)arg1 ;
-(void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
-(void)archiveAssetUUIDForPathPlist:(id)arg1 ;
-(id)newDeviceRestoreMigrationSupport;
-(BOOL)_fixIncorrectThumbnailTables;
-(void)setLightweightMigrationLock:(os_unfair_lock_s)arg1 ;
-(BOOL)_fixSidecarUTIsAndDataStoreSubtype:(id)arg1 ;
-(BOOL)_saveChangesToPhotoIrisInStore:(id)arg1 matchingPredicate:(id)arg2 countChanged:(unsigned long long*)arg3 error:(id*)arg4 changeBlock:(/*^block*/id)arg5 ;
-(void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryTooNew;
-(BOOL)_refreshTriggerValues:(id)arg1 ;
-(BOOL)_fixImportedAssetsFromCMMSavedInDCIMWithWrongSavedAssetType:(id)arg1 ;
-(BOOL)_fixUTIForRDMigrationInStore:(id)arg1 ;
-(BOOL)_fixupAssetPersistence:(id)arg1 ;
-(BOOL)_addLocationHashesToAssets:(id)arg1 ;
-(BOOL)_deleteExtraneousAdjustedFullSizeResourcesForSloMoAssetsWithStore:(id)arg1 ;
-(BOOL)_fixMemoriesWithAssetLists:(id)arg1 ;
-(BOOL)_runPairingForAssetsInStore:(id)arg1 ;
-(BOOL)_fixTrashedDate:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithInvalidDatabaseFile;
-(BOOL)_removeOldPersonMetadataInStore:(id)arg1 ;
-(BOOL)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)arg1 ;
-(void)_fatal_cannotProceedRebuildPreventionSafetyCheckTriggered;
-(BOOL)performFaceAnalysisResetMigrationStepWithResetLevel:(long long)arg1 store:(id)arg2 ;
-(os_unfair_lock_s)storeMetadataLock;
-(BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_regenerateReferenceKeyDataInStore:(id)arg1 ;
-(BOOL)_fixDuplicatedAssets:(id)arg1 ;
-(BOOL)_fixAlbumAndFolderSortAscending:(id)arg1 ;
-(BOOL)_generateAddedDateForAssetsInStore:(id)arg1 ;
-(BOOL)_unQuarantineAssetsIfPossibleInStore:(id)arg1 ;
-(BOOL)_fixIncorrectAddedDateForAssetsInStore:(id)arg1 ;
-(void)handleGreenChanges:(id)arg1 ;
-(void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 ;
-(BOOL)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1 ;
-(BOOL)_tryToPromoteUnknownAssetsInStore:(id)arg1 ;
-(BOOL)_repairCTMOriginalVideosWithoutAdjustmentsInStore:(id)arg1 ;
-(void)loadFileSystemAssetsNotifyLeave;
-(BOOL)_removeContactMatchingDictionaryOnTombstonedPeople:(id)arg1 ;
-(BOOL)_fixHasLocationSmartAlbum:(id)arg1 ;
-(id)_predicateForInconsistentHeifAssets;
-(id)_stagedManagedObjectModelURLWithStageVersion:(id)arg1 ;
-(BOOL)_disableICloudPhoto;
-(BOOL)_isReasonableCreationDate:(id)arg1 ;
-(BOOL)_performMigrationCacheDateCreatedOnResources:(BOOL)arg1 cacheItemIdentifierOnResources:(BOOL)arg2 store:(id)arg3 ;
-(BOOL)_fixItemIdentifierForVideoCmplInStore:(id)arg1 ;
-(void)_failed_recordCurrentVersionMetadata;
-(BOOL)_relocateCPLMarkerFiles;
-(void)_failed_repairSingletonObjectsWithInvalidFileTypeLibraryDirectory;
-(BOOL)_updateKindSubtypeForPanoramaPhotosNeedsReset:(BOOL)arg1 inStore:(id)arg2 ;
-(void)_repairRootFolderFixedOrderKeysInStore:(id)arg1 ;
-(long long)checkForceRebuildIndicatorFile;
-(void)_failed_repairSingletonObjectsWithErrorTypeOtherPhotosError;
-(id)_dateForVariations;
-(BOOL)_regenerateMonthHighlightTitlesWithStore:(id)arg1 ;
-(BOOL)_supportForUserSmartQuery:(id)arg1 ;
-(void)applyDataProtectionToAllPhotosFilesOnce;
-(BOOL)_fixMergedPeopleThatShouldBeVerified:(id)arg1 ;
-(BOOL)_migrateAssetLocationData:(id)arg1 ;
-(BOOL)_removeAutoloopWorkerStatesInStore:(id)arg1 ;
-(id)_dateForFirstCRVSPhoto;
-(BOOL)_fixZeroTrashedDateForEntityName:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)_removeInvalidImportSessionAlbums:(id)arg1 ;
-(BOOL)debug_resetThumbnailsAndInitiateRebuildRequest;
-(BOOL)_updateAlbumDatesInStore:(id)arg1 ;
-(BOOL)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1 ;
-(BOOL)resetGraphPersonsInStore:(id)arg1 ;
-(BOOL)_setPlaybackStyleForAnimatedGIFsInStore:(id)arg1 ;
-(BOOL)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)arg1 ;
-(BOOL)_updateCPLMarkerFiles;
-(BOOL)_fixInvalidPostMigrationFileSystemImportedAssets:(id)arg1 ;
-(BOOL)_convertAssetDepthStatesToDepthTypeInStore:(id)arg1 ;
-(BOOL)_populateHasAdjustmentsForAssetsInStore:(id)arg1 ;
-(void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_populateFaceRegionsInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsInNewDatabaseWithRepairError:(id)arg1 ;
-(BOOL)_persistMetadataToFileSystemForAlbum:(id)arg1 ;
-(BOOL)_fixDuplicatedRootFolderAndOrphanedAlbumsInStore:(id)arg1 ;
-(id)_eventNameFromDate:(id)arg1 ;
-(BOOL)_createPhotoDataDirectoryIfNecessary;
-(BOOL)_deletePhotoStreamAssetReferencesInStore:(id)arg1 ;
-(id)managedObjectContextForMigrationInStore:(id)arg1 name:(const char*)arg2 concurrencyType:(unsigned long long)arg3 ;
-(BOOL)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1 ;
-(BOOL)_purgeCloudSharedResourcesInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypePLPhotosErrorLibraryRequiresMigration;
-(id)generatePathToAssetUUIDRecoveryMapping;
-(void)_setIsPostProcessingLightWeightMigration:(BOOL)arg1 ;
-(BOOL)_persistPlaceAnnotationData:(id)arg1 ;
-(void)_generateAlbumMetadataFromLastiTunesSyncedPlist;
-(BOOL)_persistResourceTypeAttributeOnAlternateImageResourcesInStore:(id)arg1 ;
-(BOOL)_removeAllSharedAssetDCIMFilesInStore:(id)arg1 ;
-(BOOL)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)arg1 ;
-(void)_rebuildAssetsFromJournal:(id)arg1 progressFraction:(id)arg2 ;
-(BOOL)_fixupLocalResourcesStates:(id)arg1 ;
-(BOOL)_removeAutoloopCacheIfExists;
-(BOOL)_deleteOrphanedUnverifiedPeople:(id)arg1 ;
-(BOOL)_fixFaceGroupUnverifiedPerson:(id)arg1 ;
-(BOOL)_updateSuggestionStartAndEndDatesInStore:(id)arg1 ;
-(BOOL)_fixSingletonFaceFaceGroup:(id)arg1 ;
-(BOOL)_updatePlaybackWithBatchUpdateRequest:(id)arg1 targetDescription:(id)arg2 inContext:(id)arg3 ;
-(BOOL)_fixRejectedKeyFace:(id)arg1 ;
-(BOOL)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(BOOL)arg1 inStore:(id)arg2 ;
-(BOOL)_repushMemoriesWithNewFeaturesInStore:(id)arg1 ;
-(BOOL)_markPhotoIrisVideoOrphansInStore:(id)arg1 ;
-(BOOL)_populateCloudVerifiedTypeOnPersonsInStore:(id)arg1 ;
-(BOOL)_cleanupLegacyFiles;
-(BOOL)deleteAllMomentsFromStore:(id)arg1 ;
-(BOOL)_setUserTypeOnKeyFace:(id)arg1 ;
-(BOOL)_removingDuplicatedCloudAssetGuid:(id)arg1 ;
-(BOOL)_addUUIDsToExistingKeywordsInStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeNSPersistentStoreOpenError;
-(BOOL)_reconstructImageExtendedAttributes:(id)arg1 ;
-(BOOL)_migrateVersionSpecific1kResourcesInStore:(id)arg1 ;
-(void)_setLastWelcomedDBVersion;
-(void)setContainedObjectsLock:(os_unfair_lock_s)arg1 ;
-(BOOL)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2 ;
-(BOOL)_invalidateReverseGeocodingDataInStore:(id)arg1 ;
-(BOOL)_filterSceneClassificationsInStore:(id)arg1 ;
-(void)dontImportFileSystemDataIntoDatabaseWithPhotoLibrary:(id)arg1 ;
-(BOOL)_fixSharedStreamVideoResourcesInStore:(id)arg1 ;
-(BOOL)_fixVideoDimensionsForAsset:(id)arg1 ;
-(BOOL)_moveCloudSharedDerivativesInStore:(id)arg1 ;
-(BOOL)_updatePlaybackStylesAndVariationsInStore:(id)arg1 ;
-(long long)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6 migrationPolicy:(unsigned)arg7 error:(id*)arg8 ;
-(BOOL)_fixupCroppedUnadjustedAssets:(id)arg1 ;
-(BOOL)_updateMogulSubtypeAndSetHighFrameRateStateOnAssetsInStore:(id)arg1 ;
-(BOOL)_cleanupInvalidAlbumsAndFoldersInStore:(id)arg1 ;
-(void)_performRebuildPreventionSafetyCheckForInternalBuilds;
-(void)_resetLocalResourcesStateForAssetsWithContext:(id)arg1 usingPredicate:(id)arg2 ;
-(BOOL)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1 ;
-(BOOL)fixupStatesWithUnreachableAssetUUIDsInStore:(id)arg1 ;
-(BOOL)_removeUntrackedCloudResourceImageDerivativesInStore:(id)arg1 ;
-(id)_dateForWideGamutCapture;
-(BOOL)_repairTableThumbFragmentation;
-(BOOL)_fixLocallyAvailableFlagForThumbnailsInStore:(id)arg1 ;
-(void)forceImportFileSystemDataIntoDatabase;
-(BOOL)_flattenUnknownCustomRenderedValues:(id)arg1 ;
-(BOOL)resetFaceQualityInStore:(id)arg1 ;
-(void)_writeToPhotoDataDirectoryFailedWithNoPermission:(id)arg1 ;
-(BOOL)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)arg1 ;
-(BOOL)_fixKeywordsInStagedStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeOtherSQLiteError;
-(BOOL)_fixLocationValuesInStore:(id)arg1 ;
-(id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2 progress:(id)arg3 ;
-(void)_removeFileAt:(id)arg1 forResource:(id)arg2 ;
-(BOOL)_createManualIndexesDropBeforeCreate:(BOOL)arg1 ;
-(BOOL)_removeUnneededAnalysisStateTableEntries:(id)arg1 ;
-(BOOL)_fixMovieAttributesInStore:(id)arg1 ;
-(void)migratePersonContactInfo;
-(BOOL)_migrateMetadataAndMigrationHistoryWithStore:(id)arg1 ;
-(BOOL)_migrateDetectedFacesGroupInStagedStore:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithErrorTypeSQLITE_NOTADB;
-(id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg1 ;
-(BOOL)_repushAllUserSmartAlbum:(id)arg1 ;
-(BOOL)_removeInvalidAdjustmentResourceDataInStore:(id)arg1 ;
-(void)setLoadingFacesFromFileSystem:(BOOL)arg1 ;
-(BOOL)skipDataProtectionForFilePath:(id)arg1 ;
-(BOOL)_fixCustomKeyAssetForAlbum:(id)arg1 ;
-(BOOL)_fixWhiteBalanceValuesInStore:(id)arg1 ;
-(BOOL)_updateMissingFileSystemVolumeUuidInStore:(id)arg1 ;
-(BOOL)_fixUnpushedVideoComplementResourcesInStore:(id)arg1 ;
-(BOOL)_fixKindSubtypeForLoopingVideoLivePhotosInStore:(id)arg1 ;
-(BOOL)_deletePersistentHistoryInStore:(id)arg1 ;
-(void)validateCurrentModelVersion;
-(BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1 ;
-(BOOL)_resetAssetLocationShiftingAndRevGeoInStore:(id)arg1 ;
-(BOOL)_migrateCandidateBitsToDeferredProcessingCandidateOptions:(id)arg1 ;
-(void)_failed_repairSingletonObjectsWithMissingLibraryDirectory;
-(BOOL)_fixVisibleBurstAsset:(id)arg1 ;
-(BOOL)_addLocalVideoKeyFrameResourceInStore:(id)arg1 ;
-(BOOL)_fixupAlbumOrderInAlbumListInStore:(id)arg1 ;
-(BOOL)_fixMasterCloudLocalStateEnum:(id)arg1 ;
-(BOOL)_fixCloudMasterCloudLocalState:(id)arg1 ;
-(BOOL)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)arg1 ;
-(BOOL)_removeCloudSharedFileAtPath:(id)arg1 withFileManager:(id)arg2 error:(id*)arg3 ;
-(void)_failed_repairSingletonObjectsWithNoPersistentStores;
-(BOOL)updateCompletedMigrationStateWithError:(id*)arg1 ;
@end
