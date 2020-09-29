/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:34 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Memories/Memories-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface FIFOCache : NSObject {

	NSMutableDictionary* m_cache;
	NSMutableArray* m_FIFO;
	int m_capacity;

}
+(void)noteApplicationDidReceiveMemoryWarning;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)addObjectsFromDictionary:(id)arg1 ;
@end
