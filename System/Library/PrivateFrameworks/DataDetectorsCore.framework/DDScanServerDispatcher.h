/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface DDScanServerDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _reportQueue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	BOOL _memoryWarningInProgress;
	NSMutableDictionary* _scanners;
	BOOL _tearDownRequested;
	unsigned long long _jobIdentifier;

}
-(void)dealloc;
-(id)scannerListForConfiguration:(id)arg1 ;
-(BOOL)reachedMaxSimultaneousTask;
-(long long)emptyIdentifier;
-(long long)scannerConf:(id)arg1 sync:(BOOL)arg2 shortTask:(BOOL)arg3 runTask:(/*^block*/id)arg4 ;
-(void)cancelJob:(long long)arg1 ;
-(void)recycleScanner:(id)arg1 fromList:(id)arg2 sameQueue:(BOOL)arg3 ;
-(id)reportQueue;
-(id)init;
@end

