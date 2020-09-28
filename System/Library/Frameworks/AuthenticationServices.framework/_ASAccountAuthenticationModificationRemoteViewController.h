/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ASAccountAuthenticationModificationRemoteViewControllerProtocol.h>

@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate;
@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol> {

	id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate>)delegate;
-(void)upgradeCredentialToSignInWithApple:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)updateCredential:(id)arg1 forServiceIdentifier:(id)arg2 userInfo:(id)arg3 extension:(id)arg4 ;
-(void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDidFinishWithCredential:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentAccountModificationRemoteViewController;
-(void)dismissAccountModificationRemoteViewController;
@end
