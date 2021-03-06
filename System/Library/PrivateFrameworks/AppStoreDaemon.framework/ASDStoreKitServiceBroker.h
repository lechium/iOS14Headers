/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)_storeKitClientInterface;
+(id)defaultBroker;
+(id)_storeKitServiceInterface;
-(id)storeKitService;
-(id)storeKitServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitSynchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_serviceConnection;
-(id)init;
-(id)storeKitSynchronousService;
-(void)_serviceConnectionInvalidated;
@end

