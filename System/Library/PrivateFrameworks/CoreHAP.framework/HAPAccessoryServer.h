/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking, HAPAccessoryServerDelegate, OS_dispatch_queue, HAPKeyStore;
@class NSString, NSNumber, NSObject, NSData, NSHashTable, HAPAccessory, NSArray, HMFVersion, HMFActivity, HAPDeviceID;

@interface HAPAccessoryServer : HMFObject {

	NSString* _name;
	NSString* _identifier;
	id<HMFLocking> _lock;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _securitySessionOpen;
	BOOL _reachablilityPingNotificationEnabled;
	BOOL _reachabilityPingEnabled;
	BOOL _supportsTimedWrite;
	BOOL _bleLinkConnected;
	BOOL _incompatibleUpdate;
	NSNumber* _category;
	unsigned long long _configNumber;
	id<HAPAccessoryServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _setupHash;
	unsigned long long _authMethod;
	NSString* _productData;
	unsigned long long _pendingRemovePairing;
	NSHashTable* _notificationClients;
	HAPAccessory* _primaryAccessory;
	NSArray* _accessories;
	long long _linkType;
	HMFVersion* _version;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _stateNumber;
	unsigned long long _compatibilityFeatures;
	id<HAPKeyStore> _keyStore;
	unsigned long long _pairSetupType;
	HMFActivity* _pairingActivity;

}

@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * notificationClients;                                 //@synthesize notificationClients=_notificationClients - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (assign,nonatomic) unsigned long long pendingRemovePairing;                           //@synthesize pendingRemovePairing=_pendingRemovePairing - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen;                              //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                   //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned long long stateNumber;                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long compatibilityFeatures;                          //@synthesize compatibilityFeatures=_compatibilityFeatures - In the implementation block
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,copy) NSData * setupHash;                                                  //@synthesize setupHash=_setupHash - In the implementation block
@property (copy) HMFVersion * version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long pairSetupType;                                  //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (nonatomic,retain) NSString * productData;                                            //@synthesize productData=_productData - In the implementation block
@property (assign,nonatomic,__weak) HMFActivity * pairingActivity;                              //@synthesize pairingActivity=_pairingActivity - In the implementation block
@property (copy,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) long long linkType;                                              //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL supportsTimedWrite;                                           //@synthesize supportsTimedWrite=_supportsTimedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                     //@synthesize authMethod=_authMethod - In the implementation block
@property (getter=isBLELinkConnected,nonatomic,readonly) BOOL bleLinkConnected;                 //@synthesize bleLinkConnected=_bleLinkConnected - In the implementation block
@property (assign,nonatomic) BOOL reachabilityPingEnabled;                                      //@synthesize reachabilityPingEnabled=_reachabilityPingEnabled - In the implementation block
@property (assign,nonatomic) BOOL reachablilityPingNotificationEnabled;                         //@synthesize reachablilityPingNotificationEnabled=_reachablilityPingNotificationEnabled - In the implementation block
-(NSString *)identifier;
-(void)registerForNotifications:(id)arg1 ;
-(HMFVersion *)version;
-(void)setReachable:(BOOL)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)isReachable;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(HMFVersion *)arg1 ;
-(NSNumber *)category;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSArray *)accessories;
-(id)init;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setCategory:(NSNumber *)arg1 ;
-(long long)linkType;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isPaired;
-(HAPDeviceID *)deviceID;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setAccessories:(NSArray *)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(void)reconfirm;
-(HAPAccessory *)primaryAccessory;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(NSData *)setupHash;
-(void)setSetupHash:(NSData *)arg1 ;
-(unsigned long long)stateNumber;
-(void)setStateNumber:(unsigned long long)arg1 ;
-(unsigned long long)authMethod;
-(BOOL)reachabilityPingEnabled;
-(void)setReachabilityPingEnabled:(BOOL)arg1 ;
-(BOOL)reachablilityPingNotificationEnabled;
-(void)setReachablilityPingNotificationEnabled:(BOOL)arg1 ;
-(unsigned long long)configNumber;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(BOOL)isSecuritySessionOpen;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isBLELinkConnected;
-(void)unregisterForNotifications:(id)arg1 ;
-(BOOL)requiresTimedWrite:(id)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)stopPing;
-(void)startPing;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(id)initWithKeystore:(id)arg1 ;
-(BOOL)hasPairings;
-(void)discoverAccessories;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)matchesSetupID:(id)arg1 serverIdentifier:(id)arg2 ;
-(HMFActivity *)pairingActivity;
-(void)setPairingActivity:(HMFActivity *)arg1 ;
-(unsigned long long)compatibilityFeatures;
-(unsigned long long)pendingRemovePairing;
-(void)continueAuthAfterValidation:(BOOL)arg1 ;
-(void)continuePairingUsingWAC;
-(void)tearDownSessionOnAuthCompletion;
-(void)provisionToken:(id)arg1 ;
-(BOOL)isPinging;
-(void)setHasPairings:(BOOL)arg1 ;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(unsigned long long)pairSetupType;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setCompatibilityFeatures:(unsigned long long)arg1 ;
-(void)setSupportsTimedWrite:(BOOL)arg1 ;
-(void)setPairSetupType:(unsigned long long)arg1 ;
-(void)authenticateAccessory;
-(void)notifyClients:(unsigned long long)arg1 withDictionary:(id)arg2 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(BOOL)pingSupported;
-(void)addInternalDelegate:(id)arg1 ;
-(void)setPendingRemovePairing:(unsigned long long)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(BOOL)matchesSetupID:(id)arg1 ;
-(BOOL)supportsTimedWrite;
-(NSHashTable *)internalDelegates;
-(void)removeInternalDelegate:(id)arg1 ;
-(NSHashTable *)notificationClients;
-(void)setNotificationClients:(NSHashTable *)arg1 ;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
@end
