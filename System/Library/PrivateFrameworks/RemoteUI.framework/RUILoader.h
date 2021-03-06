/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIHTTPRequest.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol RUIParserDelegate;
@class RUIParser, NSURL, _RUILoaderSessionDelegateAdapter, RUIStyle, NSString;

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate> {

	RUIParser* _parser;
	NSURL* _url;
	_RUILoaderSessionDelegateAdapter* _sessionDelegateAdapter;
	BOOL _allowNonSecureHTTP;
	id<RUIParserDelegate> _parserDelegate;
	RUIStyle* _style;
	long long _userInterfaceStyle;

}

@property (assign,nonatomic) BOOL allowNonSecureHTTP;                                  //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (assign,nonatomic,__weak) id<RUIParserDelegate> parserDelegate;              //@synthesize parserDelegate=_parserDelegate - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                             //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)userInterfaceStyle;
-(void)parseData:(id)arg1 ;
-(id)sessionConfiguration;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)dealloc;
-(id)URL;
-(RUIStyle *)style;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)loadRequest:(id)arg1 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(id)urlSessionDelegate;
-(BOOL)allowNonSecureHTTP;
-(BOOL)receivedValidResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)didParseData;
-(void)failWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleShouldLoadRequestResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishLoadWithObjectModel:(id)arg1 actionSignal:(id)arg2 error:(id)arg3 ;
-(void)_loadResources;
-(BOOL)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(id<RUIParserDelegate>)parserDelegate;
-(void)setParserDelegate:(id<RUIParserDelegate>)arg1 ;
@end

