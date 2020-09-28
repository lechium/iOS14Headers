/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CacheDeleteServiceProtocol
@required
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)serviceCancelPurge:(/*^block*/id)arg1;
-(void)servicePing:(/*^block*/id)arg1;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end
