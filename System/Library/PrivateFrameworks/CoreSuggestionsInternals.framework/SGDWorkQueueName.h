/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGDWorkQueueName : NSObject <NSCopying> {

	unsigned _timestamp32;
	unsigned _counter32;
	unsigned short _otherbits;

}

@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) unsigned long long counter; 
@property (assign,nonatomic) unsigned long long fails; 
@property (assign,nonatomic) unsigned long long state; 
+(BOOL)isValidFilename:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)counter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)fails;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCounter:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(id)description;
-(id)queueItemId;
-(id)copyWithState:(unsigned long long)arg1 ;
-(id)pathInDirectory:(id)arg1 ;
-(void)setFails:(unsigned long long)arg1 ;
-(id)copyWithState:(unsigned long long)arg1 andFails:(unsigned long long)arg2 ;
@end
