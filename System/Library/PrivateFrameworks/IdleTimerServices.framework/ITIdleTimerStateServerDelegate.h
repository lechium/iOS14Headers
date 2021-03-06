/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailable;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
-(void)clientDidDisconnect:(id)arg1;

@end

