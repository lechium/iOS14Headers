/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>

@protocol SL_OOPAWebViewControllerDelegate, SL_OOPAuthFlowDelegate;
@class WKWebView, UIWebView, SL_OOPASpinnerTitle, NSObject, NSURL, NSString;

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate> {

	WKWebView* _wkWebView;
	UIWebView* _uiWebView;
	SL_OOPASpinnerTitle* _spinnerTitleView;
	CFURLStorageSessionRef _storageSession;
	BOOL _hidingWebView;
	BOOL _didLoadWebView;
	BOOL _didFinish;
	id<SL_OOPAWebViewControllerDelegate> _delegate;
	NSObject*<SL_OOPAuthFlowDelegate> _authFlowDelegate;
	NSURL* _authURL;
	NSString* _username;

}

@property (assign,nonatomic,__weak) id<SL_OOPAWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<SL_OOPAuthFlowDelegate> authFlowDelegate;                //@synthesize authFlowDelegate=_authFlowDelegate - In the implementation block
@property (nonatomic,copy) NSURL * authURL;                                                     //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSString * navBarTitle; 
@property (nonatomic,copy) NSString * username;                                                 //@synthesize username=_username - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)username;
-(NSURL *)authURL;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SL_OOPAWebViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2 ;
-(id<SL_OOPAWebViewControllerDelegate>)delegate;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_loadWebViewIfReady;
-(void)_didFinishWithSuccess:(BOOL)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_updateNavigationPromptWithActiveURL:(id)arg1 ;
-(void)_loadWebView;
-(void)_evaluateDocumentTitleForUIWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_evaluateDocumentTitleForWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)navBarTitle;
-(void)setNavBarTitle:(NSString *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
-(void)setAuthFlowDelegate:(NSObject*<SL_OOPAuthFlowDelegate>)arg1 ;
-(NSObject*<SL_OOPAuthFlowDelegate>)authFlowDelegate;
@end

