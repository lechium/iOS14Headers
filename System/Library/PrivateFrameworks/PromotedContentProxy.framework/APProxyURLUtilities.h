/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APProxyURLUtilities : NSObject
+(BOOL)shouldProxyRequestToHost:(id)arg1 ;
+(id)proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(BOOL)arg3 ;
+(id)composeUserAgentString:(id)arg1 adIdentifier:(id)arg2 maxRequestCount:(long long)arg3 ;
+(BOOL)_shouldProxyRequestToHost:(id)arg1 ;
+(id)_proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(BOOL)arg3 ;
+(void)parseUserAgentString:(id)arg1 adIdentifier:(id*)arg2 maxRequestCount:(id*)arg3 ;
+(void)changeSchemeTo:(long long)arg1 forUrlRequest:(id)arg2 ;
@end
