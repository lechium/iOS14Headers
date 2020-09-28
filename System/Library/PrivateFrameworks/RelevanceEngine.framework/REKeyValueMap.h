/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface REKeyValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)removeKey:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)valueCount;
-(void)addKey:(id)arg1 withValue:(id)arg2 ;
-(id)keyForValue:(id)arg1 ;
@end
