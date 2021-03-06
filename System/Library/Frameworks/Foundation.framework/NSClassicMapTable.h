/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS44* _keyCallBacks;
	SCD_Struct_NS45* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)removeAllItems;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(id)allValues;
-(id)copy;
-(id)init;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)allKeys;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
@end

