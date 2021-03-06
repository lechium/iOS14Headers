/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:17 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BFFPasscodeCreationDelegate.h>
#import <libobjc.A.dylib/BFFPasscodeInputViewDelegate.h>

@protocol BFFPasscodeViewControllerDelegate;
@class NSObject, BFFPasscodeCreationManager, NSString;

@interface BFFPasscodeViewController : UIViewController <BFFPasscodeCreationDelegate, BFFPasscodeInputViewDelegate> {

	BOOL _footerButtonIsSkip;
	BOOL _showingSpinner;
	NSObject*<BFFPasscodeViewControllerDelegate> _passcodeCreationDelegate;
	BFFPasscodeCreationManager* _passcodeManager;

}

@property (nonatomic,retain) BFFPasscodeCreationManager * passcodeManager;                                              //@synthesize passcodeManager=_passcodeManager - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<BFFPasscodeViewControllerDelegate> passcodeCreationDelegate;              //@synthesize passcodeCreationDelegate=_passcodeCreationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)allowSkip;
+(id)localizedFirstEntryInstructionsForTouchID;
-(void)clear;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)nextButtonPressed;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)passcodeInputView;
-(void)_updateNextButtonForPasscode:(id)arg1 ;
-(void)_updateNextButton;
-(void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)passcodeInput:(id)arg1 willChangeContents:(id)arg2 ;
-(void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2 ;
-(void)setPasscodeCreationDelegate:(NSObject*<BFFPasscodeViewControllerDelegate>)arg1 ;
-(BFFPasscodeCreationManager *)passcodeManager;
-(void)setPasscodeManager:(BFFPasscodeCreationManager *)arg1 ;
-(void)configurePasscodeTypeUsingAnimations:(BOOL)arg1 ;
-(id)_passcodeInputViewForState:(unsigned long long)arg1 ;
-(void)_setupFirstEntry;
-(NSObject*<BFFPasscodeViewControllerDelegate>)passcodeCreationDelegate;
-(id)passcodeOptionAlertController;
-(BOOL)_allowSkip;
-(id)instructionsForState:(unsigned long long)arg1 ;
-(void)_animatedPasscodeViewTransitionToState:(unsigned long long)arg1 animation:(unsigned long long)arg2 ;
-(void)_showWeakWarningAlert;
-(void)_finishedWithPasscode:(id)arg1 ;
-(void)_showSkipPasscodeAlert;
-(void)_showPasscodeOptionsSheet;
-(id)_firstEntryInstructions;
-(void)_commitPasscodeEntryTypeChange;
-(void)passcodeManager:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)passcodeManagerWillSetPasscode:(id)arg1 ;
-(void)passcodeManager:(id)arg1 didSetPasscodeWithSuccess:(BOOL)arg2 error:(id)arg3 ;
@end

