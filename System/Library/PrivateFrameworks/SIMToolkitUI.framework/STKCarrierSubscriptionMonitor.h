/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CoreTelephonyClient, NSString;

@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionInfo;
	NSMutableDictionary* _subscriptionContext;
	CoreTelephonyClient* _telephonyClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)carrierBundleChange:(id)arg1 ;
-(id)subscriptionContextForSlot:(long long)arg1 ;
-(void)subscriptionInfoDidChange;
-(id)init;
-(id)subscriptionInfoForSlot:(long long)arg1 ;
@end
