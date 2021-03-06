/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;
@class NSXPCConnection, NSObject;

@interface ICCloudClientCloudService : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<ICCloudServerListenerEndpointProviding> _listenerEndpointProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;              //@synthesize listenerEndpointProvider=_listenerEndpointProvider - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcConnection;                                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSXPCConnection *)xpcConnection;
-(id<ICCloudServerListenerEndpointProviding>)listenerEndpointProvider;
-(id)initWithListenerEndpointProvider:(id)arg1 ;
-(id)_xpcConnectionWithListenerEndpoint:(id)arg1 ;
@end

