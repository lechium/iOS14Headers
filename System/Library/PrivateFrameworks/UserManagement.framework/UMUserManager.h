/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UMUserManagement.h>
#import <libobjc.A.dylib/UMUserSwitchManagement.h>
#import <libobjc.A.dylib/UMUserPersonaManagement.h>
#import <libobjc.A.dylib/UMUserPersonaAttributesList.h>
#import <libobjc.A.dylib/UMUserPersonaLoginSessionManagement.h>
#import <libobjc.A.dylib/UMUserSessionProvisioning.h>

@protocol UMUserListUpdateObserver, UMUserPersonaUpdateObserver;
@class UMUser, UMUserPersona, NSArray, NSString;

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning> {

	NSArray* _allUsers;
	BOOL _switchIsOccurring;
	id<UMUserListUpdateObserver> _userListUpdateObserver;
	id<UMUserPersonaUpdateObserver> _userPersonaUpdateObserver;

}

@property (assign,nonatomic,__weak) id<UMUserListUpdateObserver> userListUpdateObserver;                    //@synthesize userListUpdateObserver=_userListUpdateObserver - In the implementation block
@property (assign,nonatomic) BOOL switchIsOccurring;                                                        //@synthesize switchIsOccurring=_switchIsOccurring - In the implementation block
@property (assign,nonatomic,__weak) id<UMUserPersonaUpdateObserver> userPersonaUpdateObserver;              //@synthesize userPersonaUpdateObserver=_userPersonaUpdateObserver - In the implementation block
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,copy,readonly) UMUser * loginUser; 
@property (nonatomic,readonly) BOOL isLoginSession; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@property (nonatomic,readonly) unsigned long long userQuotaSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) UMUserPersona * currentPersona; 
+(id)sharedManager;
-(UMUser *)currentUser;
-(void)resumeSync;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)userInteractionIsEnabled;
-(BOOL)canAccessUserProperties;
-(id<UMUserPersonaUpdateObserver>)userPersonaUpdateObserver;
-(BOOL)haveValidPersonaContextForIDString:(id)arg1 ;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_allUsersDidChange;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3 ;
-(id)listAllPersonaWithAttributes;
-(void)fetchAsidMapOfAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAllPersonasForAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UMUser *)loginUser;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)switchIsOccurring;
-(void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2 ;
-(unsigned long long)maxNumberOfUsers;
-(void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isLoginSession;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)userExists:(id)arg1 ;
-(void)setUserListUpdateObserver:(id<UMUserListUpdateObserver>)arg1 ;
-(id)init;
-(id)currentUserSwitchContext;
-(void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<UMUserListUpdateObserver>)userListUpdateObserver;
-(void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(/*^block*/id)arg2 ;
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAllPersonasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 ;
-(void)resumeQuotas;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isMultiUser;
-(BOOL)haveValidPersonaContextForPersonaUniqueString:(id)arg1 ;
-(void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUserPersonaUpdateObserver:(id<UMUserPersonaUpdateObserver>)arg1 ;
-(void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userListDidUpdate;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UMUserPersona *)currentPersona;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allUsers;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1 ;
-(unsigned long long)userQuotaSize;
-(void)setSwitchIsOccurring:(BOOL)arg1 ;
-(void)registerUserListUpdateObserver:(id)arg1 ;
-(void)fetchPersonaWithType:(int)arg1 CompletionHandler:(/*^block*/id)arg2 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned)arg2 WithError:(id*)arg3 ;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned)arg2 WithError:(id*)arg3 ;
-(void)currentUserSwitchContextHasBeenUsed;
@end

