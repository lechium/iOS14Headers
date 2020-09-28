/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPDFileCoordinationProviderDelegate.h>
#import <libobjc.A.dylib/FPDDomainIndexerDelegate.h>

@protocol FPDExtensionSessionProtocol, OS_dispatch_source, FPDDomainIndexChangeDelegate, OS_dispatch_queue, OS_os_log, FPDDomainBackend;
@class NSMutableDictionary, NSOperationQueue, NSDictionary, NSObject, NSURL, FPPacer, NSString, NSFileProviderDomain, NSNumber, NSArray, FPDProvider, FPDDomainIndexer, NSData, FPProviderDomain;

@interface FPDDomain : NSObject <FPDFileCoordinationProviderDelegate, FPDDomainIndexerDelegate> {

	NSMutableDictionary* _coordinatorMetadataPerURL;
	NSOperationQueue* _providedItemsOperationQueue;
	NSDictionary* _fileCoordinationProviderByURL;
	id<FPDExtensionSessionProtocol> _session;
	Class _fpfsClass;
	BOOL _cantStartup;
	BOOL _isObservingRoot;
	BOOL _indexerStarted;
	BOOL _isUsingFPFS;
	BOOL _invalidated;
	NSObject*<OS_dispatch_source> _timer;
	NSURL* _previouslyAccessedSecurityScopedURL;
	FPPacer* _rootCreationPacer;
	BOOL _started;
	BOOL _userEnabled;
	BOOL _ejectable;
	BOOL _unableToStartup;
	BOOL _forceNoFPFSForTesting;
	id<FPDDomainIndexChangeDelegate> _indexChangeDelegate;
	NSString* _identifier;
	NSFileProviderDomain* _nsDomainOrNilForDefault;
	NSFileProviderDomain* _nsDomain;
	NSNumber* _shouldDropIndexOrNil;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _log;
	NSArray* _extensionStorageURLs;
	NSString* _purposeIdentifier;
	id<FPDDomainBackend> _defaultBackend;
	id<FPDDomainBackend> _extensionBackend;
	id<FPDDomainBackend> _deactivatedBackend;
	FPDProvider* _provider;
	NSMutableDictionary* _filePresenters;
	FPDDomainIndexer* _indexer;
	NSData* _fpfsRootBookmarkData;

}

