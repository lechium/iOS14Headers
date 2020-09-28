/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalCancelable.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable> {

	/*^block*/id _block;
	NSRunLoop* _runloop;

}

@property (nonatomic,copy) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSRunLoop * runloop;              //@synthesize runloop=_runloop - In the implementation block
-(NSRunLoop *)runloop;
-(void)cancel;
-(void)setRunloop:(NSRunLoop *)arg1 ;
-(void)performAfterDelay:(double)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)_performBlock:(/*^block*/id)arg1 ;
@end
