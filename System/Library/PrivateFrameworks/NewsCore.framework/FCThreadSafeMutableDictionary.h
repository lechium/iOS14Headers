/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFUnfairLock, NSMutableDictionary, NSArray, NSDictionary;

@interface FCThreadSafeMutableDictionary : NSObject {

	NFUnfairLock* _lock;
	NSMutableDictionary* _dictionary;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
@property (nonatomic,copy,readonly) NSDictionary * readOnlyDictionary; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allValues;
-(id)init;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSArray *)allKeys;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isEmpty;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(NSDictionary *)readOnlyDictionary;
@end
