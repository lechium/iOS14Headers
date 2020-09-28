/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableArray, NSError, NSMutableOrderedSet, NSMutableSet, NSCountedSet, NSMutableDictionary, NSFileAccessProcessManager, NSObject, NSArray;

@interface NSFileAccessClaim : NSObject <NSSecureCoding> {

	NSXPCConnection* _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	BOOL _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	BOOL _didWait;
	BOOL _isRevoked;
	NSMutableArray* _claimerBlockageReasons;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSCountedSet* _blockingReactorIDs;
	NSMutableArray* _providerCancellationProcedures;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	NSMutableArray* _devaluationProcedures;
	NSMutableArray* _finishingProcedures;
	NSFileAccessProcessManager* _processManager;
	NSObject*<OS_dispatch_semaphore> _claimerWaiter;
	BOOL _hasInvokedClaimer;
	BOOL _shouldEnableMaterializationDuringAccessorBlock;
	id _claimerOrNil;
	/*^block*/id _serverClaimerOrNil;
	NSMutableArray* _sandboxTokens;
	NSObject*<OS_dispatch_queue> _arbiterQueue;
	id _originatingReactorQueueID;

}

@property (readonly) NSObject*<OS_dispatch_semaphore> claimerWaiter;                 //@synthesize claimerWaiter=_claimerWaiter - In the implementation block
@property (copy,readonly) NSArray * allURLs; 
@property (assign) BOOL shouldEnableMaterializationDuringAccessorBlock;              //@synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(BOOL)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5 ;
+(BOOL)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)didWait;
-(void)blockClaimerForReason:(id)arg1 ;
-(void)disavowed;
-(void)removePendingClaims:(id)arg1 ;
-(void)givePriorityToClaim:(id)arg1 ;
-(void)finished;
-(void)scheduleBlockedClaim:(id)arg1 ;
-(NSArray *)allURLs;
-(BOOL)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(/*^block*/id)arg3 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(id)pendingClaims;
-(BOOL)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(void)setCameFromSuperarbiter;
-(BOOL)shouldCancelInsteadOfWaiting;
-(id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 ;
-(void)dealloc;
-(id)claimID;
-(void)removeBlockingReactorID:(id)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)unblockClaimerForReason:(id)arg1 ;
-(void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)block;
-(void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3 ;
-(void)prepareClaimForGrantingWithArbiterQueue:(id)arg1 ;
-(BOOL)isRevoked;
-(void)setShouldEnableMaterializationDuringAccessorBlock:(BOOL)arg1 ;
-(void)invokeClaimer;
-(BOOL)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)cancelled;
-(void)setClaimerError:(id)arg1 ;
-(id)purposeID;
-(void)addPendingClaim:(id)arg1 ;
-(void)addBlockingReactorID:(id)arg1 ;
-(BOOL)isGranted;
-(void)devalueOldClaim:(id)arg1 ;
-(void)whenFinishedPerformProcedure:(/*^block*/id)arg1 ;
-(void)granted;
-(BOOL)shouldEnableMaterializationDuringAccessorBlock;
-(id)initWithCoder:(id)arg1 ;
-(id)client;
-(void)revoked;
-(void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long*)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long*)arg4 thenContinue:(/*^block*/id)arg5 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)devalueSelf;
-(id)claimerError;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(BOOL)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(/*^block*/id)arg2 ;
-(void)whenDevaluedPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)cameFromSuperarbiter;
-(int)clientProcessIdentifier;
-(void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(/*^block*/id)arg3 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long*)arg2 thenContinue:(/*^block*/id)arg3 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(void)unblock;
-(void)whenRevokedPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)claimerWaiter;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)startObservingClientState;
@end
