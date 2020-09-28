/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMConnectionMonitorDelegate.h>
#import <IMDaemonCore/IMServiceSessionProtocol.h>

@protocol IMDAutoReplying;
@class NSRecursiveLock, IMDAccount, NSMutableArray, NSMutableDictionary, NSMutableSet, IMTimer, IMConnectionMonitor, NSTimer, NSString, IMSystemProxySettingsFetcher, IMOneTimeCodeUtilities, IMDService, NSArray, NSDictionary;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {

	NSRecursiveLock* _lock;
	IMDAccount* _account;
	NSMutableArray* _accounts;
	NSMutableDictionary* _localProperties;
	NSMutableSet* _changedBuddies;
	NSMutableSet* _registeredChats;
	NSMutableDictionary* _groupChatIdentifierToChatRoomMap;
	NSMutableDictionary* _chatRoomToGroupChatIdentifierMap;
	IMTimer* _messageRoutingTimer;
	IMTimer* _messageExpireStateTimer;
	IMTimer* _messageWatchdogTimer;
	id<IMDAutoReplying> _messageAutoReplier;
	IMConnectionMonitor* _connectionMonitor;
	NSTimer* _reconnectTimer;
	NSString* _loginID;
	NSString* _pwRequestID;
	IMSystemProxySettingsFetcher* _systemProxySettingsFetcher;
	int _buddyChangeLevel;
	BOOL _activated;
	BOOL _saveKeychainPassword;
	IMOneTimeCodeUtilities* _otcUtilities;
	BOOL _awaitingDataContext;
	BOOL _shouldReconnect;
	BOOL _badPass;
	IMDService* _service;
	NSMutableDictionary* _buddies;
	NSString* _proxyHost;
	NSString* _proxyAccount;
	NSString* _proxyPassword;
	NSString* _password;
	NSString* _serverHost;
	long long _proxyType;
	unsigned short _proxyPort;
	BOOL _useSSL;
	unsigned short _serverPort;

}

