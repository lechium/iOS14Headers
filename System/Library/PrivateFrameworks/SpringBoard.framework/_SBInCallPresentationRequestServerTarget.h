/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSInCallPresentationClientToServerInterface.h>

@protocol SBSInCallPresentationClientToServerInterface;
@class BSServiceConnection, NSUUID, NSString;

@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface> {

	BSServiceConnection* _connection;
	id<SBSInCallPresentationClientToServerInterface> _proxyInterface;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,__weak,readonly) BSServiceConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SBSInCallPresentationClientToServerInterface> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * clientIdentifier;                                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentTarget;
-(BSServiceConnection *)connection;
-(NSUUID *)clientIdentifier;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(oneway void)presentWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SBSInCallPresentationClientToServerInterface>)proxyInterface;
-(void)setProxyInterface:(id<SBSInCallPresentationClientToServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 proxyInterface:(id)arg2 ;
@end

