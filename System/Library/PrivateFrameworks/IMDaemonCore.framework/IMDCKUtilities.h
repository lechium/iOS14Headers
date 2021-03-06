/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKSyncStateDelegate.h>

@class IMDCKSyncState, IMLockdownManager, IDSServerBag, FTDeviceSupport, IMDefaults, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {

	BOOL _didKeyRollPendingCheck;
	BOOL _useDeprecatedApi;
	IMDCKSyncState* _syncState;
	IMLockdownManager* _lockdownManager;
	IDSServerBag* _serverBag;
	FTDeviceSupport* _deviceSupport;
	IMDefaults* _imDefaults;

}

@property (assign,nonatomic) BOOL didKeyRollPendingCheck;                                //@synthesize didKeyRollPendingCheck=_didKeyRollPendingCheck - In the implementation block
@property (nonatomic,retain) IMLockdownManager * lockdownManager;                        //@synthesize lockdownManager=_lockdownManager - In the implementation block
@property (nonatomic,retain) IDSServerBag * serverBag;                                   //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,retain) FTDeviceSupport * deviceSupport;                            //@synthesize deviceSupport=_deviceSupport - In the implementation block
@property (nonatomic,retain) IMDefaults * imDefaults;                                    //@synthesize imDefaults=_imDefaults - In the implementation block
@property (nonatomic,readonly) BOOL isInCloudKitDemoMode; 
@property (assign,nonatomic) BOOL useDeprecatedApi;                                      //@synthesize useDeprecatedApi=_useDeprecatedApi - In the implementation block
@property (nonatomic,readonly) IMDCKSyncState * syncState;                               //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (getter=isKeyRollPending,nonatomic,readonly) BOOL keyRollPending; 
@property (getter=isDeviceCharging,nonatomic,readonly) BOOL deviceCharging; 
@property (getter=isDeviceOnWifi,nonatomic,readonly) BOOL deviceOnWifi; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)restoreFailuresDirectory;
+(id)_idsAccountController;
+(id)im_AKSecurityLevelKey;
+(id)readAliasesFromDefaults;
+(id)logHandle;
+(void)calculateAndSaveAliasesToDefaults;
+(id)calculateAliasesForDefaults;
-(id)dsid;
-(IMDCKSyncState *)syncState;
-(id)_accountStore;
-(void)postSyncStateToCloudKit:(id)arg1 ;
-(id)internalQueue;
-(BOOL)_serverAllowsCacheDelete;
-(id)_authenticationController;
-(void)_setEligibleToToggleMiCSwitch:(BOOL)arg1 ;
-(BOOL)shouldCollectDailyLogDump;
-(BOOL)shouldUseDevNickNameContainer;
-(BOOL)shouldCollectDailyLogDumpForRestoreFailures;
-(BOOL)isCKPartialError:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 ;
-(void)resetLastSyncDate;
-(BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2 ;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(BOOL)arg4 requirePreviousPrompt:(BOOL)arg5 willSendBlock:(/*^block*/id)arg6 ;
-(BOOL)shouldLogDumpOnCloudKitError;
-(id)deviceActiveString;
-(BOOL)isDeviceCharging;
-(BOOL)_isRunningInAutomation;
-(BOOL)shouldRepairAccountWithAccountStatus:(long long)arg1 securityLevel:(unsigned long long)arg2 ;
-(id)_errorsFromPartialError:(id)arg1 ;
-(BOOL)errorIndicatesChatZoneCreationFailed:(id)arg1 ;
-(BOOL)shouldForceArchivedMessagesSync;
-(BOOL)shouldUseDevContainer;
-(BOOL)isDeviceOnWifi;
-(BOOL)useDeprecatedApi;
-(BOOL)isSyncingPaused;
-(void)downgradingFromHSA2AndDisablingMOC;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didStartSync:(BOOL)arg3 didFinishSync:(BOOL)arg4 didSucceedSyncing:(BOOL)arg5 ;
-(BOOL)_mocFeatureEnabled;
-(void)syncStateWillUpdate:(id)arg1 ;
-(void)setLockdownManager:(IMLockdownManager *)arg1 ;
-(void)logToPowerLogForLogDumpGUID:(id)arg1 logDumpCompleted:(BOOL)arg2 logDumpSucceeded:(BOOL)arg3 logDumpSendingCompleted:(BOOL)arg4 logDumpSendingSucceeded:(BOOL)arg5 reason:(id)arg6 ;
-(long long)overrideNumberOfChatsToFetch;
-(void)disableAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isLogDumpAllowed;
-(void)setUseDeprecatedApi:(BOOL)arg1 ;
-(void)setCloudKitSyncingEnabled:(BOOL)arg1 ;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg1 ;
-(id)findRootCause:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5 ;
-(void)_metricForPCSReportManateeStatusWithReason:(id)arg1 linkedFunction:(/*function pointer*/void*)arg2 timeoutInSec:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)didKeyRollPendingCheck;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(void)reportZoneCreation:(id)arg1 ;
-(long long)_mininimumServerBagClientValue;
-(BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2 ;
-(unsigned long long)_primaryiCloudAccountSecurityLevel;
-(void)fetchCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)_primaryiCloudAccount;
-(void)keyRollPendingStateDidChange;
-(void)reportCompletionForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 onAttempt:(unsigned long long)arg3 wasSuccessful:(BOOL)arg4 ;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(BOOL)logDumpIsNecessaryAfterSync;
-(id)exitManager;
-(BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2 ;
-(BOOL)shouldKickOffWriteForSyncType:(long long)arg1 ;
-(BOOL)_shouldDisplayPopUpForResettingKeepMessages;
-(id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4 ;
-(BOOL)enableAttachmentMetricCollection;
-(void)fetchiCloudAccountPersonID:(/*^block*/id)arg1 ;
-(id)ckStatisticCalculations;
-(IDSServerBag *)serverBag;
-(IMLockdownManager *)lockdownManager;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg1 ;
-(id)init;
-(BOOL)_isSyncingPausedOverride;
-(IMDefaults *)imDefaults;
-(void)logCloudKitSyncToPowerLogForSyncType:(long long)arg1 isCoreDuetSync:(BOOL)arg2 didCompleteChatSync:(BOOL)arg3 didSucceedSyncingChats:(BOOL)arg4 didCompleteMessageSync:(BOOL)arg5 didSucceedSyncingMessages:(BOOL)arg6 didCompleteAttachmentSync:(BOOL)arg7 didSucceedSyncingAttachments:(BOOL)arg8 syncAttemptCount:(unsigned long long)arg9 ;
-(BOOL)serverAllowsMetricSubmission;
-(void)setServerBag:(IDSServerBag *)arg1 ;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(long long)overrideNumberOfChatsToWrite;
-(BOOL)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;
-(BOOL)errorIndicatesQuotaExceeded:(id)arg1 ;
-(BOOL)iCloudAccountMatchesiMessageAccount;
-(BOOL)_isCKErrorPartialFailure:(id)arg1 ;
-(void)postSyncStateToCloudKit:(id)arg1 legacyOnly:(BOOL)arg2 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg1 ;
-(void)broadcastCloudKitState;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg1 ;
-(void)reportErrorForSyncType:(long long)arg1 syncStep:(id)arg2 isRecoverable:(BOOL)arg3 error:(id)arg4 ;
-(id)_primaryiCloudAccountAltDSID;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 legacyOnly:(BOOL)arg3 ;
-(void)eligibleForTruthZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(BOOL)cloudKitSyncingEnabled;
-(void)isFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)evalToggleiCloudSettingsSwitch;
-(BOOL)removeFromBackUpAllowed;
-(id)deviceConditions;
-(void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(unsigned long long)messageDatabaseSize;
-(id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1 ;
-(BOOL)shouldSyncToSRContainer;
-(id)lastDeviceBackUpDate;
-(BOOL)_accountNeedsRepairOverride;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg1 ;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1 ;
-(BOOL)isLocalCachedSaltPresent;
-(BOOL)_deviceActive;
-(void)metricForPCSReportManateeStatusWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)serverAllowsAnalyticDetailsSubmission;
-(BOOL)isKeyRollPending;
-(id)syncFailureMetricString:(id)arg1 isRecoverable:(BOOL)arg2 error:(id)arg3 ;
-(void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2 ;
-(BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1 ;
-(BOOL)isInCloudKitDemoMode;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(id)_truthDatabase;
-(id)_personIdFromAccount:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(void)setDeviceSupport:(FTDeviceSupport *)arg1 ;
-(void)postSyncStateToCloudKit:(id)arg1 useManatee:(BOOL)arg2 ;
-(id)logHandle;
-(void)_fetchPrimaryAccountWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg1 ;
-(BOOL)_isInExitState;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(/*^block*/id)arg5 ;
-(void)_showCKLogNotificationWithCompletion:(/*^block*/id)arg1 ;
-(id)logCollectorAddress;
-(id)_accountManager;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 ;
-(id)_createAccountError:(id)arg1 ;
-(BOOL)shouldPresentTTROnCloudKitError;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(FTDeviceSupport *)deviceSupport;
-(void)enableMOCIfNeeded;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1 ;
-(BOOL)logDumpIsExpected;
-(id)backupController;
-(BOOL)serverAllowsAnalyticSubmission;
-(void)checkiCloudQuota:(/*^block*/id)arg1 ;
-(BOOL)cacheDeleteEnabled;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg1 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1 ;
-(BOOL)_serverAllowsSync;
-(id)_truthContainer;
-(void)setImDefaults:(IMDefaults *)arg1 ;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1 ;
-(void)setDidKeyRollPendingCheck:(BOOL)arg1 ;
-(id)_getKeepMessagesValue;
@end

