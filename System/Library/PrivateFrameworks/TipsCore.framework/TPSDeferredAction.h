/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPSDeferredActionDelegate, OS_dispatch_queue;
#import <TipsCore/TipsCore-Structs.h>
@class NSObject;

@interface TPSDeferredAction : NSObject {

	BOOL _scheduled;
	os_unfair_lock_s _lock;
	id<TPSDeferredActionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL scheduled;                                             //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                      //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<TPSDeferredActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)lock;
-(id)initWithQueue:(id)arg1 ;
-(void)setScheduled:(BOOL)arg1 ;
-(id)init;
-(BOOL)scheduled;
-(void)scheduleNextRunLoop;
-(void)setDelegate:(id<TPSDeferredActionDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TPSDeferredActionDelegate>)delegate;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

