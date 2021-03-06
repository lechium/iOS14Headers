/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, CoreTelephonyClient, NSObject, NSArray, NWPathEvaluator, NSString;

@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	BOOL _roaming;
	CoreTelephonyClient* _ctClient;
	NSObject*<OS_dispatch_queue> _ctQueue;
	NSArray* _subscriptions;
	NWPathEvaluator* _pathEvaluator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg1 ;
+(BOOL)holdsWiFiAssertion;
-(void)carrierBundleChange:(id)arg1 ;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)setCellularRoaming:(BOOL)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)currentNetworkType;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(BOOL)isCellularRoaming;
-(BOOL)isCellularDataRoamingEnabled;
-(void)_resetCtClient;
-(int)_queue_currentNetworkType;
-(BOOL)_isCurrentlyRoaming;
-(BOOL)isNetworkTypeCellular:(int)arg1 ;
-(void)setSubscriptions;
-(int)_networkTypeFromCurrentCellularData;
-(int)_networkTypeFromCurrentCellularDataWithError:(id*)arg1 ;
-(BOOL)usingWifi;
-(void)_operatorBundleChanged;
-(void)_carrierBundleChanged;
-(BOOL)isCurrentNetworkTypeCellular;
-(BOOL)isCurrentNetworkTypeExpensive;
@end

