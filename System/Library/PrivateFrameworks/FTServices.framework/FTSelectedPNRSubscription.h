/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSRecursiveLock, CoreTelephonyClient, FTSelectedPNRSubscriptionCache, NSString;

@interface FTSelectedPNRSubscription : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSRecursiveLock* _lock;
	CoreTelephonyClient* _coreTelephonyClient;
	FTSelectedPNRSubscriptionCache* _cache;
	BOOL _isCacheValid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2 ;
-(id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3 ;
-(BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)arg1 subscriptionInfo:(id)arg2 ;
-(id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id*)arg2 ;
-(id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1 ;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)dealloc;
-(id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1 ;
-(void)invalidateCache;
-(void)subscriptionInfoDidChange;
-(void)_distributed_invalidateCache;
-(void)_protected_invalidateCache;
-(void)phoneNumberChanged:(id)arg1 ;
-(id)_reevaluateCachedSubscriptionWithError:(id*)arg1 ;
-(BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1 ;
-(id)init;
-(void)activeSubscriptionsDidChange;
-(void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
-(void)phoneNumberAvailable:(id)arg1 ;
-(id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2 ;
-(id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(BOOL)arg3 persistUpdate:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)arg1 ;
-(id)selectedRegistrationPhoneNumberWithError:(id*)arg1 ;
-(id)selectedPhoneNumberRegistrationSubscriptionWithError:(id*)arg1 ;
-(BOOL)isPhoneNumberEmergencyNumber:(id)arg1 ;
-(void)dualSimCapabilityDidChange;
-(BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)arg1 ;
-(BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)arg1 ;
-(id)_reevaluateCachedActiveSubscriptionWithError:(id*)arg1 ;
-(id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)arg1 ;
-(BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg1 ;
-(void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg1 ;
@end
