/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPSSessionProxyDelegate <NSObject>
@optional
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2;
-(void)proxyDidUpdateMetadata:(id)arg1;
-(void)proxyDidChangeProgress:(id)arg1;
-(void)proxyDidInstallApplicationPlaceholder:(id)arg1;
-(void)proxyDidRetrieveBusinessIcon:(id)arg1;
-(void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2;
-(void)proxy:(id)arg1 didRetrieveHeroImage:(id)arg2;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
-(void)proxyAppDidLaunchForTesting:(id)arg1;
-(void)proxyRemoteServiceDidCrash:(id)arg1;

@end
