/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SOExtensionDelegate.h>
#import <libobjc.A.dylib/SOUIAuthorizationViewControllerDelegate.h>

@protocol SOAuthorizationDelegate;
@class SOAuthorizationCore, SOExtension, SORemoteExtensionViewController, NSDictionary, NSString;

@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate> {

	SOAuthorizationCore* _authorizationCore;
	SOExtension* _extension;
	SORemoteExtensionViewController* _extensionViewController;
	/*^block*/id _pendingFinishAuthorizationBlock;
	BOOL _enableEmbeddedAuthorizationViewController;
	id<SOAuthorizationDelegate> _delegate;

}

@property (__weak) id<SOAuthorizationDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue; 
@property (nonatomic,retain) NSDictionary * authorizationOptions; 
@property (assign,nonatomic) BOOL enableEmbeddedAuthorizationViewController;              //@synthesize enableEmbeddedAuthorizationViewController=_enableEmbeddedAuthorizationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(BOOL)arg3 ;
-(NSDictionary *)authorizationOptions;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)enableEmbeddedAuthorizationViewController;
-(void)cancelAuthorization;
-(void)dealloc;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_applicationActivationWithTimeout:(BOOL)arg1 ;
-(void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(void)setAuthorizationOptions:(NSDictionary *)arg1 ;
-(void)_cancelAuthorization;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)setDelegate:(id<SOAuthorizationDelegate>)arg1 ;
-(id)realms;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id<SOAuthorizationDelegate>)delegate;
-(void)setEnableEmbeddedAuthorizationViewController:(BOOL)arg1 ;
-(void)viewControllerDidCancel:(id)arg1 ;
-(void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2 ;
-(void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 ;
-(void)_extensionCleanup;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationWithParameters:(id)arg1 ;
@end
