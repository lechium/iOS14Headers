/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPFileCoordinatorDelegate.h>
#import <TSReading/TSPObjectDelegate.h>
#import <TSReading/TSPLazyReferenceDelegate.h>
#import <TSReading/TSPSupportDirectoryDelegate.h>
#import <TSReading/TSPDocumentResourceDownloader.h>
#import <TSReading/TSPPassphraseConsumer.h>

@protocol OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate;
@class NSString, NSData, SFUCryptoKey, NSURL, NSMapTable, NSObject, NSRecursiveLock, TSUTemporaryDirectory, TSPObject, TSPDataManager, TSPObjectContainer, NSUUID;

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer> {

	long long _lastObjectIdentifier;
	long long _modifyObjectToken;
	int _modifyObjectCount;
	unsigned _mode;
	SFUCryptoKey* _decryptionKey;
	NSURL* _documentURL;
	NSURL* _supportURL;
	NSMapTable* _objects;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSRecursiveLock* _readLock;
	NSObject*<OS_dispatch_queue> _documentStateQueue;
	NSObject*<OS_dispatch_queue> _loadObserversQueue;
	NSObject*<OS_dispatch_queue> _runLoadObserversQueue;
	NSObject*<OS_dispatch_queue> _documentResourceDataProviderQueue;
	BOOL _isWaitingForEndSave;
	NSObject*<OS_dispatch_group> _pendingEndSaveGroup;
	NSObject*<OS_dispatch_group> _outstandingReadsGroup;
	NSObject*<OS_dispatch_queue> _temporaryDirectoryQueue;
	TSUTemporaryDirectory* _temporaryDirectory;
	unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *> > >* _loadObservers;
	BOOL _isDocumentModified;
	BOOL _isSupportModified;
	BOOL _isPasswordProtected;
	BOOL _documentHasCurrentFileFormatVersion;
	NSString* _documentPasswordHint;
	TSPObject* _documentObject;
	id<TSPObjectContextDelegate> _delegate;
	TSPDataManager* _dataManager;
	TSPObjectContainer* _documentObjectContainer;
	TSPObjectContainer* _supportObjectContainer;
	NSData* _passwordVerifier;
	NSUUID* _documentUUID;
	NSUUID* _versionUUID;
	TSPObject* _supportObject;

}

@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL ignoreUnknownContentWhileReading; 
@property (nonatomic,readonly) BOOL ignoreVersionCheckingWhileReading; 
@property (nonatomic,readonly) BOOL ignoreDocumentResourcesWhileReading; 
@property (nonatomic,readonly) TSPDataManager * dataManager;                            //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) TSPObjectContainer * documentObjectContainer;              //@synthesize documentObjectContainer=_documentObjectContainer - In the implementation block
@property (nonatomic,retain) TSPObjectContainer * supportObjectContainer;               //@synthesize supportObjectContainer=_supportObjectContainer - In the implementation block
@property (nonatomic,readonly) BOOL documentHasCurrentFileFormatVersion;                //@synthesize documentHasCurrentFileFormatVersion=_documentHasCurrentFileFormatVersion - In the implementation block
@property (assign,nonatomic) long long lastObjectIdentifier; 
@property (nonatomic,retain) NSData * passwordVerifier;                                 //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * documentUUID;                                   //@synthesize documentUUID=_documentUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * versionUUID;                                    //@synthesize versionUUID=_versionUUID - In the implementation block
@property (nonatomic,retain) TSPObject * supportObject;                                 //@synthesize supportObject=_supportObject - In the implementation block
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) NSURL * documentURL; 
@property (assign,nonatomic) BOOL isDocumentModified;                                   //@synthesize isDocumentModified=_isDocumentModified - In the implementation block
@property (assign,nonatomic) BOOL isSupportModified;                                    //@synthesize isSupportModified=_isSupportModified - In the implementation block
@property (assign,nonatomic) BOOL isPasswordProtected;                                  //@synthesize isPasswordProtected=_isPasswordProtected - In the implementation block
@property (nonatomic,copy) NSString * documentPasswordHint;                             //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,readonly) TSPObject * documentObject;                              //@synthesize documentObject=_documentObject - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
+(void)waitForPendingEndSaveGroup:(id)arg1 ;
-(void)close;
-(id)temporaryDirectory;
-(BOOL)isPasswordProtected;
-(void)dealloc;
-(BOOL)needsDownload;
-(id)documentRoot;
-(NSURL *)documentURL;
-(SFUCryptoKey *)decryptionKey;
-(id)init;
-(id)objectForIdentifier:(long long)arg1 ;
-(void)setDelegate:(id<TSPObjectContextDelegate>)arg1 ;
-(TSPDataManager *)dataManager;
-(id)initWithDelegate:(id)arg1 ;
-(TSPObjectContext *)context;
-(void)setIsPasswordProtected:(BOOL)arg1 ;
-(id<TSPObjectContextDelegate>)delegate;
-(TSPObject *)documentObject;
-(long long)modifyObjectTokenForNewObject;
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(long long)newObjectIdentifier;
-(BOOL)areExternalReferencesSupported;
-(BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1 ;
-(BOOL)areNewExternalReferencesToDataAllowed;
-(id)supportDirectoryURL;
-(id)dataOrNilForIdentifier:(long long)arg1 ;
-(BOOL)ignoreDocumentSupport;
-(BOOL)isDocumentSupportTemporary;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4 ;
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;
-(void)beginWriteOperation;
-(void)endWriteOperation;
-(void)performReadOperation:(/*^block*/id)arg1 ;
-(void)beginAssertOnModify;
-(void)endAssertOnModify;
-(void)performReadOperationOnKnownObjects:(/*^block*/id)arg1 ;
-(void)checkforDataWarningsWithPackageURL:(id)arg1 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(void)didMoveToURL:(id)arg1 ;
-(void)didMoveSupportToURL:(id)arg1 ;
-(BOOL)isDocumentModified;
-(BOOL)isSupportModified;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)waitForSaveToFinishIfNeeded;
-(BOOL)ignoreUnknownContentWhileReading;
-(BOOL)ignoreVersionCheckingWhileReading;
-(BOOL)ignoreDocumentResourcesWhileReading;
-(void)didReadDocumentObject:(id)arg1 ;
-(long long)lastObjectIdentifier;
-(void)setLastObjectIdentifier:(long long)arg1 ;
-(long long)incrementLastObjectIdentifier:(long long)arg1 ;
-(long long)updateModifyObjectToken;
-(id)addLoadedObjectsAndEnqueueNotifications:(id)arg1 ;
-(void)runObjectNotificationsInQueue:(id)arg1 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3 ;
-(void)setIsDocumentModified:(BOOL)arg1 ;
-(void)setIsSupportModified:(BOOL)arg1 ;
-(NSString *)documentPasswordHint;
-(void)setDocumentPasswordHint:(NSString *)arg1 ;
-(TSPObjectContainer *)documentObjectContainer;
-(void)setDocumentObjectContainer:(TSPObjectContainer *)arg1 ;
-(TSPObjectContainer *)supportObjectContainer;
-(void)setSupportObjectContainer:(TSPObjectContainer *)arg1 ;
-(BOOL)documentHasCurrentFileFormatVersion;
-(NSData *)passwordVerifier;
-(void)setPasswordVerifier:(NSData *)arg1 ;
-(NSUUID *)documentUUID;
-(NSUUID *)versionUUID;
-(TSPObject *)supportObject;
-(void)setSupportObject:(TSPObject *)arg1 ;
@end
