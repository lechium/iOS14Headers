/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface __NSFrozenArrayM : NSArray {

	A{__cow_state_t}* cow;
	SCD_Struct_NS4* storage;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)copy;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)mutableCopy;
@end

