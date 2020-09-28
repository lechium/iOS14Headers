/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSTelephonyController.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate> {

	NSArray* _networks;
	CTNetworkSelectionInfo* _networkSelectionInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,copy) NSArray * networks;                                                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) CTNetworkSelectionInfo * networkSelectionInfo;                        //@synthesize networkSelectionInfo=_networkSelectionInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)networks;
-(void)setNetworks:(NSArray *)arg1 ;
-(void)networkListAvailable:(id)arg1 list:(id)arg2 ;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)init;
-(void)fetchNetworkList;
-(void)selectNetwork:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)performDelegateSelector:(SEL)arg1 ;
-(id)copyNetworkSelectionInfo;
-(void)automaticallySelectNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)selectNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNetworkListWithCompletion:(/*^block*/id)arg1 ;
-(void)setNetworkSelectionInfo:(CTNetworkSelectionInfo *)arg1 ;
-(CTNetworkSelectionInfo *)networkSelectionInfo;
-(void)networksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)automaticallySelectNetwork;
@end
