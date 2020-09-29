/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <IMAP/IMAPAccount.h>

@protocol OS_dispatch_queue;
@class MFLock, ACAccount, DeliveryAccount, NSMutableDictionary, NSString, NSObject, ACAccountStore, NSURL;

@interface CastleIMAPAccount : IMAPAccount {

	MFLock* _appleAccountLock;
	ACAccount* _appleAccount;
	DeliveryAccount* _deliveryAccount;
	unsigned _readyForPushRegistration : 1;
	NSMutableDictionary* _aliasChanges;
	NSString* _updatedDefaultEmail;
	NSObject*<OS_dispatch_queue> _aliasUpdateQueue;

}

@property (nonatomic,readonly) ACAccount * appleAccount; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,readonly) NSString * deliveryHostname; 
@property (nonatomic,readonly) unsigned deliveryPortNumber; 
@property (nonatomic,readonly) BOOL deliveryUsesSSL; 
@property (nonatomic,readonly) NSURL * aliasLookupURL; 
@property (nonatomic,retain,readonly) NSString * personID; 
@property (nonatomic,retain,readonly) NSString * authToken; 
@property (nonatomic,retain,readonly) NSString * clientInfo; 
+(void)initialize;
+(id)accountTypeString;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(BOOL)usernameIsEmailAddress;
+(id)accountTypeIdentifier;
+(id)displayedAccountTypeString;
+(BOOL)isPredefinedAccountType;
+(id)emailAddressHostPart;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2 ;
-(NSString *)authToken;
-(id)displayName;
-(id)anisetteDataWithError:(id*)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(NSString *)personID;
-(BOOL)supportsArchiving;
-(BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
-(id)emailAddressesAndAliasesList;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)fromEmailAddressesIncludingDisabled;
-(BOOL)updateEmailAliases;
-(id)firstEmailAddress;
-(BOOL)usesSSL;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(void)pushUpdateForAliasData;
-(id)fromEmailAddresses;
-(id)displayUsername;
-(ACAccountStore *)accountStore;
-(id)username;
-(void)setHostname:(id)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(id)hostname;
-(NSString *)clientInfo;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)preferredAuthScheme;
-(unsigned)portNumber;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(BOOL)allowsTrustPrompt;
-(unsigned long long)credentialAccessibility;
-(id)emailAddressStrings;
-(id)statisticsKind;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(ACAccount *)appleAccount;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(void)startListeningForNotifications;
-(void)_accountsChanged:(id)arg1 ;
-(BOOL)canReceiveNewMailNotifications;
-(void)setDefaultEmailAddress:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)uniqueIdForPersistentConnection;
-(id)iconString;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(void)_resetAppleAccount;
-(BOOL)shouldRegisterForPush;
-(BOOL)canAttemptPushRegistration;
-(id)_mailPropertyFromAppleAccountForKey:(id)arg1 ;
-(id)authTokenWithError:(id*)arg1 ;
-(id)_fromEmailAddressesIncludingDisabled:(BOOL)arg1 ;
-(void)handleOverQuotaResponse:(id)arg1 ;
-(void)handleAlertResponse:(id)arg1 ;
-(NSString *)deliveryHostname;
-(unsigned)deliveryPortNumber;
-(BOOL)deliveryUsesSSL;
-(void)setLocalDefaultEmailAddress:(id)arg1 ;
-(void)setLocallyEnabled:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(BOOL)_updateEmailAddressAndAliases;
-(NSURL *)aliasLookupURL;
-(id)_aliasAuthorizationHeader;
-(id)_aliasUserAgent;
-(id)_headerStringFromDate:(id)arg1 ;
-(id)_aliasesFromData:(id)arg1 ;
-(id)_emailsFromData:(id)arg1 ;
-(id)_defaultEmailAddressFromData:(id)arg1 ;
-(id)_prepareAliasData;
-(void)setPasswordInKeychain:(id)arg1 ;
-(void)_removePasswordInKeychain;
-(id)passwordFromKeychain;
-(id)_aliasesFromOldData:(id)arg1 ;
@end
