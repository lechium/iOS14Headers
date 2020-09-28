/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDLogEventAnalyzerContext.h>

@protocol HMDLogEventAnalyzerContext <HMDLogEventSubmitting>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;

@end


@protocol OS_dispatch_queue;
@class NSObject, HMDLogEventDispatcher, NSString;

@interface HMDLogEventAnalyzerContext : NSObject <HMDLogEventAnalyzerContext> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                    //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)submitLogEvent:(id)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithWorkQueue:(id)arg1 ;
@end
