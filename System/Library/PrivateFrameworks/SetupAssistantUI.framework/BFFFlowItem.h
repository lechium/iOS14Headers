/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFFlowItem <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(id)internalSkipKey;
+(BOOL)controllerAffectedByTapFreeSetup;
+(void)skippedByCloudConfig;
+(BOOL)isTrailing;
-(id)viewController;
-(BOOL)shouldPresentModally;
-(id)displayLanguage;
-(void)setNavigationController:(id)arg1;
-(BOOL)isEphemeral;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(void)didReceiveInternalSkipInfo;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(void)startFlowItem:(BOOL)arg1;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(BOOL)responsibleForViewController:(id)arg1;
-(void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelHostedPresentation;
-(BOOL)shouldAllowStartOver;
-(void)startOver;
-(void)handleDebugGesture;
-(id)internalMenuActions;
-(BOOL)shouldStopInactivityTimer;
-(void)flowItemDidAppear:(BOOL)arg1;

@required
+(id)cloudConfigSkipKey;
-(id)init;
-(void)setDelegate:(id)arg1;

@end

