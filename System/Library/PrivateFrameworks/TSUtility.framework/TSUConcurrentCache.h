/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache {

	TSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue; 
-(void)unload;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(TSUReadWriteQueue *)readWriteQueue;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(BOOL)hasFlushableContent;
@end

