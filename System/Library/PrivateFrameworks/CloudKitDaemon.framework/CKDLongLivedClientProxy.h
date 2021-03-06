/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(void)clearCachedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
+(id)longLivedProxyWithContext:(id)arg1 ;
+(id)sharedLongLivedProxies;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)isLongLived;
-(void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(/*^block*/id)arg2 customCompletionBlock:(/*^block*/id)arg3 ;
-(id)applicationBundleID;
-(id)apsEnvironmentEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(id)associatedApplicationBundleID;
-(id)callbackProxyForOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2 ;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasValidatedEntitlements;
-(BOOL)hasZoneProtectionDataEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasMasqueradingEntitlement;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasOutOfProcessUIEntitlement;
-(id)applicationID;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(id)CKPropertiesDescription;
-(BOOL)_hasCustomAccountsEntitlement;
-(id)applicationBundleIdentifierForPush;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)serviceNameForContainerIdentifierMapEntitlement;
-(id)_clientPrefixEntitlement;
-(id)description;
-(BOOL)hasProtectionDataEntitlement;
@end

