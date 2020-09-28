/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMutableDictionary* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	OFLRUCacheList* _leastRecentUsedList;
	NSMutableDictionary* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(void)evictSlots:(unsigned long long)arg1 ;
-(unsigned long long)currentUsedSlots;
-(unsigned long long)numberOfSlots;
-(void)removeAllObjects;
-(void)_promoteListElement:(OFLRUCacheListElement*)arg1 ;
-(void)dealloc;
-(BOOL)writeToURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(id)init;
-(id)allKeys;
-(BOOL)loadFromURL:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_removeListElement:(OFLRUCacheListElement*)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end
