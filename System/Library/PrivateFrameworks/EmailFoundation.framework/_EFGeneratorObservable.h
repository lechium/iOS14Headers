/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFScheduler;
@class EFCancelationToken;

@interface _EFGeneratorObservable : EFObservable {

	id<EFScheduler> _scheduler;
	EFCancelationToken* _cancelable;
	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextStateForState;
	/*^block*/id _resultFromState;
	/*^block*/id _delayForState;

}
-(BOOL)_isFinished;
-(id)subscribe:(id)arg1 ;
-(void)_updateState;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(void)_scheduleNextResultForObserver:(id)arg1 ;
@end
