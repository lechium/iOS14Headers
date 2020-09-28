/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WFTumblrViewControllerDelegate;
@class WKWebView, TMTumblrAuthenticator, NSString;

@interface WFTumblrViewController : UIViewController <WKNavigationDelegate> {

	WKWebView* _webView;
	id<WFTumblrViewControllerDelegate> _delegate;
	TMTumblrAuthenticator* _authenticator;

}

@property (nonatomic,retain) TMTumblrAuthenticator * authenticator;                           //@synthesize authenticator=_authenticator - In the implementation block
@property (assign,nonatomic,__weak) WKWebView * webView;                                      //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<WFTumblrViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(WKWebView *)webView;
-(TMTumblrAuthenticator *)authenticator;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAuthenticator:(TMTumblrAuthenticator *)arg1 ;
-(void)setWebView:(WKWebView *)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)setDelegate:(id<WFTumblrViewControllerDelegate>)arg1 ;
-(id<WFTumblrViewControllerDelegate>)delegate;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(id)initWithOAuthConsumerKey:(id)arg1 OAuthConsumerSecret:(id)arg2 ;
@end