@property (nonatomic,retain,readonly) NSArray * allBuddies; 
@property (retain,readonly) NSDictionary * buddyProperties; 
@property (nonatomic,retain,readonly) NSDictionary * buddyPictures; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,retain,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,retain,readonly) IMDAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * accounts;                                //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountID; 
@property (nonatomic,retain,readonly) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * accountDefaults; 
@property (nonatomic,retain,readonly) NSString * serverHost;                             //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,readonly) unsigned short serverPort;                                //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,readonly) long long proxyType;                                      //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyHost;                              //@synthesize proxyHost=_proxyHost - In the implementation block
@property (nonatomic,readonly) unsigned short proxyPort;                                 //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyAccount;                           //@synthesize proxyAccount=_proxyAccount - In the implementation block
@property (nonatomic,retain,readonly) NSString * proxyPassword;                          //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL accountNeedsLogin; 
@property (nonatomic,readonly) BOOL accountNeedsPassword; 
@property (nonatomic,readonly) BOOL accountShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) BOOL allowedAsChild; 
@property (nonatomic,readonly) BOOL networkConditionsAllowLogin; 
@property (nonatomic,readonly) BOOL overrideNetworkAvailability; 
+(void)initialize;
+(id)existingServiceSessionForService:(id)arg1 ;
+(id)__allServiceSessionsWeakReferenceArray;
+(id)allServiceSessions;
+(void)__registerNewServiceSession:(id)arg1 ;
+(id)_firewallUserNotificationForService:(id)arg1 ;
-(void)autoLogin;
-(id)allowList;
-(void)setBlockList:(id)arg1 ;
-(void)requestGroups;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(BOOL)useSSL;
-(void)addAccount:(id)arg1 ;
-(id)canonicalFormOfID:(id)arg1 ;
-(unsigned short)serverPort;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)endMessageSuppression;
-(id)loginID;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(void)_watchdogTimerFired;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(id)defaultChatSuffix;
-(id)otcUtilities;
-(NSString *)displayName;
-(unsigned long long)capabilities;
-(id)_IDSService;
-(id)broadcaster;
-(void)refreshServiceCapabilities;
-(int)registrationStatus;
-(void)setIdleTime:(unsigned)arg1 ;
-(unsigned short)proxyPort;
-(NSDictionary *)registrationAlertInfo;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sendDeliveryReceiptForMessageID:(id)arg1 toID:(id)arg2 deliveryContext:(id)arg3 needsDeliveryReceipt:(id)arg4 callerID:(id)arg5 account:(id)arg6 ;
-(void)holdBuddyUpdates;
-(void)logoutServiceSessionWithAccount:(id)arg1 ;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(NSDictionary *)accountDefaults;
-(void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1 ;
-(NSString *)proxyPassword;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1 ;
-(void)login;
-(void)dealloc;
-(IMDAccount *)account;
-(id)storageController;
-(int)registrationError;
-(BOOL)isActive;
-(void)eagerUploadCancel:(id)arg1 ;
-(void)logout;
-(void)eagerUploadTransfer:(id)arg1 recipients:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2 ;
-(void)resumeBuddyUpdates;
-(void)replayMessage:(id)arg1 ;
-(NSString *)serverHost;
-(void)loginServiceSessionWithAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)_managedPrefsNotification:(id)arg1 ;
-(BOOL)isAwaitingStorageTimer;
-(NSArray *)accounts;
-(void)systemDidUnlock;
-(unsigned)blockingMode;
-(id)blockList;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3 ;
-(void)decrementPendingReadReceiptFromStorageCount;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(void)setAllowList:(id)arg1 ;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(BOOL)_isActivated;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(id)groups;
-(IMDService *)service;
-(void)userNotificationDidFinish:(id)arg1 ;
-(void)incrementPendingReadReceiptFromStorageCount;
-(void)authenticateAccount:(id)arg1 ;
-(id)_sharedMessageStore;
-(void)registerAccount:(id)arg1 ;
-(void)unregisterAccount:(id)arg1 ;
-(unsigned long long)pendingReadReceiptFromStorageCount;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(NSString *)accountID;
-(id)server;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 joinProperties:(id)arg7 ;
-(NSString *)password;
-(void)renameGroup:(id)arg1 to:(id)arg2 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)noteLastItemProcessed;
-(FZChatRoomValidity)validityOfChatRoomName:(id)arg1 ;
-(void)setBlockingMode:(unsigned)arg1 ;
-(void)_blastDoorProcessingWithIMMessageItem:(id)arg1 chat:(id)arg2 account:(id)arg3 fromToken:(id)arg4 fromIDSID:(id)arg5 fromIdentifier:(id)arg6 toIdentifier:(id)arg7 participants:(id)arg8 groupName:(id)arg9 groupID:(id)arg10 isEncrypted:(BOOL)arg11 isFromMe:(BOOL)arg12 isLastFromStorage:(BOOL)arg13 isFromStorage:(BOOL)arg14 hideLockScreenNotification:(BOOL)arg15 wantsCheckpointing:(BOOL)arg16 needsDeliveryReceipt:(id)arg17 messageBalloonPayloadAttachmentDictionary:(id)arg18 inlineAttachments:(id)arg19 attributionInfoArray:(id)arg20 nicknameDictionary:(id)arg21 messageContext:(id)arg22 completionBlock:(/*^block*/id)arg23 ;
-(long long)proxyType;
-(BOOL)blockIdleStatus;
-(void)noteItemFromStorage:(id)arg1 ;
-(void)setBlockIdleStatus:(BOOL)arg1 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5 ;
-(void)enqueReplayMessageCallback:(/*^block*/id)arg1 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3 ;
-(void)addAliases:(id)arg1 account:(id)arg2 ;
-(void)removeAliases:(id)arg1 account:(id)arg2 ;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2 ;
-(void)validateAliases:(id)arg1 account:(id)arg2 ;
-(void)sendGroupPhotoUpdate:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 ;
-(void)retryGroupPhotoUpload:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 ;
-(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 ;
-(id)broadcasterForACConferenceListeners;
-(id)broadcasterForVCConferenceListeners;
-(BOOL)allowedAsChild;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 ;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 ;
-(void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 forceDate:(id)arg4 ;
-(void)notifyDidSendMessageID:(id)arg1 shouldNotify:(BOOL)arg2 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8 destinationCallerID:(id)arg9 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 handleInfo:(id)arg7 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 ;
-(void)didSendMessagePlayedReceiptForMessageID:(id)arg1 ;
-(void)didSendMessageSavedReceiptForMessageID:(id)arg1 ;
-(id)broadcasterForChatListeners;
-(void)serviceSessionDidLoginWithAccount:(id)arg1 ;
-(void)serviceSessionDidLogoutWithAccount:(id)arg1 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 category:(long long)arg6 spamExtensionName:(id)arg7 ;
-(void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)_updateRoutingTimerWithInterval:(double)arg1 ;
-(void)_updateExpireStateTimerWithInterval:(double)arg1 ;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 account:(id)arg4 ;
-(BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 account:(id)arg3 ;
-(void)_clearDowngradeMarkersForChat:(id)arg1 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 useMessageSuppression:(BOOL)arg7 account:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 toIdentifier:(id)arg3 forChat:(id)arg4 style:(unsigned char)arg5 account:(id)arg6 sender:(id)arg7 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6 isBlackholed:(BOOL)arg7 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5 itemIsComingFromStorage:(BOOL)arg6 ;
-(BOOL)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 toIdentifier:(id)arg3 forChat:(id)arg4 style:(unsigned char)arg5 account:(id)arg6 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 isBlackholed:(BOOL)arg8 ;
-(id)broadcasterForBlackholeStatus:(BOOL)arg1 ;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 ;
-(void)didReceiveBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didSendMessagePlayedReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didSendMessageSavedReceiptForMessageID:(id)arg1 account:(id)arg2 ;
-(void)didSendBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(BOOL)networkConditionsAllowLogin;
-(void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)leaveiMessageChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)sendNicknameInfoToChatID:(id)arg1 ;
-(BOOL)sendNicknameUpdatesToPeerDevices:(id)arg1 toDestinations:(id)arg2 ;
-(void)requestGroupPhotoIfNecessary:(id)arg1 incomingGroupPhotoCreationTime:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 messageIsFromStorage:(BOOL)arg5 ;
-(void)closeSessionChat:(id)arg1 style:(unsigned char)arg2 ;
-(BOOL)overrideNetworkAvailability;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(BOOL)canMakeExpireStateChecks;
-(void)sendLogDumpMessageAtFilePath:(id)arg1 toRecipient:(id)arg2 shouldDeleteFile:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)processNetworkDataAvailabilityChange:(BOOL)arg1 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)_IMDStoreMessage:(id)arg1 inMessage:(id)arg2 forceReplace:(BOOL)arg3 modifyError:(BOOL)arg4 modifyFlags:(BOOL)arg5 calculateUnreadCount:(BOOL)arg6 flagMask:(unsigned long long)arg7 shouldStoreBlock:(/*^block*/id)arg8 didStoreBlock:(/*^block*/id)arg9 block:(/*^block*/id)arg10 ;
-(BOOL)_shouldBlackholeGroupChatWithParticipants:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 account:(id)arg4 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 account:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)notifyDidSendMessageID:(id)arg1 account:(id)arg2 shouldNotify:(BOOL)arg3 ;
-(void)accountDefaultsChanged:(id)arg1 ;
-(NSDictionary *)buddyProperties;
-(void)changeMyStatus:(id)arg1 changedKeys:(id)arg2 ;
-(void)__forceSetLoginStatus:(unsigned)arg1 oldStatus:(unsigned)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5 account:(id)arg6 ;
-(void)loginWithAccount:(id)arg1 ;
-(void)_setAutoReconnectTimer;
-(id)_newHashForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_networkChanged:(id)arg1 ;
-(void)_callMonitorStateChanged:(id)arg1 ;
-(void)_processConnectionMonitorUpdate;
-(void)_abandonSystemProxySettingsFetcher;
-(void)_abandonPWFetcher;
-(void)_clearAutoReconnectTimer;
-(void)_clearConnectionMonitor;
-(void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1 ;
-(void)_updateWatchdogTimerWithInterval:(double)arg1 ;
-(void)leaveAllChats;
-(void)_updateConnectionMonitorWithRemoteHost:(id)arg1 ;
-(void)_reconnectIfNecessaryWithAccount:(id)arg1 ;
-(BOOL)accountShouldBeAlwaysLoggedIn;
-(void)_doLoginIgnoringProxy:(BOOL)arg1 withAccount:(id)arg2 ;
-(void)_setPendingConnectionMonitorUpdate;
-(void)_processPotentialNetworkChange;
-(void)autoReconnectWithAccount:(id)arg1 ;
-(void)autoReconnect;
-(void)logoutWithAccount:(id)arg1 ;
-(void)changeGroups:(id)arg1 ;
-(void)changeGroup:(id)arg1 changes:(id)arg2 ;
-(void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2 ;
-(void)requestSubscriptionTo:(id)arg1 ;
-(void)startWatchingBuddy:(id)arg1 ;
-(void)stopWatchingBuddy:(id)arg1 ;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3 ;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8 ;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)leaveiMessageChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)passwordUpdatedWithAccount:(id)arg1 ;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2 ;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3 ;
-(void)validateProfileWithAccount:(id)arg1 ;
-(void)closeSessionChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(BOOL)accountNeedsLogin;
-(BOOL)accountNeedsPassword;
-(void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)_reconnectIfNecessary;
-(id)canonicalFormOfChatRoom:(id)arg1 ;
-(id)broadcasterForChatObserverListeners;
-(id)broadcasterForAVConferenceListeners;
-(NSString *)proxyHost;
-(NSString *)proxyAccount;
-(void)autoReplier:(id)arg1 generatedAutoReplyText:(id)arg2 forChat:(id)arg3 ;
-(void)autoReplier:(id)arg1 receivedUrgentRequestForMessages:(id)arg2 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 isBlackholed:(BOOL)arg8 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 handleInfo:(id)arg7 account:(id)arg8 isBlackholed:(BOOL)arg9 ;
-(BOOL)shouldImitateGroupChatUsingChatRooms;
-(id)chatRoomForGroupChatIdentifier:(id)arg1 ;
-(id)groupChatIdentifierForChatRoom:(id)arg1 ;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)_updateWatchdogForMessageGUID:(id)arg1 ;
-(void)_configureSessionInformationOnItem:(id)arg1 toChat:(id)arg2 withStyle:(unsigned char)arg3 forAccount:(id)arg4 ;
-(void)_setOutgoingFlagsOnMessage:(id)arg1 ;
-(void)_messageStoreCompletion:(BOOL)arg1 inputMessage:(id)arg2 outputMessage:(id)arg3 originalMessage:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_configureTimeOnOutgoingItem:(id)arg1 ;
-(void)_configureAccountInformationOnItem:(id)arg1 withAccount:(id)arg2 ;
-(void)_configureIdentifierForOutgoingItem:(id)arg1 withIdentifier:(id)arg2 withStyle:(unsigned char)arg3 ;
-(id)_determineResultMessageForInput:(id)arg1 output:(id)arg2 original:(id)arg3 ;
-(BOOL)_shouldDropSendingMessage;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 category:(long long)arg8 spamExtensionName:(id)arg9 ;
-(void)_updateExpireStateForMessageGUID:(id)arg1 ;
-(BOOL)_didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 attempts:(long long)arg2 date:(id)arg3 account:(id)arg4 ;
-(BOOL)_hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2 ;
-(void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 attempts:(long long)arg7 useMessageSuppression:(BOOL)arg8 account:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5 ;
-(void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 account:(id)arg4 ;
-(void)_setReplyGUIDOnMessage:(id)arg1 forChat:(id)arg2 ;
-(void)_setSortIDForMessage:(id)arg1 forChat:(id)arg2 ;
-(BOOL)_storeMessage:(id)arg1 chatIdentifier:(id)arg2 localChat:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messagesToPostArray:(id)arg6 ;
-(id)_transcodeController;
-(BOOL)testOverrideTextValidationDidFail;
-(id)_autoReplier;
-(void)_updateInputMessage:(id)arg1 forExistingMessage:(id)arg2 ;
-(void)_checkMessageForOneTimeCodes:(id)arg1 ;
-(void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 handleInfo:(id)arg7 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 account:(id)arg9 isBlackholed:(BOOL)arg10 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 handleInfo:(id)arg8 account:(id)arg9 category:(long long)arg10 spamExtensionName:(id)arg11 isBlackholed:(BOOL)arg12 ;
-(void)unregisterChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_removeChatGuidFromCoreDuet:(id)arg1 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8 ;
-(Class)spotlightItemRecorderClass;
-(id)_sharedAccountController;
-(void)_markChatAsDowngraded:(id)arg1 ;
-(void)_handleRoutingWithDictionary:(id)arg1 ;
-(void)_routingTimerFired;
-(void)_handleExpireStateDictionary:(id)arg1 ;
-(void)_expireStateTimerFired;
-(void)_handleWatchdogWithDictionary:(id)arg1 ;
-(void)registerChat:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 account:(id)arg4 ;
-(void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 ;
-(void)updateChatGUID:(id)arg1 withLastReadTimeStamp:(long long)arg2 withLastSeenMessageGUID:(id)arg3 fromMe:(BOOL)arg4 ;
-(void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)notifyDidSendMessageID:(id)arg1 ;
-(void)_endMessageSuppressionForChatGUID:(id)arg1 ;
-(void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)beginBuddyChanges;
-(void)endBuddyChanges;
-(id)localPropertiesOfBuddy:(id)arg1 ;
-(NSDictionary *)buddyPictures;
-(id)pictureOfBuddy:(id)arg1 ;
-(id)pictureKeyForBuddy:(id)arg1 ;
-(NSArray *)allBuddies;
-(void)markBuddiesAsChanged:(id)arg1 ;
-(void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)clearPropertiesOfBuddy:(id)arg1 ;
-(id)property:(id)arg1 ofBuddy:(id)arg2 ;
-(id)localProperty:(id)arg1 ofBuddy:(id)arg2 ;
-(void)clearLocalProperties;
-(void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(id)loginIDForAccount:(id)arg1 ;
-(void)disallowReconnection;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 joinProperties:(id)arg4 ;
-(void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)removeChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteBadPassword;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)_handleFirewallUserNotificationDidFinish:(id)arg1 ;
-(BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2 ;
-(void)_login_serverSettingsReadyWithAccount:(id)arg1 ;
-(void)_data_connection_readyWithAccount:(id)arg1 ;
-(void)_login_usernameAndPasswordReadyWithAccount:(id)arg1 ;
-(void)_login_checkUsernameAndPasswordWithAccount:(id)arg1 ;
-(void)_doLoginIgnoringProxy:(BOOL)arg1 ;
-(void)_wentOfflineWithAccount:(id)arg1 ;
-(void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 account:(id)arg4 ;
-(void)_autoReconnectTimer:(id)arg1 ;
@end
