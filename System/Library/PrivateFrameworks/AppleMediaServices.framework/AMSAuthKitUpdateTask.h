/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@protocol AMSAuthKitUpdateTaskDelegate;
@class ACAccount, AMSAuthenticateOptions, NSString;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {

	ACAccount* _account;
	AMSAuthenticateOptions* _options;
	id<AMSAuthKitUpdateTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSAuthKitUpdateTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;                            //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg1 ;
-(AMSAuthenticateOptions *)options;
-(ACAccount *)account;
-(unsigned long long)_authenticationType;
-(void)setDelegate:(id<AMSAuthKitUpdateTaskDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)performAuthKitUpdate;
-(id<AMSAuthKitUpdateTaskDelegate>)delegate;
-(id)_createAuthKitContext;
-(id)_createAuthKitController;
-(void)_configureAuthKitContext:(id)arg1 ;
-(void)_logPromptSummaryForResults:(id)arg1 context:(id)arg2 ;
-(BOOL)_canPresentBackgroundPrompt;
-(void)_configureClientInfoForContext:(id)arg1 ;
-(void)_configureCompanionDeviceForContext:(id)arg1 ;
-(void)_configureIdentifiersForContext:(id)arg1 ;
-(void)_configureProxyIdentifiersForContext:(id)arg1 ;
-(void)_configureStringsForContext:(id)arg1 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
@end

