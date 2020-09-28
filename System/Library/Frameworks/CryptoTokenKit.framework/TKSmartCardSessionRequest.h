/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject {

	NSDictionary* _parameters;
	/*^block*/id _reply;
	NSXPCConnection* _connection;

}

@property (retain) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (copy) id reply;                                    //@synthesize reply=_reply - In the implementation block
@property (__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)setReply:(id)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)reply;
-(NSDictionary *)parameters;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
