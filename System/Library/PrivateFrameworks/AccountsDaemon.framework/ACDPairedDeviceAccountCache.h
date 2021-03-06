/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray;

@interface ACDPairedDeviceAccountCache : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	BOOL _accountsIsValid;
	NSArray* _accounts;
	NSMutableArray* _completions;

}
+(id)sharedInstance;
-(void)invalidate;
-(id)init;
-(void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFetchAccounts:(id)arg1 error:(id)arg2 ;
@end

