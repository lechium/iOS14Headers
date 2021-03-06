/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary, NSDate, NSUUID, UAUserActivity, NSURL;

@interface NSUserActivity : NSObject {

	id _internal;
	id _delegate;
	id _frameworkDelegate;

}

@property (setter=_setSubtitle:,copy) NSString * _subtitle; 
@property (setter=_setMinimalRequiredUserInfoKeys:,copy) NSSet * _minimalRequiredUserInfoKeys; 
@property (setter=_setContentType:,copy) NSString * _contentType; 
@property (setter=_setContentUserAction:,copy) NSString * _contentUserAction; 
@property (setter=_setContentAttributes:,copy) NSDictionary * _contentAttributes; 
@property (setter=_setKeywords:,copy) NSSet * _keywords; 
@property (setter=_setContentIdentifier:,copy) NSString * _contentIdentifier; 
@property (setter=_setExpirationDate:,copy) NSDate * _expirationDate; 
@property (setter=_setEligibleForUserActivityHandoff:,getter=_isEligibleForUserActivityHandoff) BOOL _eligibleForUserActivityHandoff; 
@property (setter=_setEligibleForUserActivityIndexing:,getter=_isEligibleForUserActivityIndexing) BOOL _eligibleForUserActivityIndexing; 
@property (setter=_setEligibleForUserActivityReminders:,getter=_isEligibleForUserActivityReminders) BOOL _eligibleForUserActivityReminders; 
@property (setter=_setEligibleForUserActivityPublicIndexing:,getter=_isEligibleForUserActivityPublicIndexing) BOOL _eligibleForUserActivityPublicIndexing; 
@property (copy,readonly) NSString * _teamIdentifier; 
@property (retain,readonly) NSUUID * _uniqueIdentifier; 
@property (readonly) long long _suggestedActionType; 
@property (copy,readonly) NSDate * _lastActivityDate; 
@property (setter=_setOptions:,copy) NSDictionary * _options; 
@property (setter=_setFrameworkPayload:,copy) NSDictionary * _frameworkPayload; 
@property (setter=_setFrameworkDelegate:,__weak) id<NSUserActivityDelegate> _frameworkDelegate; 
@property (retain,readonly) UAUserActivity * _internalUserActivity;                                                                                                     //@synthesize internal=_internal - In the implementation block
@property (copy,readonly) NSString * activityType; 
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSSet * requiredUserInfoKeys; 
@property (assign) BOOL needsSave; 
@property (copy) NSURL * webpageURL; 
@property (copy) NSURL * referrerURL; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSSet * keywords; 
@property (assign) BOOL supportsContinuationStreams; 
@property (__weak) id<NSUserActivityDelegate> delegate; 
@property (copy) NSString * targetContentIdentifier; 
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff; 
@property (getter=isEligibleForSearch) BOOL eligibleForSearch; 
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; 
@property (getter=isEligibleForPrediction) BOOL eligibleForPrediction; 
@property (copy) NSString * persistentIdentifier; 
+(id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2 ;
+(void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(void)deleteAllSavedUserActivitiesWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)_supportsUserActivityAppLinks;
+(id)_currentUserActivityUUID;
+(void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)activityType;
-(void)setContentUserAction:(id)arg1 ;
-(void)resignCurrent;
-(void)setKeywords:(NSSet *)arg1 ;
-(id)contentAttributeSet;
-(NSString *)_teamIdentifier;
-(NSString *)_contentType;
-(NSSet *)keywords;
-(id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1 ;
-(BOOL)needsSave;
-(BOOL)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)contentType;
-(id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3 ;
-(id)initWithActivityType:(id)arg1 ;
-(NSURL *)referrerURL;
-(void)invalidate;
-(BOOL)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3 ;
-(NSDate *)_expirationDate;
-(NSDictionary *)_options;
-(NSSet *)_keywords;
-(BOOL)_isEligibleForUserActivityPublicIndexing;
-(void)_setEligibleForUserActivityPublicIndexing:(BOOL)arg1 ;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(void)_setEligibleForUserActivityIndexing:(BOOL)arg1 ;
-(void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)webpageURL;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setOptions:(id)arg1 ;
-(void)_setMinimalRequiredUserInfoKeys:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)_isEligibleForUserActivityIndexing;
-(id)webPageURL;
-(void)dealloc;
-(NSString *)title;
-(void)_setEligibleForUserActivityReminders:(BOOL)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)_setEligibleForUserActivityHandoff:(BOOL)arg1 ;
-(BOOL)_isEligibleForUserActivityReminders;
-(void)_removeFrameworkPayloadValueForKey:(id)arg1 ;
-(NSUUID *)_uniqueIdentifier;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(BOOL)_isEligibleForUserActivityHandoff;
-(void)_setSubtitle:(id)arg1 ;
-(void)_setKeywords:(id)arg1 ;
-(void)setContentAttributes:(id)arg1 ;
-(id)_initWithUserActivityData:(id)arg1 ;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(BOOL)isEligibleForPublicIndexing;
-(id)init;
-(void)_removeUserInfoValueForKey:(id)arg1 ;
-(id)initWithInternalUserActivity:(id)arg1 ;
-(long long)_suggestedActionType;
-(NSSet *)_minimalRequiredUserInfoKeys;
-(void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<NSUserActivityDelegate>)arg1 ;
-(void)setWebPageURL:(id)arg1 ;
-(void)_resignCurrent;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(NSString *)_subtitle;
-(NSDictionary *)userInfo;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setEligibleForPrediction:(BOOL)arg1 ;
-(void)didSynchronizeActivity;
-(void)_setContentUserAction:(id)arg1 ;
-(NSDictionary *)_frameworkPayload;
-(NSDate *)_lastActivityDate;
-(void)_setContentIdentifier:(id)arg1 ;
-(void)_setExpirationDate:(id)arg1 ;
-(void)_setContentAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_addKeywordsFromArray:(id)arg1 ;
-(void)_setContentType:(id)arg1 ;
-(void)_setFrameworkDelegate:(id)arg1 ;
-(id)contentAttributes;
-(id)contentUserAction;
-(void)setContentType:(id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(UAUserActivity *)_internalUserActivity;
-(void)_setFrameworkPayload:(id)arg1 ;
-(id<NSUserActivityDelegate>)_frameworkDelegate;
-(void)_setLastActivityDate:(id)arg1 ;
-(NSString *)_contentUserAction;
-(NSString *)_contentIdentifier;
-(NSDictionary *)_contentAttributes;
-(id)typeIdentifier;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(id)_parentUserActivity;
-(id<NSUserActivityDelegate>)delegate;
-(BOOL)supportsContinuationStreams;
-(BOOL)isEligibleForHandoff;
-(NSString *)targetContentIdentifier;
-(void)becomeCurrent;
-(void)willSynchronizeActivity;
-(void)_setParentUserActivity:(id)arg1 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEligibleForSearch;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEligibleForPrediction;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setContentAttributeSet:(id)arg1 ;
@end

