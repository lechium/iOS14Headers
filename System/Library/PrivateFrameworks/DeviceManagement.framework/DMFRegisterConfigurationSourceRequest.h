/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSXPCListenerEndpoint, DMFReportingRequirements;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest {

	NSString* _configurationSourceName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	NSXPCListenerEndpoint* _listenerEndpoint;
	DMFReportingRequirements* _reportingRequirements;

}

@property (nonatomic,copy) NSString * configurationSourceName;                            //@synthesize configurationSourceName=_configurationSourceName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                             //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                    //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                    //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) DMFReportingRequirements * reportingRequirements;              //@synthesize reportingRequirements=_reportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)isPermittedOnSystemConnection;
-(DMFReportingRequirements *)reportingRequirements;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSString *)configurationSourceName;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
@end
