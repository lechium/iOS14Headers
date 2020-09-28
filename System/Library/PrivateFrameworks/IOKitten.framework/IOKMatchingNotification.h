/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IOKIterator, NSObject, IOKMatchingNotificationRef;

@interface IOKMatchingNotification : NSObject {

	/*^block*/id _handler;
	IOKIterator* _iterator;
	NSObject*<OS_dispatch_queue> _queue;
	IOKMatchingNotificationRef* _notificationRef;

}

@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) IOKIterator * iterator;                                      //@synthesize iterator=_iterator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IOKMatchingNotificationRef * notificationRef;              //@synthesize notificationRef=_notificationRef - In the implementation block
-(void)setHandler:(id)arg1 ;
-(IOKMatchingNotificationRef *)notificationRef;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setIterator:(IOKIterator *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IOKIterator *)iterator;
-(void)primeNotification;
@end
