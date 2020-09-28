/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContinuousDialogManagerService.framework/ContinuousDialogManagerService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDMSetupXPCListenerService.h>

@class NSXPCConnection, NSString;

@interface CDMSetupXPCClient : NSObject <CDMSetupXPCListenerService> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(void)connect;
-(id)_remoteObjectProxy;
-(id)init;
-(id)_connection;
-(void)_clearConnectionWithError:(id)arg1 ;
-(void)getNLAssetStatusForType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getClientFlowStatusWithReply:(/*^block*/id)arg1 ;
-(void)invalidateClientFlowCacheWithCompletion:(/*^block*/id)arg1 ;
@end
