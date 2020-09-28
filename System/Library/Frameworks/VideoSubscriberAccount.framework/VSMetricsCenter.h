/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTBaseEventDataProviderDelegate.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class MTMetricsKit, AMSBag, NSObject, VSPreferences, VSRemoteNotifier, NSOperationQueue, VSIdentityProvider, VSSetTopBoxProfile, NSString;

@interface VSMetricsCenter : NSObject <MTBaseEventDataProviderDelegate, VSRemoteNotifierDelegate, MCProfileConnectionObserver> {

	BOOL _optedIn;
	BOOL _currentIdentityProviderSupportsSTB;
	BOOL _currentIdentityProviderIsFullySupported;
	BOOL _fetchedSetTopBoxProfile;
	MTMetricsKit* _mainMetricsKit;
	AMSBag* _bag;
	NSObject*<OS_dispatch_queue> _eventQueue;
	VSPreferences* _preferences;
	VSRemoteNotifier* _remoteNotifier;
	NSOperationQueue* _privateQueue;
	VSIdentityProvider* _currentIdentityProvider;
	VSSetTopBoxProfile* _stbProfile;

}

@property (nonatomic,retain) MTMetricsKit * mainMetricsKit;                             //@synthesize mainMetricsKit=_mainMetricsKit - In the implementation block
@property (nonatomic,retain) AMSBag * bag;                                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;                   //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                               //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                         //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                           //@synthesize privateQueue=_privateQueue - In the implementation block
@property (assign,nonatomic) BOOL optedIn;                                              //@synthesize optedIn=_optedIn - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * currentIdentityProvider;              //@synthesize currentIdentityProvider=_currentIdentityProvider - In the implementation block
@property (assign,nonatomic) BOOL currentIdentityProviderSupportsSTB;                   //@synthesize currentIdentityProviderSupportsSTB=_currentIdentityProviderSupportsSTB - In the implementation block
@property (assign,nonatomic) BOOL currentIdentityProviderIsFullySupported;              //@synthesize currentIdentityProviderIsFullySupported=_currentIdentityProviderIsFullySupported - In the implementation block
@property (assign,nonatomic) BOOL fetchedSetTopBoxProfile;                              //@synthesize fetchedSetTopBoxProfile=_fetchedSetTopBoxProfile - In the implementation block
@property (nonatomic,retain) VSSetTopBoxProfile * stbProfile;                           //@synthesize stbProfile=_stbProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMetricsCenter;
-(void)setBag:(AMSBag *)arg1 ;
-(AMSBag *)bag;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(VSPreferences *)preferences;
-(NSOperationQueue *)privateQueue;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(BOOL)optedIn;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)userID;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)dsId:(id)arg1 ;
-(void)accountStoreDidChange;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(id)init;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(void)setOptedIn:(BOOL)arg1 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)fetchSetTopBoxProfile;
-(id)mutableBaseFieldsWithUserID:(BOOL)arg1 ;
-(id)flexibleBaseFields;
-(MTMetricsKit *)mainMetricsKit;
-(VSSetTopBoxProfile *)stbProfile;
-(void)setStbProfile:(VSSetTopBoxProfile *)arg1 ;
-(BOOL)hasSetTopBoxProfile;
-(BOOL)currentProviderIsSetTopBoxProvider;
-(VSIdentityProvider *)currentIdentityProvider;
-(BOOL)currentIdentityProviderSupportsSTB;
-(BOOL)currentIdentityProviderIsFullySupported;
-(void)setCurrentIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setCurrentIdentityProviderSupportsSTB:(BOOL)arg1 ;
-(void)setCurrentIdentityProviderIsFullySupported:(BOOL)arg1 ;
-(id)capacityData:(id)arg1 ;
-(id)capacityDataAvailable:(id)arg1 ;
-(id)capacityDisk:(id)arg1 ;
-(id)capacitySystem:(id)arg1 ;
-(id)capacitySystemAvailable:(id)arg1 ;
-(id)clientId:(id)arg1 ;
-(id)connection:(id)arg1 ;
-(id)hardwareModel:(id)arg1 ;
-(id)isSignedIn:(id)arg1 ;
-(id)pageUrl:(id)arg1 ;
-(id)pixelRatio:(id)arg1 ;
-(id)resourceRevNum:(id)arg1 ;
-(id)screenHeight:(id)arg1 ;
-(id)screenWidth:(id)arg1 ;
-(id)userType:(id)arg1 ;
-(id)windowInnerHeight:(id)arg1 ;
-(id)windowInnerWidth:(id)arg1 ;
-(id)windowOuterHeight:(id)arg1 ;
-(id)windowOuterWidth:(id)arg1 ;
-(id)xpPostFrequency:(id)arg1 ;
-(id)xpSendMethod:(id)arg1 ;
-(void)recordSignInEventWithProviderIdentifier:(id)arg1 supportedProvider:(BOOL)arg2 channelAdamID:(id)arg3 error:(id)arg4 ;
-(void)recordSignOutEventWithProviderIdentifier:(id)arg1 ;
-(void)recordMetadataRequestWithProviderIdentifier:(id)arg1 channelAdamID:(id)arg2 error:(id)arg3 ;
-(void)recordSTBOptOutEventWithError:(id)arg1 ;
-(void)recordEnterEventWithPage:(id)arg1 pageType:(id)arg2 ;
-(void)recordExitEventWithPage:(id)arg1 pageType:(id)arg2 ;
-(void)recordClickEventWithPage:(id)arg1 pageType:(id)arg2 target:(id)arg3 ;
-(void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg1 ;
-(void)setMainMetricsKit:(MTMetricsKit *)arg1 ;
-(BOOL)fetchedSetTopBoxProfile;
-(void)setFetchedSetTopBoxProfile:(BOOL)arg1 ;
@end
