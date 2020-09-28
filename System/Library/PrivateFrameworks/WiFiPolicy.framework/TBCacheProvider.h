/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TBCacheProvider <NSObject>
@required
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1;
-(void)cacheFetchResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeWithFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
