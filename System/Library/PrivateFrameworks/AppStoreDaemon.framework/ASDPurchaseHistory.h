/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	int _databaseChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setHidden:(BOOL)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateForAccountID:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)executeQuery:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)showAllWithCompletionHandler:(/*^block*/id)arg1 ;
@end
