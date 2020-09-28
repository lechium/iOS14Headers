/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConnectivityModule/CCUIConnectivityButtonViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleDetailClickPresentationInteractionManagerDelegate.h>

@class BluetoothManager, NSArray, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager, NSString;

@interface CCUIConnectivityBluetoothViewController : CCUIConnectivityButtonViewController <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {

	BluetoothManager* _bluetoothManager;
	NSArray* _connectedDeviceNames;
	CCUIContentModuleDetailTransitioningDelegate* _detailTransitioningDelegate;
	CCUIContentModuleDetailClickPresentationInteractionManager* _clickPresentationInteractionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)_currentState;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChanges;
-(id)displayName;
-(void)_toggleState;
-(BOOL)contentModuleDetailClickPresentationInteractionControllerInteractionShouldBegin:(id)arg1 ;
-(void)_presentBehaviorPromptWithCompletion:(/*^block*/id)arg1 ;
-(void)stopObservingStateChanges;
-(BOOL)_enabledForState:(int)arg1 ;
-(void)contentModuleDetailClickPresentationInteractionController:(id)arg1 requestsAuthenticationForPresentationWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateWithState:(int)arg1 ;
-(id)_debugDescriptionForState:(int)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)_updateState;
-(id)init;
-(void)_updateConnectedDeviceNamesThatMayBeBlacklisted;
-(id)_glyphStateForState:(int)arg1 ;
-(void)_bluetoothStateDidChange:(id)arg1 ;
-(BOOL)_inoperativeForState:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_bluetoothConnectionStatusDidChange:(id)arg1 ;
-(id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)arg1 ;
-(BOOL)_useAlternateSelectedBackgroundForState:(int)arg1 ;
-(id)_subtitleTextWithState:(int)arg1 ;
-(BOOL)_canShowWhileLocked;
-(int)_stateWithOverridesApplied:(int)arg1 ;
-(id)_menuGlyphStateForState:(int)arg1 ;
@end
