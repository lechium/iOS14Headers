/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PVNotificationListener.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceFaceProcessingProtocol.h>

@class PhotoVision, PHAVisionServicePersistenceDelegate, NSMutableDictionary, NSURL, NSString;

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PVNotificationListener, PVVisionIntegrating, PVPersonPromoterDelegate, PLPhotoAnalysisVisionServiceFaceProcessingProtocol> {

	PhotoVision* _photoVision;
	PHAVisionServicePersistenceDelegate* _persistenceDelegate;
	SCD_Struct_PH5 _analysisStatistics;
	NSMutableDictionary* _state;
	unsigned long long _incrementalPersonProcessingStage;
	BOOL _disabledByUserDefaults;
	unsigned long long _faceAnalysisOptions;
	unsigned long long _faceIDModelRebuildPeriod;
	NSURL* _suggestionLoggingDirectory;
	BOOL _suggestionLoggingSessionOpen;
	BOOL _suggestionsLoggingEnabled;
	BOOL _clustererNeedsSyncing;
	BOOL _personBuilderMergeCandidatesEnabled;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;

}

@property (assign,nonatomic) unsigned long long incrementalPersonProcessingStage;                                //@synthesize incrementalPersonProcessingStage=_incrementalPersonProcessingStage - In the implementation block
@property (assign,nonatomic) BOOL personBuilderMergeCandidatesEnabled;                                           //@synthesize personBuilderMergeCandidatesEnabled=_personBuilderMergeCandidatesEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long lastMinimumFaceGroupSizeForCreatingMergeCandidates;              //@synthesize lastMinimumFaceGroupSizeForCreatingMergeCandidates=_lastMinimumFaceGroupSizeForCreatingMergeCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)runsExclusively;
-(id)statusAsDictionary;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)resetFaceClassificationModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(BOOL)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_persistentStorageDirectoryURLWithPhotoLibrary:(id)arg1 ;
-(unsigned long long)incrementalPersonProcessingStage;
-(int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(void)_logAnalysisStatistics;
-(BOOL)_needToRunPersonPromoterForScenario:(unsigned long long)arg1 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(id)personModelPath;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(int)_faceWorkerTasksToPerformOnAsset:(id)arg1 accordingToAnalysisAttributes:(id)arg2 ;
-(int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(BOOL)_needsToRunContactClassificationForScenario:(unsigned long long)arg1 ;
-(BOOL)_generateAndPersistFaceCropsOfUserConfirmedFacesInImage:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)persistPersonModel:(id)arg1 ;
-(void)pingFaceWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handlePVNotification:(id)arg1 ;
-(BOOL)_needToRunFaceIDModelCreationForScenario:(unsigned long long)arg1 ;
-(id)fetchPersonsForFaceIDModel;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_loadPersonsModelWithPhotoLibrary:(id)arg1 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)sortedPoolOfContactIdentifiersExcludingContactIdentifiers:(id)arg1 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEnabled;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)personBuilderMergeCandidatesEnabled;
-(BOOL)shouldProcessContact:(id)arg1 ;
-(BOOL)performFaceClusteringWithCompletion:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)faceClusteringInformation:(unsigned long long)arg1 withContext:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(void)_resetAnalysisStatistics;
-(BOOL)_generateAndPersistFaceCropsOfFaces:(id)arg1 inImage:(id)arg2 forAsset:(id)arg3 error:(id*)arg4 ;
-(void)faceProcessingStatusForUserInterfaceWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)contactClassificationDidExceedTimeInterval;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_didPerformFaceClustering;
-(BOOL)shouldReclassifyContacts;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)interruptPhotoVision;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)faceIDModelLastGenerationDidExceedTimeInterval;
-(id)_pvImageForAssetResourceFileURL:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(void)_readState;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_closeSuggestionsLoggingSession;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(void)markLastBackgroundFaceIDModelRebuildJobDate;
-(void)markLastBackgroundContactClassificationJobDate;
-(id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 canceler:(id)arg3 ;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg1 ;
-(void)_performIntermediateVisionCleanup;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)_needToRunPersonBuildingJobForScenario:(unsigned long long)arg1 ;
-(id)_faceToFaceCountMapForFaces:(id)arg1 ;
-(id)generateFaceCropForFaceCropSourceDescriptors:(id)arg1 ;
-(unsigned long long)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)_performFullVisionCleanup;
-(id)workerStateFileURL;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(void)_willPerformFaceClustering;
-(BOOL)classifyContactsWithProgress:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 ;
-(id)_pvImageForAsset:(id)arg1 targetSize:(CGSize)arg2 error:(id*)arg3 ;
-(void)generateFaceIDModelShouldForce:(BOOL)arg1 progress:(id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 ;
-(BOOL)_promotePersonsWithError:(id*)arg1 ;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1 ;
-(void)_openSuggestionsLoggingSession;
-(BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)arg1 createFaceTorsoprint:(BOOL)arg2 error:(id*)arg3 ;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_buildPersonsIncrementally:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)shouldRebuildFaceIDModel;
-(BOOL)processDirtyFaceCrop:(id)arg1 error:(id*)arg2 ;
-(void)_performFaceCropProcessingWhileKeepingAliveJob:(id)arg1 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(void)terminatePhotoVision;
-(BOOL)_needToRunClusteringJobForScenario:(unsigned long long)arg1 ;
-(void)shutdown;
-(BOOL)hasStandaloneJobsForScenario:(unsigned long long)arg1 ;
-(void)_finalizeSuggestionsLog;
-(void)processPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_updateFaceCropFace:(id)arg1 withFaceprintForFaceCrop:(id)arg2 createFaceTorsoprint:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(void)setIncrementalPersonProcessingStage:(unsigned long long)arg1 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 operation:(id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(void)cooldown;
-(BOOL)deletePersonModelWithError:(id*)arg1 ;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 operation:(id)arg4 error:(id*)arg5 ;
-(id)_facesRequiringFaceCropGenerationForAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)_needToRunFaceCropProcessingJobForScenario:(unsigned long long)arg1 ;
-(id)_photoVisionAllowingCreation:(BOOL)arg1 syncClusterCache:(BOOL)arg2 error:(id*)arg3 ;
-(void)processDirtyFaceCrops;
-(void)willCompleteJob:(id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(id)_pvImageForAssetResource:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAsset:(id)arg1 error:(id*)arg2 ;
-(void)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_clusterFacesWithPhotoVision:(id)arg1 incrementally:(BOOL)arg2 error:(id*)arg3 ;
-(unsigned long long)lastMinimumFaceGroupSizeForCreatingMergeCandidates;
@end
