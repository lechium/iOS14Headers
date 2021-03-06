/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncShareParticipantManagerServerInterface.h>

@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchSharingParticipantStatus:(/*^block*/id)arg1 ;
-(void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

