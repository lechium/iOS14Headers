/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNQueueingStrategy;
@class NSMutableArray, NSArray;

@interface CNQueue : NSObject {

	NSMutableArray* _buffer;
	id<CNQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<CNQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
-(id)peek;
-(NSArray *)allObjects;
-(NSMutableArray *)buffer;
-(id)dequeue;
-(id<CNQueueingStrategy>)strategy;
-(id)drain;
-(void)enqueue:(id)arg1 ;
-(id)initWithStrategy:(id)arg1 ;
-(void)enqueueObjectsFromArray:(id)arg1 ;
-(id)init;
-(void)dequeueObject:(id)arg1 ;
-(unsigned long long)count;
@end
