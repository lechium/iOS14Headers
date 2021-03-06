/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSAuthenticationManaging.h>
#import <libobjc.A.dylib/CSCarPlayStatusProviding.h>
#import <libobjc.A.dylib/CSMediaControlling.h>
#import <libobjc.A.dylib/CSReachabilityControlling.h>
#import <libobjc.A.dylib/CSResetRestoreStatusProviding.h>
#import <libobjc.A.dylib/CSTelephonyStatusProviding.h>
#import <libobjc.A.dylib/CSTouchEnvironmentStatusProviding.h>
#import <libobjc.A.dylib/CSUnlockRequesting.h>
#import <libobjc.A.dylib/CSUserSessionControlling.h>
#import <libobjc.A.dylib/CSWallpaperLogging.h>
#import <libobjc.A.dylib/CSOverlayProviding.h>
#import <libobjc.A.dylib/CSAppHostConfiguring.h>
#import <libobjc.A.dylib/CSSystemPointerInteractionManaging.h>
#import <libobjc.A.dylib/CSProximitySensorProviding.h>
#import <libobjc.A.dylib/CSDeviceOrientationProviding.h>
#import <libobjc.A.dylib/SBProximitySensorManagerObserver.h>
#import <libobjc.A.dylib/SBFOverlayObserving.h>
#import <libobjc.A.dylib/CSCoverSheetContextProviding.h>

@protocol SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver, SBFDateProviding, SBFLockOutStatusProvider, CSLegibilityProviding, CSPowerStatusProviding, CSThermalStatusProviding, SBUIBiometricResource, CSScreenStateProviding, SBFScreenWakeAnimationControlling, CSHomeAffordanceControlling, CSModalHomeAffordanceControlling, CSStatusBarControlling, CSWallpaperViewProviding, SBFActionProviding, CSApplicationInforming;
@class NSString, NSArray, SBSyncController, SBWallpaperAggdLogger, SBDashBoardNotificationPresenter, SBProximitySensorManager, NSMutableSet;

@interface SBDefaultCoverSheetContext : NSObject <CSAuthenticationManaging, CSCarPlayStatusProviding, CSMediaControlling, CSReachabilityControlling, CSResetRestoreStatusProviding, CSTelephonyStatusProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSOverlayProviding, CSAppHostConfiguring, CSSystemPointerInteractionManaging, CSProximitySensorProviding, CSDeviceOrientationProviding, SBProximitySensorManagerObserver, SBFOverlayObserving, CSCoverSheetContextProviding> {

	SBSyncController* _syncController;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	SBDashBoardNotificationPresenter* _notificationPresenter;
	SBProximitySensorManager* _proximitySensorManager;
	NSMutableSet* _proximitySensorProviderObservers;
	BOOL _objectInProximity;
	id<SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	id<SBFPasscodeFieldChangeObserver> _passcodeFieldChangeObserver;
	id<SBFDateProviding> _dateProvider;
	id<SBFLockOutStatusProvider> _lockOutStatusProvider;
	id<CSLegibilityProviding> _legibilityProvider;
	id<CSPowerStatusProviding> _powerStatusProvider;
	NSString* _powerStatusChangeNotificationName;
	id<CSThermalStatusProviding> _thermalStatusProvider;
	id<SBUIBiometricResource> _biometricResource;
	id<CSScreenStateProviding> _screenStateProvider;
	id<SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
	id<CSHomeAffordanceControlling> _homeAffordanceController;
	id<CSModalHomeAffordanceControlling> _modalHomeAffordanceController;
	id<CSStatusBarControlling> _statusBarController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;
	id<SBFActionProviding> _contentActionProvider;
	id<CSApplicationInforming> _applicationInformer;
	long long _rawDeviceOrientationIgnoringOrientationLocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCarPlayActiveForNotifications,nonatomic,readonly) BOOL carPlayActiveForNotifications; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isResetting,nonatomic,readonly) BOOL resetting; 
