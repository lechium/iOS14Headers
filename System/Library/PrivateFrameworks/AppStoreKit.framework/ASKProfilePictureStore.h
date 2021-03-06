/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:21 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, AAUIProfilePictureStore, NSString;

@interface ASKProfilePictureStore : NSObject {

	BOOL _hasRequestedImages;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ACAccountStore* _accountStore;
	AAUIProfilePictureStore* _profilePictureStore;
	NSString* _primaryAccountName;
	NSString* _storeAccountName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                    //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) AAUIProfilePictureStore * profilePictureStore;               //@synthesize profilePictureStore=_profilePictureStore - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountName;                                 //@synthesize primaryAccountName=_primaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * storeAccountName;                                   //@synthesize storeAccountName=_storeAccountName - In the implementation block
@property (assign) BOOL hasRequestedImages;                                               //@synthesize hasRequestedImages=_hasRequestedImages - In the implementation block
+(id)sharedStore;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_profilePictureForFamilyMember:(id)arg1 withProfilePictureStore:(id)arg2 usingMonogrammer:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)profilePictureForAccountOwnerWithoutMonogramFallbackWithPictureDiameter:(double)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)primaryAccountName;
-(void)dealloc;
-(ACAccountStore *)accountStore;
-(void)configureProfilePictureStoreAndNotifyIfNeeded;
-(NSString *)storeAccountName;
-(void)setProfilePictureStore:(AAUIProfilePictureStore *)arg1 ;
-(id)init;
-(void)setHasRequestedImages:(BOOL)arg1 ;
-(AAUIProfilePictureStore *)profilePictureStore;
-(void)setPrimaryAccountName:(NSString *)arg1 ;
-(void)profilePictureStoreDidChange:(id)arg1 ;
-(void)profilePictureWithMonogramFallbackForFamilyMembers:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRequestedImages;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)notifyIfNeeded;
-(void)_markAsHasRequestedImages;
-(void)storeAccountsDidChange:(id)arg1 ;
-(void)_updateMonogrammerWithDiameter:(double)arg1 ;
-(void)setStoreAccountName:(NSString *)arg1 ;
-(void)profilePictureWithMonogramFallbackForFamilyMember:(id)arg1 pictureDiameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)appleAccountsDidChange:(id)arg1 ;
@end

