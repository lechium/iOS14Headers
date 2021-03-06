/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDTaskServer.h>
#import <libobjc.A.dylib/HKUnitTestingTaskServerInterface.h>

@protocol HDTaskServerDelegate;
@class NSUUID, HDProfile, HDHealthStoreClient, NSString;

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface> {

	NSUUID* _taskUUID;
	HDProfile* _profile;
	HDHealthStoreClient* _client;
	id<HDTaskServerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSUUID * taskUUID;                                //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,__weak,readonly) id<HDTaskServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(NSUUID *)taskUUID;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connectionInvalidated;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_unitTesting_createTaskServerNoOpWithCompletion:(/*^block*/id)arg1 ;
-(HDProfile *)profile;
-(id)exportedInterface;
-(id)remoteInterface;
-(HDHealthStoreClient *)client;
-(id<HDTaskServerDelegate>)delegate;
@end

