/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMStepCounterProxy : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fStartedUpdates;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	long long fStepCountFromStart;
	long long fPrevStepCount;

}
-(void)dealloc;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_queryStepCountStartingFromInternal:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_teardown;
@end
