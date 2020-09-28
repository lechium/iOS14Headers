/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBundleChannelProviderDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionManagerType.h>

@protocol FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager;
@class FCBundleSubscription, FCPurchaseLookupRecordSource, FCKeyValueStore, FCBundleSubscriptionLookUpEntryManager, NSHashTable, NFMutexLock, NSString;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {

	BOOL _hasRunEntitlementOnce;
	id<FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	FCBundleSubscription* _cachedSubscription;
	FCKeyValueStore* _localStore;
	FCBundleSubscriptionLookUpEntryManager* _bundleSubscriptionLookupEntryManager;
	NSHashTable* _observers;
	NFMutexLock* _accessLock;
	id<FCBundleChannelProviderType> _bundleChannelProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCBundleEntitlementsProviderType> bundleEntitlementsProvider;                          //@synthesize bundleEntitlementsProvider=_bundleEntitlementsProvider - In the implementation block
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;                                //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,retain) FCBundleSubscription * cachedSubscription;                                                  //@synthesize cachedSubscription=_cachedSubscription - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                               //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) FCBundleSubscriptionLookUpEntryManager * bundleSubscriptionLookupEntryManager;              //@synthesize bundleSubscriptionLookupEntryManager=_bundleSubscriptionLookupEntryManager - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                                                                   //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,retain) id<FCBundleChannelProviderType> bundleChannelProvider;                                      //@synthesize bundleChannelProvider=_bundleChannelProvider - In the implementation block
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                                      //@synthesize configurationManager=_configurationManager - In the implementation block
@property (assign,nonatomic) BOOL hasRunEntitlementOnce;                                                                 //@synthesize hasRunEntitlementOnce=_hasRunEntitlementOnce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
-(FCKeyValueStore *)localStore;
-(void)activityObservingApplicationDidEnterBackground;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)updateCachedSubscriptionWithSubscription:(id)arg1 ;
-(FCBundleSubscriptionLookUpEntryManager *)bundleSubscriptionLookupEntryManager;
-(void)notifyObserversForSubscribedStateWithSubscription:(id)arg1 ;
-(void)clearBundleSubscription;
-(NSHashTable *)observers;
-(id)changeSetBetween:(id)arg1 newSubscription:(id)arg2 ;
-(NFMutexLock *)accessLock;
-(void)setBundleSubscriptionLookupEntryManager:(FCBundleSubscriptionLookUpEntryManager *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)updateHasRunEntitlementOnce:(BOOL)arg1 ;
-(FCBundleSubscription *)cachedSubscription;
-(void)removeObserver:(id)arg1 ;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id<FCBundleEntitlementsProviderType>)bundleEntitlementsProvider;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(void)setHasRunEntitlementOnce:(BOOL)arg1 ;
-(void)setupCachedSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)expireBundleSubscription;
-(void)notifyObserversForChangeStateWithNewSubscription:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(FCBundleSubscription *)bundleSubscription;
-(id)bundleSubscriptionLookupEntry;
-(id)init;
-(id<FCBundleChannelProviderType>)bundleChannelProvider;
-(void)silentExpireBundleSubscription;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)notifyObserversForExpiredStateWithSubscription:(id)arg1 ;
-(void)setCachedSubscription:(FCBundleSubscription *)arg1 ;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 purchaseLookupRecordSource:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5 ;
-(void)setBundleChannelProvider:(id<FCBundleChannelProviderType>)arg1 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(BOOL)hasRunEntitlementOnce;
-(void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2 ;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
@end
