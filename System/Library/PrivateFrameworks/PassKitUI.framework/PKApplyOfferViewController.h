/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKApplyExplanationViewController.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@class PKAccountFlowController, PKApplyOfferCreditCardView, NSString, CLInUseAssertion, PKPaymentInstallmentConfiguration;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {

	PKAccountFlowController* _accountController;
	PKApplyOfferCreditCardView* _offerView;
	NSString* _offerTermsIdentifier;
	CLInUseAssertion* _inUseAssertion;
	BOOL _useCompactLayout;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;
	BOOL _hasSufficientOTBForInstallment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)_termsAccepted:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_openTermsAndConditions;
-(void)_setupForBroadwayApplication:(id)arg1 ;
-(void)_terminateApplyFlowWithoutDeclining;
@end

