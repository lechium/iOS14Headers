/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSCoverSheetViewControllerObserver.h>
#import <libobjc.A.dylib/SBFNotificationExtensionVisibilityProviding.h>

@protocol SBNotificationDestination, NCNotificationAlertDestination;
@class SBNotificationBannerDestination, SBWalletNotificationSource, SBNotificationCenterDestination, NCNotificationDispatcher, SBNCNotificationDispatcherDelegate, NCBulletinNotificationSource, SBUserAlertNotificationSource, SBLockScreenManager, SBLockStateAggregator, SBCommunicationPolicyManager, SBNCAlertingController, BSServiceConnectionEndpoint, NSString;

@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding> {

	SBNotificationBannerDestination* _bannerDestination;
	id<SBNotificationDestination> _dashBoardDestination;
	SBWalletNotificationSource* _walletNotificationSource;
	SBNotificationCenterDestination* _notificationCenterDestination;
	NCNotificationDispatcher* _dispatcher;
	SBNCNotificationDispatcherDelegate* _dispatcherDelegate;
	NCBulletinNotificationSource* _notificationSource;
	SBUserAlertNotificationSource* _userNotificationAlertSource;
	SBLockScreenManager* _lockScreenManager;
	SBLockStateAggregator* _lockStateAggregator;
	id<NCNotificationAlertDestination> _carDestination;
	SBCommunicationPolicyManager* _communicationPolicyManager;
	SBNCAlertingController* _alertingController;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;                                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) SBNCNotificationDispatcherDelegate * dispatcherDelegate;                        //@synthesize dispatcherDelegate=_dispatcherDelegate - In the implementation block
@property (nonatomic,retain) NCBulletinNotificationSource * notificationSource;                              //@synthesize notificationSource=_notificationSource - In the implementation block
@property (nonatomic,retain) SBUserAlertNotificationSource * userNotificationAlertSource;                    //@synthesize userNotificationAlertSource=_userNotificationAlertSource - In the implementation block
@property (nonatomic,retain) SBLockScreenManager * lockScreenManager;                                        //@synthesize lockScreenManager=_lockScreenManager - In the implementation block
@property (nonatomic,retain) SBLockStateAggregator * lockStateAggregator;                                    //@synthesize lockStateAggregator=_lockStateAggregator - In the implementation block
@property (nonatomic,retain) id<NCNotificationAlertDestination> carDestination;                              //@synthesize carDestination=_carDestination - In the implementation block
@property (nonatomic,retain) SBCommunicationPolicyManager * communicationPolicyManager;                      //@synthesize communicationPolicyManager=_communicationPolicyManager - In the implementation block
@property (nonatomic,retain) SBNCAlertingController * alertingController;                                    //@synthesize alertingController=_alertingController - In the implementation block
@property (nonatomic,readonly) SBNotificationBannerDestination * bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (nonatomic,readonly) id<SBNotificationDestination> dashBoardDestination;                           //@synthesize dashBoardDestination=_dashBoardDestination - In the implementation block
@property (nonatomic,readonly) SBWalletNotificationSource * walletNotificationSource;                        //@synthesize walletNotificationSource=_walletNotificationSource - In the implementation block
@property (nonatomic,readonly) SBNotificationCenterDestination * notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
@property (nonatomic,readonly) BOOL isCarDestinationActive; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * carOpenServiceEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(NCNotificationDispatcher *)dispatcher;
-(void)setAlertingController:(SBNCAlertingController *)arg1 ;
-(void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2 ;
-(SBNCNotificationDispatcherDelegate *)dispatcherDelegate;
-(SBNCAlertingController *)alertingController;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)setLockStateAggregator:(SBLockStateAggregator *)arg1 ;
-(void)setDispatcherDelegate:(SBNCNotificationDispatcherDelegate *)arg1 ;
-(void)setNotificationSource:(NCBulletinNotificationSource *)arg1 ;
-(BSServiceConnectionEndpoint *)carOpenServiceEndpoint;
-(SBNotificationCenterDestination *)notificationCenterDestination;
-(BOOL)_lockScreenWantsBanners;
-(SBUserAlertNotificationSource *)userNotificationAlertSource;
-(id)keyWindowForScreen:(id)arg1 ;
-(void)setCommunicationPolicyManager:(SBCommunicationPolicyManager *)arg1 ;
-(NCBulletinNotificationSource *)notificationSource;
-(void)setCarDestination:(id<NCNotificationAlertDestination>)arg1 ;
-(id)init;
-(SBWalletNotificationSource *)walletNotificationSource;
-(void)_updateActiveDestinations;
-(void)_setupNewDestinationsForDispatcher:(id)arg1 ;
-(void)setUserNotificationAlertSource:(SBUserAlertNotificationSource *)arg1 ;
-(SBCommunicationPolicyManager *)communicationPolicyManager;
-(BOOL)isCarDestinationActive;
-(id<SBNotificationDestination>)dashBoardDestination;
-(SBNotificationBannerDestination *)bannerDestination;
-(id<NCNotificationAlertDestination>)carDestination;
-(SBLockStateAggregator *)lockStateAggregator;
-(void)setLockScreenManager:(SBLockScreenManager *)arg1 ;
-(void)_aggregateLockStateDidChange;
-(SBLockScreenManager *)lockScreenManager;
-(void)_carPlayDestinationAvailabilityDidChange;
@end