@property (nonatomic,readonly) long long resetState; 
@property (nonatomic,readonly) BOOL expectsPocketTouches; 
@property (getter=isLogoutSupported,nonatomic,readonly) BOOL logoutSupported; 
@property (nonatomic,readonly) BOOL wantsHomeScreenOverlay; 
@property (getter=isObjectInProximity,nonatomic,readonly) BOOL objectInProximity;                                      //@synthesize objectInProximity=_objectInProximity - In the implementation block
@property (nonatomic,readonly) long long rawDeviceOrientationIgnoringOrientationLocks;                                 //@synthesize rawDeviceOrientationIgnoringOrientationLocks=_rawDeviceOrientationIgnoringOrientationLocks - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationAssertionProviding> authenticationAssertionProvider;                //@synthesize authenticationAssertionProvider=_authenticationAssertionProvider - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                       //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver;                         //@synthesize passcodeFieldChangeObserver=_passcodeFieldChangeObserver - In the implementation block
@property (nonatomic,readonly) id<SBFLockOutStatusProvider> lockOutStatusProvider;                                     //@synthesize lockOutStatusProvider=_lockOutStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBFDateProviding> dateProvider;                                                      //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) id<CSLegibilityProviding> legibilityProvider;                                           //@synthesize legibilityProvider=_legibilityProvider - In the implementation block
@property (nonatomic,readonly) id<CSPowerStatusProviding> powerStatusProvider;                                         //@synthesize powerStatusProvider=_powerStatusProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * powerStatusChangeNotificationName;                                      //@synthesize powerStatusChangeNotificationName=_powerStatusChangeNotificationName - In the implementation block
@property (nonatomic,readonly) id<CSResetRestoreStatusProviding> resetRestoreStatusProvider; 
@property (nonatomic,readonly) id<CSThermalStatusProviding> thermalStatusProvider;                                     //@synthesize thermalStatusProvider=_thermalStatusProvider - In the implementation block
@property (nonatomic,readonly) id<SBUIBiometricResource> biometricResource;                                            //@synthesize biometricResource=_biometricResource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dismissableOverlays; 
@property (nonatomic,readonly) id<CSScreenStateProviding> screenStateProvider;                                         //@synthesize screenStateProvider=_screenStateProvider - In the implementation block
@property (nonatomic,readonly) id<SBFScreenWakeAnimationControlling> screenWakeAnimationController;                    //@synthesize screenWakeAnimationController=_screenWakeAnimationController - In the implementation block
@property (nonatomic,readonly) id<CSWallpaperViewProviding> wallpaperViewProvider;                                     //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
@property (nonatomic,readonly) id<CSTelephonyStatusProviding> telephonyStatusProvider; 
@property (nonatomic,readonly) id<CSAuthenticationManaging> authenticationManager; 
@property (nonatomic,readonly) id<CSHomeAffordanceControlling> homeAffordanceController;                               //@synthesize homeAffordanceController=_homeAffordanceController - In the implementation block
@property (nonatomic,readonly) id<CSModalHomeAffordanceControlling> modalHomeAffordanceController;                     //@synthesize modalHomeAffordanceController=_modalHomeAffordanceController - In the implementation block
@property (nonatomic,readonly) id<CSStatusBarControlling> statusBarController;                                         //@synthesize statusBarController=_statusBarController - In the implementation block
@property (nonatomic,readonly) id<CSMediaControlling> mediaController; 
@property (nonatomic,readonly) id<CSUnlockRequesting> unlockRequester; 
@property (nonatomic,readonly) id<CSWallpaperLogging> wallpaperLogger; 
@property (nonatomic,readonly) id<SBFActionProviding> contentActionProvider;                                           //@synthesize contentActionProvider=_contentActionProvider - In the implementation block
@property (nonatomic,readonly) id<CSApplicationInforming> applicationInformer;                                         //@synthesize applicationInformer=_applicationInformer - In the implementation block
@property (nonatomic,readonly) id<CSNotificationPresenting> notificationPresenter; 
@property (nonatomic,readonly) id<CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider; 
@property (nonatomic,readonly) id<CSUserSessionControlling> userSessionController; 
@property (nonatomic,readonly) id<CSReachabilityControlling> reachabilityController; 
@property (nonatomic,readonly) id<CSCarPlayStatusProviding> carPlayStatusProvider; 
@property (nonatomic,readonly) id<CSOverlayProviding> homeScreenOverlayProvider; 
@property (nonatomic,readonly) id<CSAppHostConfiguring> appHostConfiguring; 
@property (nonatomic,readonly) id<CSSystemPointerInteractionManaging> systemPointerInteractionManager; 
@property (nonatomic,readonly) id<CSProximitySensorProviding> proximitySensorProvider; 
@property (nonatomic,readonly) id<CSDeviceOrientationProviding> deviceOrientationProvider; 
-(void)overlayController:(id)arg1 visibilityDidChange:(BOOL)arg2 ;
-(id<CSLegibilityProviding>)legibilityProvider;
-(long long)resetState;
-(id<SBFActionProviding>)contentActionProvider;
-(BOOL)isRestoring;
-(id<CSDeviceOrientationProviding>)deviceOrientationProvider;
-(id<CSAuthenticationManaging>)authenticationManager;
-(id<CSCarPlayStatusProviding>)carPlayStatusProvider;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(long long)restoreState;
-(void)overlayControllerDidBeginChangingPresentationProgress:(id)arg1 ;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<CSTouchEnvironmentStatusProviding>)touchEnvironmentStatusProvider;
-(id<CSThermalStatusProviding>)thermalStatusProvider;
-(id<CSMediaControlling>)mediaController;
-(id<CSWallpaperLogging>)wallpaperLogger;
-(id<SBFLockOutStatusProvider>)lockOutStatusProvider;
-(void)unregisterView:(id)arg1 ;
-(BOOL)dismissModalContentIfVisibleAnimated:(BOOL)arg1 ;
-(id<CSScreenStateProviding>)screenStateProvider;
-(BOOL)isCarPlayActiveForNotifications;
-(id<CSPowerStatusProviding>)powerStatusProvider;
-(id<CSAppHostConfiguring>)appHostConfiguring;
-(void)deactivateReachability;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(id<SBFScreenWakeAnimationControlling>)screenWakeAnimationController;
-(long long)rawDeviceOrientationIgnoringOrientationLocks;
-(id<CSHomeAffordanceControlling>)homeAffordanceController;
-(void)proximitySensorManager:(id)arg1 crudeProximityDidChange:(BOOL)arg2 ;
-(id<CSSystemPointerInteractionManaging>)systemPointerInteractionManager;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)incrementIrisPlayCount;
-(void)logout;
-(id<CSReachabilityControlling>)reachabilityController;
-(id)applicationHosterForBundleIdentifier:(id)arg1 ;
-(id<CSNotificationPresenting>)notificationPresenter;
-(id)init;
-(id)_todayViewControllerIfAvailable;
-(id<CSApplicationInforming>)applicationInformer;
-(id<CSResetRestoreStatusProviding>)resetRestoreStatusProvider;
-(NSArray *)dismissableOverlays;
-(void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 fromLeading:(BOOL)arg3 ;
-(id<SBFPasscodeFieldChangeObserver>)passcodeFieldChangeObserver;
-(id)newOverlayController;
-(id<CSModalHomeAffordanceControlling>)modalHomeAffordanceController;
-(void)unlockWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<CSOverlayProviding>)homeScreenOverlayProvider;
-(id<CSUnlockRequesting>)unlockRequester;
-(id<CSProximitySensorProviding>)proximitySensorProvider;
-(id<CSStatusBarControlling>)statusBarController;
-(id)createUnlockRequest;
-(BOOL)isResetting;
-(void)removeProximitySensorProviderObserver:(id)arg1 ;
-(id<SBUIBiometricResource>)biometricResource;
-(id)createUnlockRequestForActionContext:(id)arg1 ;
-(void)stopMediaPlaybackForSource:(long long)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(NSString *)powerStatusChangeNotificationName;
-(id<CSTelephonyStatusProviding>)telephonyStatusProvider;
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)addProximitySensorProviderObserver:(id)arg1 ;
-(BOOL)wantsHomeScreenOverlay;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isEmergencyCallSupported;
-(BOOL)isLogoutSupported;
-(BOOL)isObjectInProximity;
-(BOOL)expectsPocketTouches;
-(id<SBFAuthenticationAssertionProviding>)authenticationAssertionProvider;
-(id<SBFDateProviding>)dateProvider;
@end

