/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKOperationCallbacks
@required
-(void)handleLongLivedOperationDidPersist;
-(void)handleSystemDidImposeInfo:(id)arg1;
-(void)handleRequestDidComplete:(id)arg1;
-(void)handleOperationDidCompleteWithMetrics:(id)arg1 error:(id)arg2;
-(void)handleDiscretionaryOperationShouldSuspend;
-(void)handleDiscretionaryOperationShouldStart:(BOOL)arg1 nonDiscretionary:(BOOL)arg2 error:(id)arg3;
-(void)handleDaemonOperationWillStartWithClassName:(id)arg1 isTopLevelDaemonOperation:(BOOL)arg2 replyBlock:(/*^block*/id)arg3;

@end

