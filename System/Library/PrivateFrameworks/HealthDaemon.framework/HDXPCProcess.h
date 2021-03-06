/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, _HKXPCAuditToken, NSString, _HKEntitlements;

@interface HDXPCProcess : NSObject {

	NSMutableSet* _droppedEntitlements;
	BOOL _isExtension;
	_HKXPCAuditToken* _auditToken;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _containerAppBundleIdentifier;
	_HKEntitlements* _entitlements;

}

@property (nonatomic,readonly) _HKEntitlements * entitlements;                            //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) _HKXPCAuditToken * auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                          //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) BOOL isWidgetKitExtension; 
@property (nonatomic,copy,readonly) NSString * containerAppBundleIdentifier;              //@synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier; 
+(id)processWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)currentProcess;
-(_HKEntitlements *)entitlements;
-(id)valueForEntitlement:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)applicationIdentifier;
-(BOOL)isWidgetKitExtension;
-(void)restoreEntitlement:(id)arg1 ;
-(BOOL)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id*)arg3 ;
-(id)_pluginBundleForCurrentProcess;
-(_HKXPCAuditToken *)auditToken;
-(id)unitTest_copyProcessWithEntitlements:(id)arg1 ;
-(int)processIdentifier;
-(BOOL)hasArrayEntitlement:(id)arg1 containing:(id)arg2 ;
-(BOOL)hasRequiredEntitlement:(id)arg1 error:(id*)arg2 ;
-(BOOL)isExtension;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)containerAppBundleIdentifier;
-(id)initWithAuditToken:(id)arg1 entitlements:(id)arg2 isExtension:(BOOL)arg3 containerAppBundleIdentifier:(id)arg4 ;
-(NSString *)name;
-(id)description;
-(void)dropEntitlement:(id)arg1 ;
@end

