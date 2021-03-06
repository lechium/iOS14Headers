/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class OBWelcomeController, UIStackView, UISegmentedControl, UIView, VPSpatialTutorialContentView, UIAlertController, NSMutableArray, BTSDevice;

@interface BTSpatialTutorialViewController : UIViewController {

	OBWelcomeController* _welcomeController;
	UIStackView* _stackView;
	UISegmentedControl* _segmentedControl;
	UIView* _spacerView;
	VPSpatialTutorialContentView* _spatialTutorialContentView;
	UIAlertController* _alert;
	NSMutableArray* _constraints;
	BOOL _isCurrentModeSpatial;
	BOOL _isCurrentModeChanged;
	BOOL _budsInEar;
	BOOL _alertShowing;
	BTSDevice* _currentDevice;

}

@property (nonatomic,retain) BTSDevice * currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)setupStackView;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setupConstraints;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)initCommon;
-(id)initWithMode:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BTSDevice *)currentDevice;
-(void)handleAudioSessionInterruption:(id)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)setupWelcomeController;
-(void)notifySpatialAudioUpdate:(BOOL)arg1 ;
-(void)checkStatusAndPlay;
-(void)stopPlayingContent;
-(void)dismissWelcomeController;
-(void)inEarStatusChangedHandler:(id)arg1 ;
-(void)handleMediaServerConnectionDied:(id)arg1 ;
-(void)enableSpatialAudio:(id)arg1 ;
-(void)disableSpatialAudio:(id)arg1 ;
-(void)segmentControlValueChanged:(id)arg1 ;
-(void)updateInEarState;
-(void)showAlert;
-(void)startPlayingContent;
@end

