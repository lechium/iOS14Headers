/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDIDSMessageCenterDelegate <NSObject>
@optional
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
-(void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;

@end
