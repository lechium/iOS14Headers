/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPSCloudCallingURLControllerDelegate;
@class CTXPCServiceSubscriptionContext, NSURL, NSData, TPSCarrierBundleController, TPSCloudCallingWebViewController, TUSenderIdentityCapabilities;

@interface TPSCloudCallingURLController : NSObject {

	BOOL _capabilityEnabled;
	BOOL _capabilityProvisioningURLInvalid;
	int _capabilityProvisioningStatus;
	id<TPSCloudCallingURLControllerDelegate> _delegate;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	NSURL* _capabilityProvisioningURL;
	NSData* _capabilityProvisioningPostData;
	TPSCarrierBundleController* _carrierBundleController;
	TPSCloudCallingWebViewController* _webViewController;

}

@property (nonatomic,retain) TPSCarrierBundleController * carrierBundleController;                                           //@synthesize carrierBundleController=_carrierBundleController - In the implementation block
@property (assign,nonatomic,__weak) TPSCloudCallingWebViewController * webViewController;                                    //@synthesize webViewController=_webViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingURLControllerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUSenderIdentityCapabilities * subscriptionCapabilities; 
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                                        //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (getter=isCapabilityEnabled,nonatomic,readonly) BOOL capabilityEnabled;                                            //@synthesize capabilityEnabled=_capabilityEnabled - In the implementation block
@property (nonatomic,readonly) int capabilityProvisioningStatus;                                                             //@synthesize capabilityProvisioningStatus=_capabilityProvisioningStatus - In the implementation block
@property (nonatomic,copy,readonly) NSURL * capabilityProvisioningURL;                                                       //@synthesize capabilityProvisioningURL=_capabilityProvisioningURL - In the implementation block
@property (getter=isCapabilityProvisioningURLInvalid,nonatomic,readonly) BOOL capabilityProvisioningURLInvalid;              //@synthesize capabilityProvisioningURLInvalid=_capabilityProvisioningURLInvalid - In the implementation block
@property (nonatomic,copy,readonly) NSData * capabilityProvisioningPostData;                                                 //@synthesize capabilityProvisioningPostData=_capabilityProvisioningPostData - In the implementation block
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)init;
-(TPSCloudCallingWebViewController *)webViewController;
-(void)setDelegate:(id<TPSCloudCallingURLControllerDelegate>)arg1 ;
-(void)setWebViewController:(TPSCloudCallingWebViewController *)arg1 ;
-(id<TPSCloudCallingURLControllerDelegate>)delegate;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(TUSenderIdentityCapabilities *)subscriptionCapabilities;
-(void)enableCapability;
-(void)reloadWebViewController;
-(void)webSheetCompletion;
-(BOOL)isCapabilityEnabled;
-(int)capabilityProvisioningStatus;
-(NSURL *)capabilityProvisioningURL;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(NSData *)capabilityProvisioningPostData;
-(TPSCarrierBundleController *)carrierBundleController;
-(void)setCarrierBundleController:(TPSCarrierBundleController *)arg1 ;
-(id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)arg1 ;
-(void)loadWebViewController;
-(BOOL)shouldEnableCapability;
-(id)genericErrorAlertController;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(id)provisionCapabilityController;
-(id)updateEmergencyAddressController;
@end
