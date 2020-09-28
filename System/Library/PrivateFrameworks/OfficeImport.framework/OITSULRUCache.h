/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray, NSArray;

@interface OITSULRUCache : NSObject {

	OITSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allValues; 
@property (nonatomic,readonly) NSArray * allKeys; 
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allValues;
-(void)p_removeOldestObject;
-(NSArray *)allKeys;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end
