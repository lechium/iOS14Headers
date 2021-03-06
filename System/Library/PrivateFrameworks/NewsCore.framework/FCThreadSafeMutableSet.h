/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFUnfairLock, NSMutableSet, NSArray, NSSet;

@interface FCThreadSafeMutableSet : NSObject {

	NFUnfairLock* _lock;
	NSMutableSet* _set;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,copy,readonly) NSSet * readOnlySet; 
-(void)removeObject:(id)arg1 ;
-(NSArray *)allObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(NSSet *)readOnlySet;
-(void)addObject:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(BOOL)isEmpty;
-(void)removeObjectsInSet:(id)arg1 ;
@end

