/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;
#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSObject, NSString, NSArray;

@interface ACCiAP2ShimServerClient : NSObject {

	BOOL _locationSupportedByClient;
	BOOL _cameraSupportedByClient;
	BOOL _supportsAccessibility;
	BOOL _clientRequiresAccReset;
	BOOL _entitlementForAllAccessories;
	int _processId;
	unsigned _clientID;
	unsigned _capabilities;
	int _iapSessionRefCount;
	unsigned _applicationState;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSString* _bundleId;
	NSArray* _clientEAProtocols;
	NSObject*<OS_dispatch_queue> _processAssertionQ;
	SBSProcessAssertionRef _processAssertion;
	long long _processAssertionStartTime;
	NSObject*<OS_dispatch_source> _processAssertionTimer;
	SCD_Struct_AC1 _auditToken;

}

@property (nonatomic,readonly) BOOL entitlementForAllAccessories;                                //@synthesize entitlementForAllAccessories=_entitlementForAllAccessories - In the implementation block
@property (nonatomic,readonly) NSArray * clientEAProtocols;                                      //@synthesize clientEAProtocols=_clientEAProtocols - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processAssertionQ;                   //@synthesize processAssertionQ=_processAssertionQ - In the implementation block
@property (nonatomic,readonly) SBSProcessAssertionRef processAssertion;                          //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) long long processAssertionStartTime;                              //@synthesize processAssertionStartTime=_processAssertionStartTime - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> processAssertionTimer;              //@synthesize processAssertionTimer=_processAssertionTimer - In the implementation block
@property (nonatomic,readonly) int iapSessionRefCount;                                           //@synthesize iapSessionRefCount=_iapSessionRefCount - In the implementation block
@property (assign,nonatomic) unsigned applicationState;                                          //@synthesize applicationState=_applicationState - In the implementation block
@property (assign,nonatomic) unsigned clientID;                                                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int processId;                                                    //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AC1 auditToken;                                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                                            //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL locationSupportedByClient;                                     //@synthesize locationSupportedByClient=_locationSupportedByClient - In the implementation block
@property (assign,nonatomic) BOOL cameraSupportedByClient;                                       //@synthesize cameraSupportedByClient=_cameraSupportedByClient - In the implementation block
@property (nonatomic,readonly) BOOL supportsAccessibility;                                       //@synthesize supportsAccessibility=_supportsAccessibility - In the implementation block
@property (assign,nonatomic) BOOL clientRequiresAccReset;                                        //@synthesize clientRequiresAccReset=_clientRequiresAccReset - In the implementation block
-(unsigned)clientID;
-(int)processId;
-(unsigned)capabilities;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)dealloc;
-(SCD_Struct_AC1)auditToken;
-(void)setClientID:(unsigned)arg1 ;
-(void)setApplicationState:(unsigned)arg1 ;
-(unsigned)applicationState;
-(SBSProcessAssertionRef)processAssertion;
-(NSString *)bundleId;
-(void)releaseProcessAssertion;
-(NSObject*<OS_dispatch_source>)processAssertionTimer;
-(id)description;
-(id)_applicationInfoForBundleIDSync:(id)arg1 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(long long)processAssertionStartTime;
-(id)initWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_AC1)arg2 xpcConnection:(id)arg3 eaProtocols:(id)arg4 andBundleId:(id)arg5 ;
-(BOOL)canSendConnectionEventForAccessory:(id)arg1 ;
-(BOOL)locationSupportedByClient;
-(void)setLocationSupportedByClient:(BOOL)arg1 ;
-(BOOL)cameraSupportedByClient;
-(void)setCameraSupportedByClient:(BOOL)arg1 ;
-(BOOL)supportsAccessibility;
-(BOOL)clientRequiresAccReset;
-(void)setClientRequiresAccReset:(BOOL)arg1 ;
-(BOOL)entitlementForAllAccessories;
-(NSArray *)clientEAProtocols;
-(NSObject*<OS_dispatch_queue>)processAssertionQ;
-(int)iapSessionRefCount;
@end

