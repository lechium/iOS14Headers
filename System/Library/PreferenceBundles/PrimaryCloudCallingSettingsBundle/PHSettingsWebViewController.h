//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSData, NSString, NSURL, UIActivityIndicatorView, UIWebView;

@interface PHSettingsWebViewController : UIViewController <UIWebViewDelegate>
{
    long long _type;	// 8 = 0x8
    UIWebView *_webView;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    NSData *_body;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007b10
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;	// IMP=0x0000000000007a48
- (void)setupControllerInWebFrame:(id)arg1;	// IMP=0x0000000000007958
- (void)doWebViewTimedOut;	// IMP=0x0000000000007818
- (void)doProvisioningFailed;	// IMP=0x00000000000076f4
- (void)doProvisioningCanceled;	// IMP=0x00000000000075b4
- (void)doProvisioningDone;	// IMP=0x0000000000007464
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x00000000000073d0
- (void)_cancelButtonClicked:(id)arg1;	// IMP=0x0000000000007350
- (void)cancelWebView;	// IMP=0x00000000000072d0
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006f78
- (void)loadWebViewWithSpinner:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d0c
@property(readonly, nonatomic, getter=isPresentingURL) _Bool presentingURL;
- (void)loadView;	// IMP=0x0000000000006a50
- (id)initWithType:(long long)arg1;	// IMP=0x00000000000069cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000069b4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000699c
- (id)init;	// IMP=0x0000000000006984

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

