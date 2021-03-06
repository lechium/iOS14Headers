/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSWebViewMetadataFetchOperationDelegate.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol WBSSiteMetadataProviderDelegate;
@class NSString;

@interface WBSSVGImageRenderingProvider : NSObject <WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider> {

	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(BOOL)_requestIsValid:(id)arg1 ;
-(void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2 ;
@end

