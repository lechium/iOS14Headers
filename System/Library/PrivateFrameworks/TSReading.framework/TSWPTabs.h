/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration> {

	NSMutableArray* _tabs;

}
+(id)tabs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS55*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)insertTab:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)tabAtIndex:(unsigned long long)arg1 ;
-(id)initWithTabs:(id)arg1 ;
-(id)tabAtPosition:(double)arg1 ;
-(id)tabAfterPosition:(double)arg1 ;
-(void)removeTabAtIndex:(unsigned long long)arg1 ;
-(void)setPosition:(double)arg1 forTab:(id)arg2 ;
-(unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3 ;
@end
