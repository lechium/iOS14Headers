/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@class PKXPCService, NSString;

@interface NPKNanoPassDaemonConnection : NSObject <PKXPCServiceDelegate> {

	PKXPCService* _remoteService;

}

@property (nonatomic,retain) PKXPCService * remoteService;              //@synthesize remoteService=_remoteService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteServiceDidResume:(id)arg1 ;
-(id)init;
-(PKXPCService *)remoteService;
-(void)setRemoteService:(PKXPCService *)arg1 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(id)_remoteObjectProxySynchronous:(BOOL)arg1 withFailureHandler:(/*^block*/id)arg2 ;
-(void)handleMetadataRequestOnPairedDevice:(id)arg1 withAssociatedApplicationIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg1 ;
-(void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)statusForSentInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusForReceivedInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)noteWillDeleteAccountsSynchronous:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

