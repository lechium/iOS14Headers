/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, WKWebView, NSString;

@interface SGDOMParser : NSObject <WKNavigationDelegate> {

	NSObject*<OS_dispatch_semaphore> _loadedSem;
	WKWebView* _webView;
	NSString* _html;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)webView;
-(id)parseHTML:(id)arg1 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(id)_parseDocument:(id)arg1 ;
-(void)runJavascriptOnWebView:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end

