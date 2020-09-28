/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPPTOperation.h>

@interface SBPPTBlockOperation : SBPPTOperation {

	double _timeoutInterval;
	/*^block*/id _timeoutBlock;
	unsigned long long _state;
	/*^block*/id _block;

}

@property (assign,nonatomic,__weak) id timeoutBlock;                //@synthesize timeoutBlock=_timeoutBlock - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)setState:(unsigned long long)arg1 ;
-(void)start;
-(id)init;
-(BOOL)isAsynchronous;
-(double)timeoutInterval;
-(unsigned long long)state;
-(void)main;
-(id)timeoutBlock;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)cancelAndFailTestWithReason:(id)arg1 ;
-(void)setTimeoutBlock:(id)arg1 ;
@end
