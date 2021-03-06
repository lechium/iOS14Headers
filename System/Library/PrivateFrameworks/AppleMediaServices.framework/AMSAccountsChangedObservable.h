/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACAccount, NSString, AMSObservable, NSObject;

@interface AMSAccountsChangedObservable : NSObject {

	ACAccount* _account;
	NSString* _accountTypeIdentifier;
	AMSObservable* _observable;
	NSObject*<OS_dispatch_queue> _notificationsQueue;

}

@property (nonatomic,retain) AMSObservable * observable;                                   //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationsQueue;              //@synthesize notificationsQueue=_notificationsQueue - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeIdentifier;                           //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
+(id)sharedInstance;
+(id)createdObservables;
+(id)createdObservablesAccessQueue;
+(void)_processChangedAccount:(id)arg1 ;
+(id)sharedLocalAccountInstance;
-(void)subscribe:(id)arg1 ;
-(void)dealloc;
-(ACAccount *)account;
-(void)unsubscribe:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)_initWithAccount:(id)arg1 accountTypeIdentifier:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)notificationsQueue;
-(void)_processChangedAccount:(id)arg1 ;
-(NSString *)accountTypeIdentifier;
-(BOOL)_shouldNotifyObserversForChangedAccount:(id)arg1 ;
-(id)initWithAccountTypeIdentifier:(id)arg1 ;
-(void)setNotificationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AMSObservable *)observable;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setObservable:(AMSObservable *)arg1 ;
@end

