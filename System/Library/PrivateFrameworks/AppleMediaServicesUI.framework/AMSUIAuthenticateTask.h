/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSAuthenticateTask.h>
#import <libobjc.A.dylib/AMSAuthenticateTaskDelegate.h>

@class UIViewController, NSString;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask <AMSAuthenticateTaskDelegate> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 presentingViewController:(id)arg2 options:(id)arg3 ;
-(id)initWithRequest:(id)arg1 presentingViewController:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(id)performAuthentication;
-(id)_createAuthKitUpdateTaskForAccount:(id)arg1 ;
-(void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

