/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {

	NSMutableArray* _strings;
	void* _stringToIndexMapVoidPtr;
	void* _rangeAndStringVectorVoidPtr;
	BOOL _sorted;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
-(void)sort;
-(void)dealloc;
-(id)stringForIndex:(unsigned)arg1 ;
-(id)init;
-(unsigned)uniquedStringCount;
-(unsigned)indexForString:(id)arg1 insertIfMissing:(BOOL)arg2 ;
-(void)setString:(id)arg1 forRange:(VMURange)arg2 ;
-(id)stringForAddress:(unsigned long long)arg1 ;
-(VMURange)rangeContainingAddress:(unsigned long long)arg1 ;
-(VMURange)rangeForString:(id)arg1 startingAtAddress:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
