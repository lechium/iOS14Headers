/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ASAccountAuthenticationModificationExtensionHostContextDelegate <_ASExtensionHostContextDelegate>
@optional
-(void)getSignInWithAppleAuthorizationWithState:(id)arg1 nonce:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 updatedCredential:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dismissRequestUI:(id)arg1;

@end

