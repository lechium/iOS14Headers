/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFFinishSetupFlowControlling
@optional
-(BOOL)controllerNeedsToRun;
-(id)prerequisiteFlowIdentifier;
-(id)preconditionViewControllerWithCompletion:(/*^block*/id)arg1;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(BOOL)canCompleteExtendedInitializationQuickly;

@required
-(id)viewControllerWithCompletion:(/*^block*/id)arg1;

@end

