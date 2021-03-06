/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ASDInGameAnalytics : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)_sharedInstance;
+(id)interface;
+(void)gamePlayDidBeginWithCompletion:(/*^block*/id)arg1 ;
+(void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2 ;
+(void)sendHeartbeatForSessionWithID:(id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connect;
-(id)init;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

