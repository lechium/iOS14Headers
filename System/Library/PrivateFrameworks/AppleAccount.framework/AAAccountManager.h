/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)addAccount:(id)arg1 ;
-(id)_accountStore;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)saveAllAccounts;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)dealloc;
-(void)removeAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)accounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)primaryAccount;
-(void)updateAccount:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
@end

