/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class NSRecursiveLock, NSMutableSet, RadiosPreferences, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@interface IMMobileNetworkManager : NSObject <RadiosPreferencesDelegate, CoreTelephonyClientDataDelegate> {

	BOOL _registered;
	BOOL _shouldBringUpDataContext;
	BOOL _isDataPossible;
	BOOL _isDataContextActive;
	BOOL _isDataIndicatorNone;
	BOOL _isDataContextUsable;
	NSRecursiveLock* _lock;
	NSMutableSet* _cellAutoAssociationTokens;
	RadiosPreferences* _radiosPreferences;
	CTServerConnectionRef _ctServerConnection;
	void* _cellAssertion;
	CoreTelephonyClient* _coreTelephonyClient;
	CTXPCServiceSubscriptionContext* _currentDataSubscriptionContextSync;

}

@property (nonatomic,retain) RadiosPreferences * _radiosPreferences;                                              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic) void* _cellAssertion;                                                                //@synthesize cellAssertion=_cellAssertion - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                                           //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * _coreTelephonyClient;                                          //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * currentDataSubscriptionContextSync;              //@synthesize currentDataSubscriptionContextSync=_currentDataSubscriptionContextSync - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                                              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * cellularAutoAssociationTokens;                                        //@synthesize cellAutoAssociationTokens=_cellAutoAssociationTokens - In the implementation block
@property (assign,nonatomic) BOOL registered;                                                                     //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) BOOL shouldBringUpDataContext;                                                       //@synthesize shouldBringUpDataContext=_shouldBringUpDataContext - In the implementation block
@property (assign,nonatomic) BOOL isDataPossible;                                                                 //@synthesize isDataPossible=_isDataPossible - In the implementation block
@property (assign,nonatomic) BOOL isDataContextActive;                                                            //@synthesize isDataContextActive=_isDataContextActive - In the implementation block
@property (assign,nonatomic) BOOL isDataIndicatorNone;                                                            //@synthesize isDataIndicatorNone=_isDataIndicatorNone - In the implementation block
@property (assign,nonatomic) BOOL isDataContextUsable;                                                            //@synthesize isDataContextUsable=_isDataContextUsable - In the implementation block
@property (nonatomic,readonly) BOOL isAirplaneModeEnabled; 
@property (nonatomic,readonly) BOOL isWiFiEnabled; 
@property (nonatomic,readonly) BOOL isWiFiUsable; 
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot; 
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
@property (nonatomic,readonly) BOOL autoAssociateCellular; 
@property (nonatomic,readonly) BOOL disableFastDormancy; 
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) BOOL dataConnectionExists; 
@property (nonatomic,readonly) BOOL has2GDataConnection; 
@property (nonatomic,readonly) BOOL hasLTEDataConnection; 
@property (nonatomic,readonly) BOOL isDataSwitchEnabled; 
@property (nonatomic,readonly) BOOL isDataConnectionActive; 
@property (nonatomic,readonly) BOOL inValidSIMState; 
@property (nonatomic,readonly) BOOL requiresSIMInserted; 
@property (nonatomic,readonly) BOOL isSIMLocked; 
@property (nonatomic,readonly) BOOL isSIMRemoved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)airplaneModeChanged;
-(void)set_radiosPreferences:(RadiosPreferences *)arg1 ;
-(void)set_cellAssertion:(void*)arg1 ;
-(CTXPCServiceSubscriptionContext *)currentDataSubscriptionContextSync;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)showSIMUnlock;
-(void)showNetworkOptions;
-(void)setIsDataPossible:(BOOL)arg1 ;
-(void)_releaseCTServerConnection;
-(NSRecursiveLock *)lock;
-(void)setIsDataContextUsable:(BOOL)arg1 ;
-(BOOL)registered;
-(BOOL)hasLTEDataConnection;
-(void)addCellularAutoAssociationClientToken:(id)arg1 ;
-(void)_initializeDataState;
-(NSNumber *)wiFiScaledRSSI;
-(void)_makeDataConnectionAvailable:(BOOL)arg1 ;
-(RadiosPreferences *)_radiosPreferences;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)_locked_updateDataConnectionStateWithContext:(id)arg1 ;
-(void)internetDataStatus:(id)arg1 ;
-(void)dealloc;
-(id)_dataCTXPCServiceSubscriptionContext;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)willTryToSearchForWiFiNetwork;
-(void)setShouldBringUpDataContext:(BOOL)arg1 ;
-(CoreTelephonyClient *)_coreTelephonyClient;
-(BOOL)isWiFiAssociated;
-(BOOL)disableFastDormancy;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(void)_locked_updateDataStateBasedOnDataStatus:(id)arg1 ;
-(BOOL)_legacy_inValidSIMState;
-(void)_locked_recalculateDataContextUsableAndPostNotificationIfNeeded:(BOOL)arg1 ;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)requiresSIMInserted;
-(id)init;
-(NSNumber *)wiFiSignalStrength;
-(BOOL)autoAssociateWiFi;
-(BOOL)isDataSwitchEnabled;
-(void)_locked_updateDataStateBasedOnDataConnectionStatus:(id)arg1 ;
-(BOOL)isHostingWiFiHotSpot;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(BOOL)shouldBringUpDataContext;
-(BOOL)inValidSIMState;
-(BOOL)isDataPossible;
-(BOOL)dataConnectionExists;
-(void)_locked_updateDataStateWithContext:(id)arg1 ;
-(void)internetConnectionStateChanged:(id)arg1 ;
-(NSNumber *)wiFiScaledRate;
-(BOOL)isWiFiEnabled;
-(BOOL)isDataContextUsable;
-(void)setCellularAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(void)setIsDataContextActive:(BOOL)arg1 ;
-(void)_createCTServerConnection;
-(BOOL)isDataContextActive;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(id)_telephonyDataSIMStatus;
-(void*)_cellAssertion;
-(void)_adjustCellularAutoAssociation;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)setIsDataIndicatorNone:(BOOL)arg1 ;
-(void)set_coreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(BOOL)isWiFiCaptive;
-(BOOL)isDataConnectionActive;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(NSMutableSet *)cellularAutoAssociationTokens;
-(BOOL)isWiFiUsable;
-(int)_getCurrentCTDataStatus;
-(void)internetConnectionActivationError:(int)arg1 ;
-(void)_lockedAdjustCellularAutoAssociation;
-(BOOL)isDataIndicatorNone;
-(void)removeCellularAutoAssociationClientToken:(id)arg1 ;
-(BOOL)isSIMLocked;
-(BOOL)isSIMRemoved;
-(BOOL)_isDataConnectionAvailable;
-(BOOL)has2GDataConnection;
-(BOOL)autoAssociateCellular;
@end