@property (assign,nonatomic,__weak) id<FPDDomainIndexChangeDelegate> indexChangeDelegate;              //@synthesize indexChangeDelegate=_indexChangeDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerDomainID; 
@property (nonatomic,readonly) FPProviderDomain * providerDomain; 
@property (assign,nonatomic) BOOL started;                                                             //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) NSFileProviderDomain * nsDomainOrNilForDefault;                           //@synthesize nsDomainOrNilForDefault=_nsDomainOrNilForDefault - In the implementation block
@property (nonatomic,readonly) NSFileProviderDomain * nsDomain;                                        //@synthesize nsDomain=_nsDomain - In the implementation block
@property (assign,nonatomic) BOOL userEnabled;                                                         //@synthesize userEnabled=_userEnabled - In the implementation block
@property (assign,nonatomic) BOOL ejectable;                                                           //@synthesize ejectable=_ejectable - In the implementation block
@property (assign,nonatomic) BOOL unableToStartup;                                                     //@synthesize unableToStartup=_unableToStartup - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToAppExtension; 
@property (nonatomic,retain) NSNumber * shouldDropIndexOrNil;                                          //@synthesize shouldDropIndexOrNil=_shouldDropIndexOrNil - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                                               //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) FPDDomain * domainIfNotDisabledByFPFSSettings; 
@property (nonatomic,readonly) NSArray * rootURLs; 
@property (nonatomic,readonly) NSArray * extensionStorageURLs;                                         //@synthesize extensionStorageURLs=_extensionStorageURLs - In the implementation block
@property (nonatomic,readonly) NSString * purposeIdentifier;                                           //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) id<FPDDomainBackend> defaultBackend;                                      //@synthesize defaultBackend=_defaultBackend - In the implementation block
@property (nonatomic,readonly) id<FPDDomainBackend> extensionBackend;                                  //@synthesize extensionBackend=_extensionBackend - In the implementation block
@property (nonatomic,readonly) id<FPDDomainBackend> deactivatedBackend;                                //@synthesize deactivatedBackend=_deactivatedBackend - In the implementation block
@property (nonatomic,__weak,readonly) FPDProvider * provider;                                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<FPDExtensionSessionProtocol> session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filePresenters;                                     //@synthesize filePresenters=_filePresenters - In the implementation block
@property (nonatomic,retain) FPDDomainIndexer * indexer;                                               //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,retain) NSData * fpfsRootBookmarkData;                                            //@synthesize fpfsRootBookmarkData=_fpfsRootBookmarkData - In the implementation block
@property (assign,nonatomic) BOOL forceNoFPFSForTesting;                                               //@synthesize forceNoFPFSForTesting=_forceNoFPFSForTesting - In the implementation block
@property (nonatomic,readonly) NSString * fp_prettyDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(long long)nonEvictableSpace;
-(void)invalidate;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)supportsFPFS;
-(FPDDomain *)domainIfNotDisabledByFPFSSettings;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(BOOL)_wantsPresenterNotifications;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setStarted:(BOOL)arg1 ;
-(id<FPDDomainBackend>)extensionBackend;
-(NSObject*<OS_os_log>)log;
-(BOOL)unableToStartup;
-(FPDDomainIndexer *)indexer;
-(void)forceFSIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isUsingFPFS;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)setShouldDropIndexOrNil:(NSNumber *)arg1 ;
-(void)_unregisterFromFileCoordinator;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 ;
-(void)setUserEnabled:(BOOL)arg1 ;
-(void)extensionIndexer:(id)arg1 didChangeNeedsAuthentification:(BOOL)arg2 ;
-(id<FPDExtensionSessionProtocol>)session;
-(BOOL)started;
-(void)setNsDomainOrNilForDefault:(NSFileProviderDomain *)arg1 ;
-(void)setForceNoFPFSForTesting:(BOOL)arg1 ;
-(id)_fileReactorID;
-(void)_registerFileCoordinatorWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)extensionStorageURLs;
-(BOOL)ejectable;
-(FPDProvider *)provider;
-(id)_providedItemsOperationQueue;
-(id<FPDDomainBackend>)deactivatedBackend;
-(id<FPDDomainIndexChangeDelegate>)indexChangeDelegate;
-(BOOL)isHiddenDefaultDomain;
-(NSNumber *)shouldDropIndexOrNil;
-(BOOL)isConnectedToAppExtension;
-(BOOL)userEnabled;
-(void)cleanupDomainKeepingArchiveFolder:(BOOL)arg1 ;
-(void)didChangeItemID:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startObservingRootAndResumeIndexerWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)fp_prettyDescription;
-(BOOL)forceNoFPFSForTesting;
-(BOOL)_shouldDisconnectDueToLowDiskSpace;
-(void)forceIngestionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createRootAndObserveIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FPDDomainBackend>)defaultBackend;
-(void)_startWithCompletion:(/*^block*/id)arg1 ;
-(void)setIndexer:(FPDDomainIndexer *)arg1 ;
-(void)setDefaultBackend:(id<FPDDomainBackend>)arg1 ;
-(NSData *)fpfsRootBookmarkData;
-(void)_setupRecoveryTimer;
-(BOOL)isProviderForURL:(id)arg1 ;
-(void)setIndexChangeDelegate:(id<FPDDomainIndexChangeDelegate>)arg1 ;
-(id)initWithIdentifier:(id)arg1 nsDomain:(id)arg2 extensionStorageURLs:(id)arg3 purposeIdentifier:(id)arg4 fpfsClass:(Class)arg5 provider:(id)arg6 ;
-(NSArray *)rootURLs;
-(void)setFpfsRootBookmarkData:(NSData *)arg1 ;
-(NSMutableDictionary *)filePresenters;
-(void)finishSetup;
-(id)materializedURLForItemID:(id)arg1 ;
-(NSFileProviderDomain *)nsDomainOrNilForDefault;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)startInOrderToDropIndex;
-(NSString *)purposeIdentifier;
-(NSFileProviderDomain *)nsDomain;
-(void)invalidateSession;
-(BOOL)isDefaultDomain;
-(void)workingSetDidChangeWithCompletionHandler:(/*^block*/id)arg1 ;
-(FPProviderDomain *)providerDomain;
-(void)createRootURLWithCompletion:(/*^block*/id)arg1 ;
-(id)_siblingDelegateForURL:(id)arg1 ;
-(NSString *)providerDomainID;
-(void)dumpInternalStateTo:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_removeProgressForProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(void)extensionIndexer:(id)arg1 didIndexOneBatchWithError:(id)arg2 updatedItems:(id)arg3 deletedIDs:(id)arg4 anchor:(id)arg5 anchorPersisted:(/*^block*/id)arg6 ;
-(void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchEnumeratorWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 lifetimeExtender:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2 ;
-(void)setEjectable:(BOOL)arg1 ;
-(void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelPendingCoordinations;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUnableToStartup:(BOOL)arg1 ;
-(BOOL)_shouldDisconnect;
-(void)daemonSideItemChange:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)description;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)createRootByImportingDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setFilePresenters:(NSMutableDictionary *)arg1 ;
-(id)_physicalURLForURL:(id)arg1 ;
@end
