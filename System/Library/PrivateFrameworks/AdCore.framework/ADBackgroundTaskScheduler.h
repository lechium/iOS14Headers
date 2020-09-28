/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
+(id)sharedInstance;
+(void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2 ;
+(void)unregisterTaskDelegate:(id)arg1 ;
-(void)addBackgroundTask:(id)arg1 ;
-(id)init;
-(void)checkOnTask:(id)arg1 ;
-(void)handleXPCActivity:(id)arg1 withID:(id)arg2 ;
-(void)cancelBackgroundTask:(id)arg1 ;
@end
