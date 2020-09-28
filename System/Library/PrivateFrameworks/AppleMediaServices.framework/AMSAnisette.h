/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>

@class NSString;

@interface AMSAnisette : NSObject <AMSBagConsumer_Project>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2 ;
+(unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2 ;
+(id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(id)createBagForSubProfile;
+(BOOL)_shouldRetryAfterError:(id)arg1 ;
+(id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5 ;
+(id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(BOOL)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4 ;
+(void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 ;
+(id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4 ;
@end
