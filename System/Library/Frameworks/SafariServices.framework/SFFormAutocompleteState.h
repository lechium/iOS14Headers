/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/SFContactAutoFillViewControllerFiller.h>
#import <libobjc.A.dylib/_SFCreditCardCaptureViewControllerDelegate.h>
#import <libobjc.A.dylib/SFAppAutoFillOneTimeCodeProviderObserver.h>
#import <libobjc.A.dylib/_ASCredentialListViewControllerDelegate.h>
#import <libobjc.A.dylib/_ASPasswordCredentialAuthenticationViewControllerDelegate.h>

@class _SFFormAutoFillController, _SFFormDataController, UIView, WBSFormMetadata, NSDictionary, SFFormAutoFillFrameHandle, _SFFormAutoFillInputSession, WBSMultiRoundAutoFillManager, NSString, WBSFormControlMetadata, NSArray, WBSFormAutoFillMetadataCorrector, _ASPasswordCredentialAuthenticationViewController;

@interface SFFormAutocompleteState : NSObject <CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate> {

	long long _action;
	_SFFormAutoFillController* _autoFillController;
	_SFFormDataController* _dataController;
	UIView* _emptyInputView;
	WBSFormMetadata* _formMetadata;
	unsigned long long _formType;
	NSDictionary* _formValues;
	SFFormAutoFillFrameHandle* _frame;
	BOOL _gatheringFormValues;
	BOOL _hasNotedThatTextDidChangeInPasswordField;
	_SFFormAutoFillInputSession* _inputSession;
	WBSMultiRoundAutoFillManager* _multiRoundAutoFillManager;
	NSString* _prefixForSuggestions;
	WBSFormControlMetadata* _textFieldMetadata;
	NSArray* _cachedCredentialMatches;
	NSArray* _cachedRelatedCredentialMatches;
	/*^block*/id _credentialMatchesCompletionHandler;
	BOOL _fetchingLoginCredentialSuggestions;
	BOOL _invalidated;
	BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
	BOOL _URLIsAllowedByWhiteList;
	/*^block*/id _displayOtherContactsCompletionHandler;
	/*^block*/id _customAutoFillContactCompletionHandler;
	/*^block*/id _creditCardCaptureCompletionHandler;
	WBSFormAutoFillMetadataCorrector* _metadataCorrector;
	NSArray* _cachedExternalCredentialIdentities;
	_ASPasswordCredentialAuthenticationViewController* _externalCredentialViewController;
	/*^block*/id _externalCredentialListCompletionHandler;
	BOOL _submitExternalCredential;

}

@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) _SFFormAutoFillInputSession * inputSession;              //@synthesize inputSession=_inputSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldOfferToAutoFillCreditCardData; 
@property (nonatomic,readonly) NSString * titleOfAutoFillButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(BOOL)arg8 ;
+(BOOL)_shouldSaveCredentialsInProtectionSpace:(id)arg1 ;
-(void)invalidate;
-(void)showAllPasswordsButtonTapped;
-(void)oneTimeCodeProviderReceivedCode:(id)arg1 ;
-(long long)action;
-(void)dealloc;
-(void)_updateSuggestions:(unsigned long long)arg1 ;
-(BOOL)_shouldShowPasswordOptions;
-(void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)arg1 ;
-(BOOL)_canAutoFillCreditCardData;
-(void)_performAutoFill;
-(NSString *)titleOfAutoFillButton;
-(void)updateSuggestions;
-(BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)arg1 ;
-(void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
-(void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)arg1 ;
-(id)_displayTextForCreditCardNumber:(id)arg1 ;
-(void)_updateCreditCardSuggestionsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1 ;
-(void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
-(void)_gatherAndShowAddressBookAutoFillSuggestions;
-(id)_correctedFormMetadata:(id)arg1 ;
-(id)_viewControllerToPresentFrom;
-(void)_updateAutoFillButton;
-(id)_bestTextFieldMetadataForMetadata:(id)arg1 ;
-(void)_textDidChangeInForm:(id)arg1 textField:(id)arg2 ;
-(void)_setUpMultiRoundAutoFillManagerIfNecessary;
-(void)_autoFillCreditCardData;
-(void)_autoFillSingleCreditCardData:(long long)arg1 ;
-(void)_captureCreditCardDataWithCameraAndFill;
-(void)_suggestPasswordForNewAccountOrChangePasswordForm;
-(void)_offerToAutoFillContact;
-(void)_gatherFormValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateCreditCardAutoFillAction;
-(BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
-(long long)_actionForLoginForm;
-(id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5 ;
-(_SFFormAutoFillInputSession *)inputSession;
-(long long)_passwordGenerationAssistanceAction;
-(BOOL)_textFieldIsEmptyPasswordField;
-(BOOL)_shouldAllowExternalPasswordAutoFillOnURL:(id)arg1 ;
-(BOOL)_shouldAllowGeneratedPassword;
-(void)_setUserAndPasswordFieldsAutoFilled:(BOOL)arg1 clearPasswordField:(BOOL)arg2 ;
-(void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)autoFill;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(id)_cachedPotentialCredentialMatches;
-(void)_getLoginFormUser:(id*)arg1 password:(id*)arg2 userIsAutoFilled:(BOOL*)arg3 passwordIsAutoFilled:(BOOL*)arg4 ;
-(id)externalCredentialIdentities;
-(void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2 submitForm:(BOOL)arg3 ;
-(void)_fillPasswordCredentialIdentity:(id)arg1 submitForm:(BOOL)arg2 ;
-(void)_fillCredential:(id)arg1 setAutoFilled:(BOOL)arg2 setAsDefaultCredential:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 submitForm:(BOOL)arg5 ;
-(id)_actionForPresentingPasswordManagerExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getShouldOfferForgetPassword:(BOOL*)arg1 savePassword:(BOOL*)arg2 ;
-(void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_generateAndSuggestPasswordWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_presentCredentialListForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_textSuggestionForExternalCredentialIdentity:(id)arg1 submitForm:(BOOL)arg2 ;
-(id)_textSuggestionForCredentialDisplayData:(id)arg1 submitForm:(BOOL)arg2 ;
-(void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 ;
-(BOOL)shouldOfferToAutoFillCreditCardData;
-(void)updateCachedFormMetadataAfterFilling:(id)arg1 ;
-(void)_fetchPotentialCredentialMatchesWithCompletion:(/*^block*/id)arg1 ;
-(void)_offerToAutoFillFromPotentialCredentialMatches;
-(BOOL)_hasMatchWithUser:(id)arg1 password:(id)arg2 ;
-(BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
-(void)_autoFillWithSet:(id)arg1 ;
-(id)_sortedSingleCreditCardDataArray:(id)arg1 ;
-(void)_fillSingleCreditCardDataValue:(id)arg1 creditCardDataType:(long long)arg2 ;
-(void)_fillCreditCardData:(id)arg1 ;
-(BOOL)_textFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField:(id)arg1 ;
-(void)_updateAutoFillActionToCaptureCreditCardAndFill;
-(id)_suggestionsForAutoFillDisplayData:(id)arg1 ;
-(void)_showOtherContactOptions;
-(void)_autoFillDisplayData:(id)arg1 setAutoFilled:(BOOL)arg2 ;
-(void)_switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2 ;
-(void)_setShowingKeyboardInputView:(BOOL)arg1 ;
-(void)dismissCustomAutoFill;
-(void)_fillASPasswordCredential:(id)arg1 needsAuthentication:(BOOL)arg2 setAutoFilled:(BOOL)arg3 submitForm:(BOOL)arg4 ;
-(void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3 ;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
@end
